#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

#include "GameCore.h"
#include "MapEditor.h"
#include "Player.h"

using namespace std;

bool StartValue = false;

GameCore::GameCore()
{
	Edit = new MapEditor;
	player = new Player;
}
GameCore::~GameCore()
{

}

void GameCore::GameInit(int _MapSize)
{
	MyMap.resize(_MapSize);
	for (auto i = 0; i < MyMap.size(); ++i)
	{
		MyMap[i].resize(MyMap.size());
	}

	Edit->SetMapTile("бс");
	Edit->SaveMaps(MyMap, _MapSize);
}
void GameCore::GameStart()
{
	Preparation();
	
	while (StartValue)
	{
		Edit->PrintMap(player);
		Edit->PlayerToMapTile(player);
		player->InputPlayerMove();
		system("cls");
	}
}
void GameCore::GameEnd()
{
	if (nullptr != Edit)
	{
		delete Edit;
		Edit = nullptr;
	}
	if (nullptr != player)
	{
		delete player;
		player = nullptr;
	}
}

void GameCore::Preparation()
{
	cout << "Press Any Key";
	int Start = _getch();
	if (Start)
		StartValue = true;
	system("cls");
}
