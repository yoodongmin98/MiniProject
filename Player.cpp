#include "Player.h"
#include <conio.h>

using namespace std;

#include "MapEditor.h"



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

void Player::MovePlayerPos(int _X, int _Y,MapEditor* _Maps)
{
	if (Moveable(_X,_Y, _Maps))
	{
		PlayerPos.first += _X;
		PlayerPos.second += _Y;
	}
}

void Player::InputPlayerMove(MapEditor* _Maps)
{
	
	int key = _getch();
	switch (key)
	{
	case 'w':
	case 'W':
	{
		MovePlayerPos(0, -1, _Maps);
		break;
	}
	case 's':
	case 'S':
	{
		MovePlayerPos(0, 1, _Maps);
		break;
	}
	case 'a':
	case 'A':
	{
		MovePlayerPos(-1, 0, _Maps);
		break;
	}
	case 'd':
	case 'D':
	{
		MovePlayerPos(1, 0, _Maps);
		break;
	}
	default:
		break;
	}
}

bool Player::Moveable(int _X, int _Y,MapEditor* _Maps)
{
	int NX = PlayerPos.first + _X;
	int NY = PlayerPos.second + _Y;
	int MS = _Maps->GetMapSize();
	if (NX < MS && NX >= 0 && NY < MS && NY >= 0)
		return true;
	return false;
}
