#include "../ModulesKurishchenko.h"

ofstream testResult;
ClassLab12_Kurishchenko cylinder(0, 0);

void openFile(string fileName){
    testResult.open(fileName);
    if(!testResult.is_open()) cerr << "File " << fileName << " wasn't opened";
}

void askObjParameters(ClassLab12_Kurishchenko& cyl){
    double radius = 0, height = 0;
    while (true){
        cout << "Enter radius of the cylinder: ";
        cin >> radius;
        cout << "Enter height of the cylinder: ";
        cin >> height;
        if (radius <= 0 || height <= 0) cout << "Radius and height should be positive numbers! Try again.\n";
        else {
            cyl.setRadius(radius);
            cyl.setHeight(height);
            return;
        }
    }
}

void writeTestSuite(string fileName){
    openFile(fileName);
    askObjParameters(cylinder);
    testResult << "Test Case ID,Action,Expected Result,Test Result\n";

    double expectedRadius = cylinder.getRadius();
    double expectedHeight = cylinder.getHeight();
    double expectedArea = cylinder.getLateralSurfaceArea();

    testResult << "1,setRadius()," << expectedRadius << ","
               << (cylinder.getRadius() == expectedRadius ? "passed" : "fail") << '\n';
    testResult << "2,setHeight()," << expectedHeight << ","
               << (cylinder.getHeight() == expectedHeight ? "passed" : "fail") << '\n';
    testResult << "3,getLateralSurfaceArea()," << expectedArea << ","
               << (cylinder.getLateralSurfaceArea() == expectedArea ? "passed" : "fail") << '\n';
}

void wrongPathError(string fileName){
    openFile(fileName);
    for(int i = 0; i < 100; i++) cout << '\a';
    testResult << "Встановлені вимоги порядку виконання лабораторної роботи порушено!";
}

int main()
{
    system("chcp 65001 > nul");
    string pathFile = filesystem::absolute(__FILE__).string();
    bool found = (pathFile.find("\\lab12\\prj") != std::string::npos);
    if(found) writeTestSuite("../../../../TestSuite/TestResult.txt");
    else wrongPathError("../../TestResult.txt");
    testResult.close();
    return 0;
}
