#pragma once
#include <string>
#include <iostream>

class Items{
private:
	string dagger;
	string rusty_sword; // 5
	string straight_sword; // 10
	string great_sword; // 15
	string stick; // 20
	string leather_armor; // 7
	string chain_armor; // 12
	string plate_armor; // 18
	int schmeebs;
	int purchase;
	

public: void setDagger(int dd){
			dagger = dd;
			dd = 5;
}
		void setRusty(int rsd){
			rusty_sword = rsd;
			rsd = 10;
		}
		void setStraight(int ssd){
			straight_sword = ssd;
			ssd = 15;
		}
		void setGreat(int gsd){
			great_sword = gsd;
			gsd = 25;
		}
		void setStick(int sd){
			stick = sd;
			sd = 999;
		}
		void setLeather(int la){
			leather_armor = la;
			la = 10;
		}
		void setChain(string ca){
			chain_armor = ca;
			ca = 20;
		}
		string getDagger(){
			return dagger;
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
