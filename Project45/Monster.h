#pragma once
#include <iostream>
#include <string>


class Monster{
private:
	string MonsterName;
	int MonsterMaxHealth;
	int MonsterDamage;
	int MonsterHealth;
public:
	void setmonsterName(string v){
		MonsterName = v;
	}
	string getmonsterName(){
		return MonsterName;
	}
	void setmonsterMaxHealth(int mmh){
		MonsterMaxHealth = mmh;
	}
	void setmonsterHealth(int mh){
		MonsterHealth = mh;
	}
	void setmonsterDamage(int md){
		MonsterDamage = md;
	}
	int getmonsterMaxHealth(){
		return MonsterMaxHealth;
	}
	int getmonsterHealth(){
		return MonsterHealth;
	}
	int getmonsterDamage(){
		return MonsterDamage;
	}

};
