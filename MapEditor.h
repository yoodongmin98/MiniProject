#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Player;
class MapEditor
{
public:
	MapEditor();
	~MapEditor();
	void PrintMap(Player* player);
	inline void ClearMap()
	{
		SaveMap.clear();
	}
	inline void SaveMaps(vector<vector<string>>& _InitMap,int _MapSize)
	{
		SaveMap = _InitMap;
		SaveMapSize = _MapSize;
	}
	int GetMapSize()
	{
		return SaveMapSize;
	}
	
	void PlayerToMapTile(Player* _player);
	void SetMapTile(string _Tile);
protected:

private:
	vector<vector<string>> SaveMap;
	int SaveMapSize = 0;
	string MapTile = " ";
};
