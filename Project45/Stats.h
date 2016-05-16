#include <iostream>
#include <string>
#pragma once

class Stats{
public:
	void setMaxHealth(int mh){
		MaxHealth = mh;
	}
	void setMaxStamina(int ms){
		MaxStamina = ms;
	}
	void setLevel(int l){
		 level = l;
	}
	void setStamina(int s){
		stamina = s;
	}
	void setArmor(int v){
		armor = v;
	}
	void setHealth(int h){
		health = h;
	}
	int getHealth(){
		return health;
	}
	int getStamina(){
		return stamina;
	}
	int getLevel(){
		return level;
	}
	int getMaxHealth(){
		return MaxHealth;
	}
	int getMaxStamina(){
		return MaxStamina;
	}
	void setDamage(int v){
		damage = v;
	}
	int getDamage(){
		return damage;
	}
	int getArmor(){
		return armor;
	}
	int getLuck(){
		return luck;
	}
	void setLuck(int v){
		luck = v;
	}
	
private:
	int health;
	int stamina;
	int MaxHealth;
	int MaxStamina;
	int level;
	int damage;
	int schmeebs;
	int luck;
	int armor;
	
};