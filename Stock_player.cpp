#ifndef STOCK_PLAYER
#define STOCK_PLAYER


#include <iostream>

using namespace std;

enum Roles
{
	role_common,
	role_mafia,
	role_butterfly,
	role_sherif,
	role_doc
};

class player
	{
	protected:
		Roles pearson_role = role_common;
		bool dead;
		bool healed;
		bool fuked;
	public:
		player() {}
		Roles show_role()
		{
			return pearson_role;
		}
		void set_role(Roles x)
		{
			this->pearson_role = x;
		}
		void shot()
		{
			this->dead = 1;
		}
		void heal()
		{
			this->healed = 1;
		}
		void fukeng()
		{
			this->fuked = 1;
		}
		void new_day_new_life()
		{
			this->dead = 0;
			this->healed = 0;
			this->fuked = 0;
		}
		virtual void NIGHT_MOVE() {};
	};



#endif