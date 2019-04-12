#ifndef LET_THE_GAME_BEGIN
#define LET_THE_GAME_BEGIN

#include <iostream>

using namespace std;

class START
{
public:
	START()
	{
		cout << "===Start program===" << endl;
		cout << "You are playing MAFIA game" << endl;
		cout << "(c) Yuzof 2019" << endl;
		cout << "How many players are playing?" << endl;
	}

	~START() 
	{
		cout << "END OF INTRODUCTION" << endl;
	}

};
#endif