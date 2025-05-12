TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp

HEADERS += \
    ../Modules_Kurishchenko_ShowAndSearch/modules_kurishchenko_showandsearch.h \
    ../struct_type_project_4.h \
    ../interface/interface.h

# Шляхи до заголовочних файлів (не до .cpp!)
INCLUDEPATH += ../Modules_Kurishchenko_ShowAndSearch
INCLUDEPATH += ../interface

# Шлях до статичних бібліотек (.a)
LIBS += $$PWD/../Modules_Kurishchenko_ShowAndSearch/build/Desktop_Qt_6_7_3_llvm_mingw_64_bit-Debug/debug/libmodules_kurishchenko_showandsearch.a
LIBS += $$PWD/../interface/build/Desktop_Qt_6_7_3_llvm_mingw_64_bit-Debug/debug/libinterface.a

