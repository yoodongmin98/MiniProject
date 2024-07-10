#include <iostream>
#include "GameCore.h"

using namespace std;






int main()
{
	GameCore* Core = new GameCore;
	Core->GameInit(15); //Input MapSize
	Core->GameStart();
	Core->GameEnd();
}