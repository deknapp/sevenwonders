#ifndef Game_H
#define Game_H

class Game {

 public:
	Game(int timestamp, int sensor_id, double x, double y);
	~Game();

 private:
 	// prevent generated functions --------------------------------------------
	Game(const Game&);
	Game& operator=(const Game&);
};

#endif /* Game_H */

