# sevenwonders
C++ simulation of the Seven Wonders board game

Brief:

The simulation "plays" an entire game for a user-specified number of players. It simulates every player.

The card dealing at the beginning of each round is random from the deck of cards. 

Every player follows a strategy, which is card playing choice rules for each round (e.g. resource cards first round, science cards second round, military cards, third round). 

The game simulates the choices, and in the end everyone gets a score which reflects the combined effects of these choice rules and the initial dealing at the start of each round. 

Although the rules programmed are very simple at the moment, the simulation is under development, and becoming more complex. More strategies and cards are being added. 

Usage:

To build: cmake . (in root directory)

To compile: make (in root or src directory) 

To run: ./swsim [NUMBER OF PLAYERS] [NUMBER OF GAMES] [player 1 round 1 strategy] [player 1 round 2 strategy] [player 1 round 3 strategy] ...

possible strategy keywords: random, resource, science, military, blue, greedy, guild (only works for round 3 strategy)

Example: ./swsim 7 10 resource resource science resource resource greedy 

In this example, there are 7 players and 10 games are simulated.
Player 0 tries to get a resource in the first two rounds, then tries to get a science in the next round.
Player 1 also tries for a resource in the first two rounds, but uses the greedy strategy in the third round.
The other players all choose cards randomly (the default strategy is random).


