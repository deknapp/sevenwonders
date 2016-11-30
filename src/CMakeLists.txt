set(SRC_LIST
    main.cpp)

set(SRC_LIST ${SRC_LIST}
    cards/BlueCard.cpp 
    cards/Card.cpp 
    cards/MilitaryCard.cpp
    cards/ResourceCard.cpp
    cards/ScienceCard.cpp
    cards/GuildCard.cpp
    cards/EconomyCard.cpp)

set(SRC_LIST ${SRC_LIST}
    components/Military.cpp
    components/Resource.cpp
    components/Science.cpp
    components/Wonder.cpp)

set(SRC_LIST ${SRC_LIST}
    game/ArgProcessor.cpp
    game/Deck.cpp
    game/Game.cpp
    game/Player.cpp)

add_executable(swsim ${SRC_LIST})