#-------------------------------------------------
#
# Project created by Declan Russell 2016-03-22T13:47:09
#
#-------------------------------------------------

QT       -= core gui

TARGET = simpleShader
TEMPLATE = lib

OBJECTS_DIR = "obj"
MOC_DIR = "moc"

INCLUDEPATH += $$(ARNOLD_PATH)\include  "$$PWD"/include

QMAKE_LIBDIR += $$(ARNOLD_PATH)\lib

LIBS += -L$$(ARNOLD_PATH)\lib -lai
win32:DEFINES += WIN32

HEADERS += include/*.h

SOURCES += src/simpleShader.cpp

win32:{
    #QMAKE_CXXFLAGS += -nologo -MT -EHsc
    #INCLUDEPATH+=C:/boost
}
