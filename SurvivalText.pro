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
    choice_enterbuilding.cpp \
    policestation.cpp \
    house.cpp \
    firestation.cpp \
    foodstore.cpp

HEADERS += \
    location.hpp \
    structures.hpp \
    shack.hpp \
    loot.hpp \
    choice_enterbuilding.hpp \
    policestation.hpp \
    house.hpp \
    firestation.hpp \
    foodstore.hpp


