# CC = g++
# CFLAGS  = -g -Wall -std=c++11

# default: test

# test: main.o PositionStreamProcessor.o PositionGenerator.o Position.o 

# main.o: main.cpp PositionGenerator.h PositionStreamProcessor.h
# 	$(CC) $(CFLAGS) -c main.cpp

# PositionStreamProcessor.o: PositionStreamProcessor.cpp PositionStreamProcessor.h Position.h
# 	$(CC) $(CFLAGS) -c PositionStreamProcessor.cpp

# PositionGenerator.o: PositionGenerator.cpp PositionGenerator.h Position.h
# 	$(CC) $(CFLAGS) -c PositionGenerator.cpp

# Position.o:  Position.cpp Position.h 
# 	$(CC) $(CFLAGS) -c Position.cpp

# clean: 
# 	$(RM) count *.o *~

CC = g++
CFLAGS  = -g -Wall -std=c++11

default: svsim

svsim: main.o Game.o

main.o: main.cpp PositionGenerator.h PositionStreamProcessor.h
	$(CC) $(CFLAGS) -c main.cpp

Game.o: Game.cpp Game.h

clean: 
	$(RM) count *.o *~