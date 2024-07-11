#include <iostream>
#include "GameCore.h"

using namespace std;






int main()
{
	std::shared_ptr<GameCore> Core = make_shared<GameCore>();
	Core->GameInit(15); //Input MapSize
	Core->GameStart();
	Core->GameEnd();
}