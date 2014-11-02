TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += c++11
LIBS += -L"/usr/local/lib"
CONFIG(release, debug|release): LIBS += -lsfml-graphics -lsfml-system -lsfml-network -lsfml-window
CONFIG(debug, debug|release): LIBS +=  -lsfml-graphics -lsfml-system -lsfml-network -lsfml-window

INCLUDEPATH += "/usr/local/include"
DEPENDPATH += "/usr/local/include"
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
    output_funcs.cpp \
    item.cpp \
    first_input.cpp \
    gun.cpp

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
    output_funcs.hpp \
    item.hpp \
    first_input.hpp \
    gun.hpp


