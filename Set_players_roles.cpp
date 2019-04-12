#ifndef SET_GAMERS_ROLES
#define SET_GAMERS_ROLES

#include <stdio.h>
#include <iostream>
#include "Stock_player.cpp"

using namespace std;


void SET_GAMERS_ROLE(player* game_players[], int players_number)
{
	for (int i = 0; i < players_number; i++)
	{
		game_players[i] = new player;
	}

	int random_roles = 0;

	if (players_number < 7) random_roles = 2;
	if ((players_number < 13) && (players_number >= 7)) random_roles = 1;
	if (players_number >= 13) random_roles = 0;

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
		int i = rand() % 10 + rand() % 10;
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
		int i = rand() % 10 + rand() % 10;
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
			int i = rand() % 10 + rand() % 10;
			Roles x = game_players[i]->show_role();
			if (x == role_common)
			{
				cout << "Butterfly player " << i << endl;
				game_players[i]->set_role(role_butterfly);
				random_roles++;
			}
		}
	}
	for (int i = 0; i < 20; i++)
	{
		Roles x = game_players[i]->show_role();

		cout << "Players " << i << " role is " << x << endl;
	}
}





#endif 
