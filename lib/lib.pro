include(../version.pri)

TEMPLATE = lib
TARGET = ofono-qt

CONFIG += debug
DEFINES += BUILD_OFONO_QT_LIBRARY

QT += dbus
QT -= gui
INCLUDEPATH += ../

PUBLIC_HEADERS += ofonointerface.h 
PUBLIC_HEADERS += ofonomodeminterface.h 
PUBLIC_HEADERS += ofonomodemmanager.h
PUBLIC_HEADERS += ofonomodem.h
PUBLIC_HEADERS += ofonophonebook.h
PUBLIC_HEADERS += ofonomessagemanager.h
PUBLIC_HEADERS += ofonomessagewaiting.h
PUBLIC_HEADERS += ofonoradiosettings.h
PUBLIC_HEADERS += ofonosimmanager.h
PUBLIC_HEADERS += ofonocallbarring.h
PUBLIC_HEADERS += ofonocallforwarding.h
PUBLIC_HEADERS += ofonocallmeter.h
PUBLIC_HEADERS += ofonocallsettings.h
PUBLIC_HEADERS += ofononetworkoperator.h
PUBLIC_HEADERS += ofononetworkregistration.h
PUBLIC_HEADERS += ofonosupplementaryservices.h
PUBLIC_HEADERS += ofonovoicecallmanager.h

HEADERS += $$PUBLIC_HEADERS

SOURCES += ofonointerface.cpp 
SOURCES += ofonomodeminterface.cpp 
SOURCES += ofonomodemmanager.cpp	
SOURCES += ofonomodem.cpp
SOURCES += ofonophonebook.cpp
SOURCES += ofonomessagemanager.cpp
SOURCES += ofonomessagewaiting.cpp
SOURCES += ofonoradiosettings.cpp
SOURCES += ofonosimmanager.cpp
SOURCES += ofonocallbarring.cpp
SOURCES += ofonocallforwarding.cpp
SOURCES += ofonocallmeter.cpp
SOURCES += ofonocallsettings.cpp
SOURCES += ofononetworkoperator.cpp
SOURCES += ofononetworkregistration.cpp
SOURCES += ofonosupplementaryservices.cpp
SOURCES += ofonovoicecallmanager.cpp

target.path = $$[QT_INSTALL_PREFIX]/lib
headers.files = $$PUBLIC_HEADERS
headers.path = $$[QT_INSTALL_PREFIX]/include/ofono-qt

CONFIG += create_pc create_prl

pkgconfig.path = $$[QT_INSTALL_PREFIX]/lib/pkgconfig
pkgconfig.files = ofono-qt.pc

qtconfig.path = $$[QT_INSTALL_PREFIX]/share/qt4/mkspecs/features
qtconfig.files = ofono-qt.prf

INSTALLS += target headers pkgconfig qtconfig
