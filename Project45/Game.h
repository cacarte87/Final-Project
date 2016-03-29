#include <iostream>


class Stats{
public:
	void setHealth(int h);
	void setStamina(int s);
	void setLevel(int l);
	int getLevel();
	int getHealth();
	int getStamina();
private:
	int health;
	int stamina;
	int level;
};