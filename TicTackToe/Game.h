#pragma once
#include "pch.h"

class Game
{
public:
	Game();
	~Game();

	void draw();
	void playerOneInput();
	void playerTwoInput();
	void winCheck();
	void update();

private:
	char grid[3][3] = {
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
	};
	int mapHeight = 3;
	int mapWidth = 3;
	bool gameEnd = false;
	bool playerOneTurn = true;
	bool playerTwoTurn = false;
};

