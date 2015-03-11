#-------------------------------------------------
#
# Project created by QtCreator 2015-03-11T10:02:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = demoqtwidget
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    readme.txt

unix {
        target.path = /root
        INSTALLS += target
}
