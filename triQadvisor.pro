#-------------------------------------------------
#
# Project created by QtCreator 2016-05-01T18:53:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = triQadvisor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    guest_widget.cpp \
    logged_user_widget.cpp \
    exceptions.cpp \
    place_db_manager.cpp \
    profile.cpp \
    user_abstract.cpp \
    user_base.cpp \
    user_business.cpp \
    user_db_manager.cpp \
    user_owner.cpp \
    start_widget.cpp \
    loginwidget.cpp

HEADERS  += mainwindow.h \
    guest_widget.h \
    logged_user_widget.h \
    exceptions.h \
    place_db_manager.h \
    profile.h \
    user_abstract.h \
    user_base.h \
    user_business.h \
    user_db_manager.h \
    user_owner.h \
    start_widget.h \
    loginwidget.h

FORMS    += mainwindow.ui
