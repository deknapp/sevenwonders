# sevenwonders
C++ simulation of the Seven Wonders board game

Brief:

The simulation "plays" an entire game for a user-specified number of players. Each player randomly selects cards, unless the user specifies a strategy for that player. 

Usage:

To build: cmake . (in root directory)

To compile: make (in root or src directory) 

To run: ./swsim [NUMBER OF PLAYERS] [NUMBER OF GAMES] [player 1 strategy] [player 2 strategy] ...

possible strategy keywords: random, resource, science, military, blue, greedy, guild

Example: ./swsim 7 10 resource greedy

In this example, there are 7 players and 10 games are simulated.
Player 0 tries to get a resource before any card.
Player 1 uses the "greedy" strategy.


