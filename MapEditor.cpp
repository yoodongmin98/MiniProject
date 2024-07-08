#include "MapEditor.h"
#include "Player.h"
using namespace std;







MapEditor::MapEditor()
{

}
MapEditor::~MapEditor()
{

}
void MapEditor::PrintMap(Player* _player)
{
	int PX = _player->GetPlayerXPos();
	int PY = _player->GetPlayerYPos();
	SaveMap[PY][PX] = _player->GetPlayerChar();
	for (auto i = 0; i < SaveMap.size(); ++i)
	{
		for (auto V : SaveMap[i])
		{
			if (V == _player->GetPlayerChar())
				cout << V;
			else
			{
				cout << MapTile;
			}
		}
		cout << endl;
	}
}

void MapEditor::SetMapTile(string _Tile)
{
	if (_Tile == MapTile)
	{
		cout << "Already Set Tiles" << endl;
	}
	else
	{
		MapTile = _Tile;
	}
}

void MapEditor::PlayerToMapTile(Player* _player)
{
	if(_player !=nullptr)
		SaveMap[_player->GetPlayerYPos()][_player->GetPlayerXPos()] = "";
}