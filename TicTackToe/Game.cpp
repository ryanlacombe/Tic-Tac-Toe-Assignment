#include "pch.h"
#include "Game.h"
#include "GameDefines.h"
#include <iostream>


Game::Game()
{

}


Game::~Game()
{

}

void Game::draw()
{
	for (int y = 0; y < mapHeight; y++)
	{
		for (int x = 0; x < mapWidth; x++)
		{			
			std::cout << BLUE << "|" << grid[x][y] << "|" << RESET_COLOR;
		}
		std::cout << std::endl;
	}
}
