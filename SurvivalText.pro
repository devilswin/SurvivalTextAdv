TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += qt
Qt += opengl
CONFIG += c++11
SOURCES += main.cpp \
    location.cpp \
    structures.cpp \
    shack.cpp \
    loot.cpp \
    maps.cpp

HEADERS += \
    location.hpp \
    structures.hpp \
    shack.hpp \
    loot.hpp \
    maps.hpp


