#pragma once
#include <iostream>
#include <vector>


using namespace std;

class Player;
class MapEditor;
class GameCore
{
public:
	GameCore();
	~GameCore();
	void Preparation();

	void GameInit(int _MapSize);
	void GameStart();
	void GameEnd();
protected:
	virtual void Update() {};
private:
	MapEditor* Edit;
	Player* player;
	vector<vector<string>> MyMap;
};
