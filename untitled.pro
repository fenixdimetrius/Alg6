TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

unix:!macx: LIBS += -L$$PWD/../../gsl/lib/ -lgsl

INCLUDEPATH += $$PWD/../../gsl/include
DEPENDPATH += $$PWD/../../gsl/include

unix:!macx: PRE_TARGETDEPS += $$PWD/../../gsl/lib/libgsl.a

unix:!macx: LIBS += -L$$PWD/../../gsl/lib/ -lgslcblas

INCLUDEPATH += $$PWD/../../gsl/include
DEPENDPATH += $$PWD/../../gsl/include

unix:!macx: PRE_TARGETDEPS += $$PWD/../../gsl/lib/libgslcblas.a
