#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>


#include "Stock_player.cpp"
#include "Start_game.cpp"
#include "Game_circle.cpp"
//#include "Set_players_roles.cpp"

using namespace std;

int main()
{
	START* GAME_VERY_BEGINING;
	GAME_VERY_BEGINING = new START; 

	int players_number;

	cin >> players_number;
	cout << "There are " << players_number << " players" << endl;
	
	player* game_players[100];
	
	//SET_GAMERS_ROLE(game_players, players_number);
	for (int i = 0; i < players_number; i++)
	{
		game_players[i] = new player;
	}

	int random_roles = 0;
	bool doc = true, sherif = true;

	if (players_number < 7)
	{
		random_roles = 2;
		int mafia_quantity = 1;
		int common_quantity = players_number - mafia_quantity - 2;
	}
	if ((players_number < 13) && (players_number >= 7))
	{
		random_roles = 1;
		int mafia_quantity = 2;
		int common_quantity = players_number - mafia_quantity - 2;
	}
	if (players_number >= 13)
	{
		random_roles = 0;
		int mafia_quantity = 3;
		int common_quantity = players_number - mafia_quantity - 3;
		bool butterfly = true;
	}

	while (random_roles < 3)
	{
		int i;

		if (players_number < 7) i = rand() % 7;

		if ((players_number < 13) && (players_number >= 7)) i = rand() % 13;

		if (players_number >= 13) i = rand() % players_number;

		cout << "Mafia player " << i << endl;
		Roles x = game_players[i]->show_role();
		if (x == role_common)
		{
			game_players[i]->set_role(role_mafia);
			random_roles++;
		}
	}

	random_roles = 0;
	while (random_roles < 1)
	{
		int i = rand() % players_number;
		Roles x = game_players[i]->show_role();
		if (x == role_common)
		{
			cout << "Doc player " << i << endl;
			game_players[i]->set_role(role_doc);
			random_roles++;
		}
	}

	random_roles = 0;

	while (random_roles < 1)
	{
		int i = rand() % players_number;
		Roles x = game_players[i]->show_role();
		if (x == role_common)
		{
			cout << "Sherif player " << i << endl;
			game_players[i]->set_role(role_sherif);
			random_roles++;
		}
	}

	random_roles = 0;

	if (players_number >= 13)
	{
		while (random_roles < 1)
		{
			int i = rand() % players_number;
			Roles x = game_players[i]->show_role();
			if (x == role_common)
			{
				cout << "Butterfly player " << i << endl;
				game_players[i]->set_role(role_butterfly);
				random_roles++;
			}
		}
	}
	for (int i = 0; i < players_number; i++)
	{
		Roles x = game_players[i]->show_role();

		cout << "Players " << i << " role is " << x << endl;
	}

	delete GAME_VERY_BEGINING;

	bool game_process = true;

	cout << "begin" << endl;

	while (game_process)
	{
	

	}




















	//delete game_players;

	cout << "PRESS ANY KEY" << endl;

	_getch();

	return 0;
}