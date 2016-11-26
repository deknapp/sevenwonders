# sevenwonders
C++ simulation of the Seven Wonders board game

Brief:
The simulation "plays" an entire game for a user-specified number of players. It simulates every player. 
The card dealing at the beginning of each round is random from the deck of cards. 
Every player follows a strategy, which is card playing choice rules for each round (e.g. resource cards first round, science cards second round, military cards, third round). 
The game simulates the choices, and in the end everyone gets a score which reflects the combined effects of these choice rules and the initial dealing at the start of each round.
Although the rules programmed are very simple at the moment, the simulation is under development, and becoming more complex. More strategies and cards are being added. 

Usage:

./swsim [NUMBER OF PLAYERS] [NUMBER OF GAMES]

Example:

./swsim 7 10
