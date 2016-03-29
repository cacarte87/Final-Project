#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <string>
#include "Game.h"

using namespace std;

int main(){
	Stats a;
	int temp;
	ifstream f;
	

	int menu0 = 0;

	cout << "TBD" << endl;
	cout << "By: Chase & Max" << endl;
	cout << "What would you like to do?" << endl;
	cout << "1.) New Game" << endl;
	cout << "2.) Load Game" << endl;
	cin >> menu0;

	switch (menu0){
	case 1:
		int save;
		cout << "Choose a save file" << endl;
		cout << "Save 1" << endl;
		cout << "Save 2" << endl;
		cout << "Save 3" << endl;
		cin >> save;

		if (save = 1){
			f.open("save1.txt");
		}
		if (save = 2){
			f.open("save2.txt");
		}
		if (save = 3){
			f.open("save3.txt");
		}
		break;
	case 2:
		string saveFile;
		cout << "Choose your save file (saveX): ";
		cin >> saveFile;
		f.open(saveFile);
		break;
	
	}
	
	cout << "Welcome... choose your class." << endl;
	cout << "1.) Warrior: 100 HP 50 ST" << endl;
	cout << "2.) Rogue: 50 HP 100 ST" << endl;
	cout << endl;
	cin >> temp;
	if (temp = 1){
		a.setHealth = 100;
		a.setStamina = 50;
		a.setLevel = 1;
	}
	if (temp = 2){
		a.setHealth = 50;
		a.setStamina = 100;
		a.setLevel = 1;
	}



	do{
		cout << "Health: " << a.getHealth() << " Stamina: " << a.getStamina() << " Level: " << a.getLevel() << endl;
		cout << "1.) Home" << endl;
		cout << "2.) Battle" << endl;
		cout << "3.) Exit" << endl;
		temp = 0;
		cin >> temp;
		for (int i = 0;; i++){
			if (temp = 1){
				cout << "HOME" << endl;
			}
		}
	
		



	} while (temp != 3);



	system("pause");
	return 0;
}

		