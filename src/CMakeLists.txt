set(SRC_LIST
    main.cpp)

set(SRC_LIST ${SRC_LIST}
    cards/BlueCard.cpp 
    cards/Card.cpp 
    cards/MilitaryCard.cpp
    cards/ResourceCard.cpp
    cards/ScienceCard.cpp)

set(SRC_LIST ${SRC_LIST}
    components/Military.cpp
    components/Resource.cpp
    components/Science.cpp)

set(SRC_LIST ${SRC_LIST}
    game/ArgProcessor.cpp
    game/Game.cpp
    game/Player.cpp)

set(SRC_LIST ${SRC_LIST}
    strategies/ArgProcessor.cpp
    strategies/Priority.cpp
    strategies/ProcessArgs.cpp
    strategies/Random.cpp)

add_executable(swsim ${SRC_LIST})