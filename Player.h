#include <iostream>

using namespace std;


class Player 
{
public:
	Player();
	~Player();
	inline void SetPlayerChar(string _playerchar);
	void MovePlayerPos(int _X, int _Y);

	int GetPlayerXPos()
	{
		return PlayerPos.first;
	}
	int GetPlayerYPos()
	{
		return PlayerPos.second;
	}
	inline string GetPlayerChar() const
	{
		return playerchar;
	}
	void InputPlayerMove();
protected:
private:
	string playerchar = "¡Ý";
	pair<int, int> PlayerPos = { 0,0 };
};

