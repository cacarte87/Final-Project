#pragma once

class Items{
private:
	int ItemDmg;
	string stick;
	string rusty_sword;
	string semi_rusty_sword;
	string post_rusty_sword;
	string sword;
public:
	void setItemDmg(int v){
		ItemDmg = v;
	}
	int getItemDmg(){
		return ItemDmg;
	}
};