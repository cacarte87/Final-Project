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
	void setMonsterName(string v){
		MonsterName = v;
	}
	string getMonsterName(){
		return MonsterName;
	}
	void setMonsterMaxHealth(int mmh){
		MonsterMaxHealth = mmh;
	}
	void setMonsterHealth(int mh){
		MonsterHealth = mh;
	}
	void setMonsterDamage(int md){
		MonsterDamage = md;
	}
	int getMonsterMaxHealth(){
		return MonsterMaxHealth;
	}
	int getMonsterHealth(){
		return MonsterHealth;
	}
	int getMonsterDamage(){
		return MonsterDamage;
	}

};
