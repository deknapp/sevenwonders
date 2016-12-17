# sevenwonders
C++ simulation of the Seven Wonders board game

To build: cmake . in root directory
To make: make in root or src directory
To run: ./swsim number_of_players number_of_games_to_simulate

The choice to play a resource card depends on the value function (1):
(1) resource_card_value = resource_constant - (num_player_resource + resource_weight*num_neighbor_resource)
Currently these values are hard-coded (code still under development). 

The goal of this simulation is to determine how to choose the optimal card in each round. 
