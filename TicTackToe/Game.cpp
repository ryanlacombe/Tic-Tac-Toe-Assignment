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
	for (int x = 0; x < mapWidth; x++)
	{
		for (int y = 0; y < mapHeight; y++)
		{			
			std::cout << BLUE << "|" << RED << grid[x][y] << BLUE << "|" << RESET_COLOR;
		}
		std::cout << std::endl;
	}
}

void Game::playerOneInput()
{
	char input;

	std::cout << YELLOW << "Player 1 choose a space: " << RESET_COLOR;
	std::cin >> input;
	if (input == '1' && grid[0][0] == '1')
	{
		grid[0][0] = 'X';
		playerOneTurn = false;
		playerTwoTurn = true;
	}
	else if (input == '2' && grid[0][1] == '2')
	{
		grid[0][1] = 'X';
		playerOneTurn = false;
		playerTwoTurn = true;
	}
	else if (input == '3' && grid[0][2] == '3')
	{
		grid[0][2] = 'X';
		playerOneTurn = false;
		playerTwoTurn = true;
	}
	else if (input == '4' && grid[1][0] == '4')
	{
		grid[1][0] = 'X';
		playerOneTurn = false;
		playerTwoTurn = true;
	}
	else if (input == '5' && grid[1][1] == '5')
	{
		grid[1][1] = 'X';
		playerOneTurn = false;
		playerTwoTurn = true;
	}
	else if (input == '6' && grid[1][2] == '6')
	{
		grid[1][2] = 'X';
		playerOneTurn = false;
		playerTwoTurn = true;
	}
	else if (input == '7' && grid[2][0] == '7')
	{
		grid[2][0] = 'X';
		playerOneTurn = false;
		playerTwoTurn = true;
	}
	else if (input == '8' && grid[2][1] == '8')
	{
		grid[2][1] = 'X';
		playerOneTurn = false;
		playerTwoTurn = true;
	}
	else if (input == '9' && grid[2][2] == '9')
	{
		grid[2][2] = 'X';
		playerOneTurn = false;
		playerTwoTurn = true;
	}
	else
	{
		std::cout << YELLOW << "Invalid input. Please try again." << RESET_COLOR << std::endl;
	}
}

void Game::playerTwoInput()
{
	char input;

	std::cout << YELLOW << "Player 2 choose a space: " << RESET_COLOR;
	std::cin >> input;
	if (input == '1' && grid[0][0] == '1')
	{
		grid[0][0] = 'O';
		playerTwoTurn = false;
		playerOneTurn = true;
	}
	else if (input == '2' && grid[0][1] == '2')
	{
		grid[0][1] = 'O';
		playerTwoTurn = false;
		playerOneTurn = true;
	}
	else if (input == '3' && grid[0][2] == '3')
	{
		grid[0][2] = 'O';
		playerTwoTurn = false;
		playerOneTurn = true;
	}
	else if (input == '4' && grid[1][0] == '4')
	{
		grid[1][0] = 'O';
		playerTwoTurn = false;
		playerOneTurn = true;
	}
	else if (input == '5' && grid[1][1] == '5')
	{
		grid[1][1] = 'O';
		playerTwoTurn = false;
		playerOneTurn = true;
	}
	else if (input == '6' && grid[1][2] == '6')
	{
		grid[1][2] = 'O';
		playerTwoTurn = false;
		playerOneTurn = true;
	}
	else if (input == '7' && grid[2][0] == '7')
	{
		grid[2][0] = 'O';
		playerTwoTurn = false;
		playerOneTurn = true;
	}
	else if (input == '8' && grid[2][1] == '8')
	{
		grid[2][1] = 'O';
		playerTwoTurn = false;
		playerOneTurn = true;
	}
	else if (input == '9' && grid[2][2] == '9')
	{
		grid[2][2] = 'O';
		playerTwoTurn = false;
		playerOneTurn = true;
	}
	else
	{
		std::cout << YELLOW << "Invalid input. Please try again." << RESET_COLOR << std::endl;
	}
}

void Game::winCheck()
{
	if (grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X')
	{
		std::cout << GREEN << "Player One wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X')
	{
		std::cout << GREEN << "Player One wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X')
	{
		std::cout << GREEN << "Player One wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X')
	{
		std::cout << GREEN << "Player One wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X')
	{
		std::cout << GREEN << "Player One wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X')
	{
		std::cout << GREEN << "Player One wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X')
	{
		std::cout << GREEN << "Player One wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X')
	{
		std::cout << GREEN << "Player One wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}

	else if (grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O')
	{
		std::cout << GREEN << "Player Two wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O')
	{
		std::cout << GREEN << "Player Two wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O')
	{
		std::cout << GREEN << "Player Two wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O')
	{
		std::cout << GREEN << "Player Two wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O')
	{
		std::cout << GREEN << "Player Two wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[0][1] == 'O' && grid[1][1] == 'O' && grid[2][1] == 'O')
	{
		std::cout << GREEN << "Player Two wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O')
	{
		std::cout << GREEN << "Player Two wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}
	else if (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O')
	{
		std::cout << GREEN << "Player Two wins!" << RESET_COLOR << std::endl;
		gameEnd = true;
	}

	else
	{
		gameEnd = false;
	}
}

void Game::update()
{
	while (!gameEnd)
	{
		draw();
		if (playerOneTurn)
		{
			playerOneInput();
		}
		else if (playerTwoTurn)
		{
			playerTwoInput();
		}

		winCheck();
	}
}
