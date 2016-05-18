#pragma once
#include <string>
#include <iostream>

class Items{
private:
	string WeaponName;
	string ArmorName;
	int armor;
	int WeaponDmg;
	int schmeebs;
	int purchase;
	int HPotion;
	

public: 
	string getWeaponName(){
		return WeaponName;
	}
	void setWeaponName(string v){
		WeaponName = v;
	}
	string getArmorName(){
		return ArmorName;
	}
	void setArmorName(string v){
		ArmorName = v;
	}
	int getHPotion(){
		return HPotion;
	}
	void setHPotion(int v){
		HPotion = v;
	}
	void setWeaponDmg(int v){
		WeaponDmg = v;
	}
	int getWeaponDmg(){
		return WeaponDmg;
	}
	int getSchmeebs(){
		return schmeebs;
	}
	void setSchmeebs(int sch){
		schmeebs = sch;
	}
	void setPurchase(int v){
		purchase = v;
	}
	int getPurchase(){
		return purchase;
	}
};

