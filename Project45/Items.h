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
	

public: 
	string getWeaponName(){
		return WeaponName;
	}
	string setWeaponName(string v){
		WeaponName = v;
	}
	string getArmorName(){
		return ArmorName;
	}
	string setArmorName(string v){
		ArmorName = v;
	}
	int setWeaponDmg(int v){
		WeaponDmg = v;
	}
	int getWeaponDmg(){
		return WeaponDmg
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

