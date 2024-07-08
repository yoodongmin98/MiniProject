#include "Player.h"
#include <conio.h>
using namespace std;



Player::Player()
{

}
Player::~Player()
{

}



inline void Player::SetPlayerChar(string _playerchar)
{
	if (_playerchar == playerchar)
	{
		cout << "Same Player Tile" << endl;
	}
	playerchar = _playerchar;
}

void Player::MovePlayerPos(int _X, int _Y)
{
	PlayerPos.first += _X;
	PlayerPos.second += _Y;
}

void Player::InputPlayerMove()
{
	int key = _getch();
	switch (key)
	{
	case 'w':
	case 'W':
	{
		MovePlayerPos(0, -1);
		break;
	}
	case 's':
	case 'S':
	{
		MovePlayerPos(0, 1);
		break;
	}
	case 'a':
	case 'A':
	{
		MovePlayerPos(-1, 0);
		break;
	}
	case 'd':
	case 'D':
	{
		MovePlayerPos(1, 0);
		break;
	}
	default:
		break;
	}
}

