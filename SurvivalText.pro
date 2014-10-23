TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += qt
Qt += opengl
CONFIG += c++11
SOURCES += main.cpp \
    location.cpp \
    shack.cpp \
    loot.cpp \
    choice_enterbuilding.cpp \
    policestation.cpp \
    house.cpp \
    firestation.cpp \
    foodstore.cpp \
    buildings.cpp \
    military_base.cpp \
    entity.cpp \
    player.cpp \
    first_launch.cpp

HEADERS += \
    location.hpp \
    shack.hpp \
    loot.hpp \
    choice_enterbuilding.hpp \
    policestation.hpp \
    house.hpp \
    firestation.hpp \
    foodstore.hpp \
    buildings.hpp \
    military_base.hpp \
    entity.hpp \
    player.hpp \
    first_launch.hpp


