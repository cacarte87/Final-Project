#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <string>
#include "Stats.h"
#include "Game.h"
#include "Items.h"
#include "Monster.h"

using namespace std;

void Game::run(){
	Stats a;
	Items b;
	Monster c;
	int temp;
	int menutemp;
	int hometemp;



	cout << "Codies: The Awakening" << endl;
	cout << "By: Chase Carte" << endl;
	

	cout << "Choose your class..." << endl;
	cout << "1.) Warrior: 100 HP 50 STA 5 DMG" << endl;
	cout << "2.) Rogue: 50 HP 100 STA 8 DMG" << endl;
	cout << endl;
	cin >> temp;
	if (temp == 1){
		a.setMaxHealth(100);
		a.setHealth(100);
		a.setMaxStamina(60);
		a.setStamina(60);
		a.setDamage(8);
		b.setSchmeebs(20);
		b.setHPotion(0);
	}
	if (temp == 2){
		a.setMaxHealth(50);
		a.setHealth(75);
		a.setMaxStamina(100);
		a.setStamina(100);		
		a.setDamage(5);
		b.setSchmeebs(20);
		b.setHPotion(0);
	}
	if (temp == 1010){
		a.setMaxHealth(99999);
		a.setHealth(99999);
		a.setMaxStamina(99999);
		a.setStamina(99999);		
		a.setDamage(999);
		b.setSchmeebs(999);
		b.setHPotion(999);
	}
	
	do{
		if (b.getWeaponDmg() > 0){
			a.setDamage(a.getDamage() + b.getWeaponDmg());
		}
		if (a.getStamina() <= 0){
			a.setDamage(0);
		}
		if (a.getArmor() > 0){
			a.setMaxHealth(a.getMaxHealth() + a.getArmor());
		}
		cout << "Health: " << a.getHealth() << "/" << a.getMaxHealth() << " | Stamina: " << a.getStamina() << " | Schmeebs : " << b.getSchmeebs() << endl;
		cout << "Weapon: " << b.getWeaponName() << " | Damage: " << a.getDamage() << " | Armor: " << b.getArmorName() << endl;
		cout << "Health Potions: " << b.getHPotion();
		cout << endl;
		cout << "1.) Home" << endl;
		cout << "2.) Battle" << endl;
		cout << "3.) Exit" << endl;
		menutemp = 0;
		cin >> menutemp;
		for (int i = 0;; i++){


			// HOME
			if (menutemp == 1){
				cout << "HOME" << endl;
				cout << "1.) Shop" << endl;
				cout << "2.) Sleep" << endl;
				cout << "3.) Exit" << endl;
				hometemp = 0;
				cin >> hometemp;
				// SLEEP
				if (hometemp == 2){
					a.setStamina(a.getMaxStamina());
					cout << "Your stamina has been restored!" << endl;
				}
				// END SLEEP
				if (hometemp == 1){
					cout << "What would you like to buy?" << endl;
					cout << "1.) Weapons" << endl;
					cout << "2.) Armor" << endl;
					cout << "3.) Potions" << endl;
					cout << "4.) Exit" << endl;
					temp = 0;
					cin >> temp;

					// SHOP
					if (temp == 1){
						
						int purchase;
						
						cout << "Items available for purchase: " << endl;

						cout << "1.) $15 Dagger (+4 DMG)" << endl; // +4						
						cout << "2.) $30 Rusty Sword (+7 DMG)" << endl; // +7											
						cout << "3.) $50 Straight Sword (+15 DMG)" << endl; // +15												
						cout << "4.) $70 Great Sword (+20 DMG)" << endl; // +20												
						cout << "5.) $100 Stick (+30 DMG)" << endl; // +30
						
						cout << "6.) Leave" << endl;

						cin >> purchase;
						b.setPurchase(purchase);
						switch (b.getPurchase()){
						case 1:
							if (b.getSchmeebs() >= 15){
								b.setWeaponName("Dagger");
								b.setWeaponDmg(4);
								b.setSchmeebs(b.getSchmeebs() - 15);
							}
							break;
						case 2:
							if (b.getSchmeebs() >= 30){
								b.setWeaponName("Rusty Sword");
								b.setWeaponDmg(7);
								b.setSchmeebs(b.getSchmeebs() - 30);
							}
							break;
						case 3:
							if (b.getSchmeebs() >= 50){
								b.setWeaponName("Straight Sword");
								b.setWeaponDmg(15);
								b.setSchmeebs(b.getSchmeebs() - 50);
							}
							break;
						case 4:
							if (b.getSchmeebs() >= 70){
								b.setWeaponName("Great Sword");
								b.setWeaponDmg(20);
								b.setSchmeebs(b.getSchmeebs() - 70);
							}
							break;
						case 5:
							if (b.getSchmeebs() >= 100){
								b.setWeaponName("Stick");
								b.setWeaponDmg(30);
								b.setSchmeebs(b.getSchmeebs() - 100);
							}
							break;
						case 6:
							break;
						}
					
			
					}
					if (temp == 2){
						int value;
						int purchase;
						
						cout << "Items available for purchase: " << endl;
						cout << "1.) $10 Trash Bag (+10 ARMOR | +10 STA)" << endl; // +10
						cout << "2.) $50 Tin Foil (+20 ARMOR | +15 STA)" << endl; // +20
						cout << "3.) $70 Metal Armor (+50 ARMOR | +20 STA)" << endl; // +50
						cout << "4.) $100 Titanium Armor (+70 ARMOR | +30 STA)" << endl; // +70
						cout << "5.) $200 Carbon Fiber Armor (+100 ARMOR | +30 STA)" << endl; // +10			
						cout << "6.) Leave" << endl;

						cin >> purchase;
						b.setPurchase(purchase);
						switch (b.getPurchase()){
						case 1:
							if (b.getSchmeebs() >= 10){
								b.setArmorName("Trash Bag");
								a.setArmor(10);
								b.setSchmeebs(b.getSchmeebs() - 10);
							}
							break;
						case 2:
							if (b.getSchmeebs() >= 50){
								b.setArmorName("Tin Foil");
								a.setArmor(20);
								b.setSchmeebs(b.getSchmeebs() - 50);
							}
							break;
						case 3:
							if (b.getSchmeebs() >= 70){
								b.setArmorName("Metal Armor");
								a.setArmor(50);
								b.setSchmeebs(b.getSchmeebs() - 70);
							}
							break;
						case 4:
							if (b.getSchmeebs() >= 100){
								b.setArmorName("Titanium Armor");
								a.setArmor(70);
								b.setSchmeebs(b.getSchmeebs() - 100);
							}
							else{
								cout << "Not enough schmeebs." << endl;
							}
							break;
						case 5:
							if (b.getSchmeebs() >= 200){
								b.setArmorName("Carbon Fiber Armor");
								a.setArmor(100);
								b.setSchmeebs(b.getSchmeebs() - 150);
							}
							break;
						case 6:
							break;
						}
					}
					if (temp == 3){
						cout << "1.) $5 Health Potion" << endl;
						int value;
						cin >> value;
						switch (value){
						case 1:
							if (b.getSchmeebs() - 5 >= 0){
								b.setHPotion(b.getHPotion() + 1);
								b.setSchmeebs(b.getSchmeebs() - 5);
							}
							else{
								cout << "Not enough Schmeebs!" << endl;
								cout << endl;
							}
						}
					}
					// END SHOP

				}
				if (hometemp == 3){
					break;
				}
				// END HOME


			}


			if (menutemp == 2){
				cout << "Where would you like to battle?" << endl;
				cout << "1.) Training (1 - 5)" << endl;
				cout << "2.) Forest (5 - 8)" << endl;
				cout << "3.) Desert (8 - 12)" << endl;
				cout << "4.) Cave (12 - 15)" << endl;
				cout << "5.) Castle (15 - 20)" << endl;
				cout << "6.) Exit" << endl;
				cout << endl;
				int location = 0;
				cin >> location;
				switch (location){
				case 1:
					cout << "Welcome to the training area!" << endl;
					cout << endl;
					cout << "What would you like to do here?" << endl;
					cout << "1.)Attack!" << endl;
					cout << "2.)Look Around" << endl;
					cout << "3.)Fight the boss" << endl;
					cout << "4.)Leave" << endl;
					temp = 0;
					cin >> temp;

					if (temp == 1){
						temp = 0;
						c.setmonsterName("Dummy");
						c.setmonsterHealth(20);
						c.setmonsterMaxHealth(20);
						c.setmonsterDamage(0);
						
						

						do{
							char choice;
							cout << c.getmonsterName() << " Health: " << c.getmonsterHealth() << endl;
							cout << "Attack using any key! Use 'n' to leave!" << endl;
							cin >> choice;
							if (choice == 'n'){
								break;
							}
								c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());
								a.setHealth(a.getHealth() - c.getmonsterDamage());
								cout << "You did " << a.getDamage() << " damage." << endl;
								cout << c.getmonsterName() << " did " << c.getmonsterDamage() << " damage." << endl;

							
						} while (c.getmonsterHealth() > 0);
						cout << "Monster has been killed" << endl;
						cout << "You got 2 Schmeebs as payment" << endl;
						b.setSchmeebs(b.getSchmeebs() + 2);
						break;
					}
					if (temp == 2){
						if (b.getSchmeebs() > 30){
							cout << "You get nothing!" << endl;
							cout << endl;
							break;
						}

						else{
							b.setSchmeebs(b.getSchmeebs() + 1);
							cout << "1 Schmeeb added!" << endl;
							break;
						}
					}
					if (temp == 3){
						
						cout << "Boss battle initiated!" << endl;
						c.setmonsterName("Sack of Potatoes");
						c.setmonsterHealth(200);
						do{
							if (a.getStamina() < 0){
								cout << endl;
								cout << "You ran out of stamina..." << endl;
								if (b.getSchmeebs() > 5){
									b.setSchmeebs(b.getSchmeebs() - 5);
									cout << "-5 Schmeebs" << endl;
								}
								cout << endl;
								break;

							}
						
								cout << "Health: " << a.getHealth() << "/" << a.getMaxHealth() << " | Stamina: " << a.getStamina() << " | Schmeebs : " << b.getSchmeebs() << endl;
								cout << "Weapon: " << b.getWeaponName() << " | Damage: " << a.getDamage() << " | Armor: " << b.getArmorName() << endl;
								cout << "Health Potions: " << b.getHPotion();
								cout << endl;
								cout << "BOSS: " << c.getmonsterName() << endl;
								cout << "BOSS HEALTH: " << c.getmonsterHealth() << endl;
								cout << endl;
								cout << "Attack using any letter!" << endl;
								cout << "Press 'n' to leave" << endl;
								char key;
								cin >> key;
								a.setStamina(a.getStamina() - 3);
								cout << "-3 Stamina!" << endl;
								cout << "You did " << a.getDamage() << " damage." << endl;
								c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());
							
							
						} while (c.getmonsterHealth() >= 0);
						break;
						
					}
					if (temp == 4){
						break;
					}

				case 2:
					cout << "Welcome to the forest!" << endl;
					cout << endl;
					cout << "What would you like to do here?" << endl;
					cout << "1.)Attack!" << endl;
					cout << "2.)Look Around" << endl;
					cout << "3.)Fight the boss" << endl;
					cout << "4.)Leave" << endl;
					temp = 0;
					cin >> temp;
					if (temp == 1){
						temp = 0;
						c.setmonsterName("Frog");
						c.setmonsterHealth(30);
						c.setmonsterMaxHealth(30);
						c.setmonsterDamage(3);



						do{
							char choice;
							cout << c.getmonsterName() << " Health: " << c.getmonsterHealth() << endl;
							cout << "Attack using any key! Use 'n' to leave!" << endl;
							cin >> choice;
							if (choice == 'n'){
								break;
							}
							c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());
							a.setHealth(a.getHealth() - c.getmonsterDamage());
							cout << "You did " << a.getDamage() << " damage." << endl;
							cout << c.getmonsterName() << " did " << c.getmonsterDamage() << " damage." << endl;


						} while (c.getmonsterHealth() > 0);
						cout << "Monster has been killed" << endl;
						cout << "You got 3 Schmeebs as payment" << endl;
						b.setSchmeebs(b.getSchmeebs() + 3);
						break;
					}
					if (temp == 2){
						if (b.getSchmeebs() > 20){
							cout << "You get nothing" << endl;
							cout << endl;
						}
						else(b.setSchmeebs(b.getSchmeebs() + 3));
						cout << "3 schmeebs added to your inventory." << endl;
					}
					if (temp == 3){
						//BOSS
						cout << "Boss battle initiated!" << endl;
						c.setmonsterName("Bryce Bates");
						c.setmonsterHealth(250);
						c.setmonsterDamage(3);
						do{
							if (a.getStamina() <= 0){
								cout << endl;
								cout << "You ran out of stamina..." << endl;
								if (b.getSchmeebs() > 5){
									b.setSchmeebs(b.getSchmeebs() - 5);
									cout << "-5 Schmeebs" << endl;
								}
								cout << endl;
								break;

							}

							cout << "Health: " << a.getHealth() << "/" << a.getMaxHealth() << " | Stamina: " << a.getStamina() << " | Schmeebs : " << b.getSchmeebs() << endl;
							cout << "Weapon: " << b.getWeaponName() << " | Damage: " << a.getDamage() << " | Armor: " << b.getArmorName() << endl;
							cout << "Health Potions: " << b.getHPotion();
							cout << endl;
							cout << "BOSS: " << c.getmonsterName() << endl;
							cout << "BOSS HEALTH: " << c.getmonsterHealth() << endl;
							cout << endl;
							cout << "Attack using any letter!" << endl;
							cout << "Press 'n' to leave" << endl;
							cout << "Press 'p' to heal with Health Potions" << endl;
							char key;
							cin >> key;
							if (key == 'p' && b.getHPotion() > 0){
								a.setHealth(a.getMaxHealth());
								b.setHPotion(b.getHPotion() - 1);
							}
							if (key == 'n'){
								break;
							}
							a.setStamina(a.getStamina() - 3);
							cout << "-3 Stamina!" << endl;
							cout << "You did " << a.getDamage() << " damage." << endl;
							cout << c.getmonsterName() << " did " << c.getmonsterDamage() << " damage." << endl;
							c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());
							a.setHealth(a.getHealth() - c.getmonsterDamage());


						} while (c.getmonsterHealth() >= 0);
						break;


					}
			
					if (temp = 4){
						break;
					}
				case 3:
					cout << "Welcome to the desert!" << endl;
					cout << endl;
					cout << "What would you like to do here?" << endl;
					cout << "1.)Attack!" << endl;
					cout << "2.)Look Around" << endl;
					cout << "3.)Fight the boss" << endl;
					cout << "4.)Leave" << endl;
					temp = 0;
					cin >> temp;
					if (temp == 1){
						temp = 0;
						c.setmonsterName("Sand Worm");
						c.setmonsterHealth(49);
						c.setmonsterMaxHealth(40);
						c.setmonsterDamage(7);



						do{
							char choice;
							cout << c.getmonsterName() << " Health: " << c.getmonsterHealth() << endl;
							cout << "Attack using any key! Use 'n' to leave!" << endl;
							cin >> choice;
							if (choice == 'n'){
								break;
							}
							c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());
							a.setHealth(a.getHealth() - c.getmonsterDamage());
							cout << "You did " << a.getDamage() << " damage." << endl;
							cout << c.getmonsterName() << " did " << c.getmonsterDamage() << " damage." << endl;


						} while (c.getmonsterHealth() > 0);
						cout << "Monster has been killed" << endl;
						cout << "You got 2 Schmeebs as payment" << endl;
						b.setSchmeebs(b.getSchmeebs() + 2);
						break;
					}
					if (temp = 2){
						if (b.getSchmeebs() > 70){
							cout << "You get nothing!" << endl;
							cout << endl;
						}
						else(b.setSchmeebs(b.getSchmeebs() + 3));
						cout << "One Schmeeb added to your inventory!" << endl;
					}
					if (temp == 3){
						//BOSS
						cout << "Boss battle initiated!" << endl;
						c.setmonsterName("Giant Scorpion");
						c.setmonsterHealth(250);
						c.setmonsterDamage(10);
						do{
							if (a.getStamina() <= 0){
								cout << endl;
								cout << "You ran out of stamina..." << endl;
								if (b.getSchmeebs() > 5){
									b.setSchmeebs(b.getSchmeebs() - 5);
									cout << "-5 Schmeebs" << endl;
								}
								cout << endl;
								break;

							}

							cout << "Health: " << a.getHealth() << "/" << a.getMaxHealth() << " | Stamina: " << a.getStamina() << " | Schmeebs : " << b.getSchmeebs() << endl;
							cout << "Weapon: " << b.getWeaponName() << " | Damage: " << a.getDamage() << " | Armor: " << b.getArmorName() << endl;
							cout << "Health Potions: " << b.getHPotion();
							cout << endl;
							cout << "BOSS: " << c.getmonsterName() << endl;
							cout << "BOSS HEALTH: " << c.getmonsterHealth() << endl;
							cout << endl;
							cout << "Attack using any letter!" << endl;
							cout << "Press 'n' to leave" << endl;
							cout << "Press 'p' to heal with Health Potions" << endl;
							char key;
							cin >> key;
							a.setStamina(a.getStamina() - 3);
							cout << "-3 Stamina!" << endl;
							cout << "You did " << a.getDamage() << " damage." << endl;
							cout << c.getmonsterName() << " did " << c.getmonsterDamage() << " damage." << endl;
							c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());
							a.setHealth(a.getHealth() - c.getmonsterDamage());
							if (key == 'p' && b.getHPotion() > 0){
								a.setHealth(a.getMaxHealth());
								b.setHPotion(b.getHPotion() - 1);
							}

						} while (c.getmonsterHealth() >= 0);
						break;
					}
					if (temp == 4){
						break;
					}
					
				case 4:
					cout << "Welcome to the cave!" << endl;
					cout << endl;
					cout << "What would you like to do here?" << endl;
					cout << "1.)Attack!" << endl;
					cout << "2.)Look Around" << endl;
					cout << "3.)Fight the boss" << endl;
					cout << "4.)Leave" << endl;
					temp = 0;
					cin >> temp;
					if (temp == 1){
						temp = 0;
						c.setmonsterName("Cave Bear");
						c.setmonsterHealth(70);
						c.setmonsterMaxHealth(70);
						c.setmonsterDamage(13);



						do{
							char choice;
							cout << c.getmonsterName() << " Health: " << c.getmonsterHealth() << endl;
							cout << "Attack using any key! Use 'n' to leave!" << endl;
							cin >> choice;
							if (choice == 'n'){
								break;
							}
							c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());
							a.setHealth(a.getHealth() - c.getmonsterDamage());
							cout << "You did " << a.getDamage() << " damage." << endl;
							cout << c.getmonsterName() << " did " << c.getmonsterDamage() << " damage." << endl;


						} while (c.getmonsterHealth() > 0);
						cout << "Monster has been killed" << endl;
						cout << "You got 2 Schmeebs as payment" << endl;
						b.setSchmeebs(b.getSchmeebs() + 2);
						break;
					}
					if (temp == 2){
						if (b.getSchmeebs() > 90){
							cout << "You get nothing!" << endl;
							cout << endl;
						}
						else(b.setSchmeebs(b.getSchmeebs() + 4));
						cout << "One Schmeeb added to your inventory!" << endl;
					}
					// BOSS
					if (temp == 3){
						cout << "Boss battle initiated!" << endl;
						c.setmonsterName("Stinky Sweatshirt");
						c.setmonsterHealth(300);
						c.setmonsterDamage(15);
						do{
							if (a.getStamina() <= 0){
								cout << endl;
								cout << "You ran out of stamina..." << endl;
								if (b.getSchmeebs() > 5){
									b.setSchmeebs(b.getSchmeebs() - 5);
									cout << "-5 Schmeebs" << endl;
								}
								cout << endl;
								break;

							}

							cout << "Health: " << a.getHealth() << "/" << a.getMaxHealth() << " | Stamina: " << a.getStamina() << " | Schmeebs : " << b.getSchmeebs() << endl;
							cout << "Weapon: " << b.getWeaponName() << " | Damage: " << a.getDamage() << " | Armor: " << b.getArmorName() << endl;
							cout << "Health Potions: " << b.getHPotion();
							cout << endl;
							cout << "BOSS: " << c.getmonsterName() << endl;
							cout << "BOSS HEALTH: " << c.getmonsterHealth() << endl;
							cout << endl;
							cout << "Attack using any letter!" << endl;
							cout << "Press 'n' to leave" << endl;
							cout << "Press 'p' to heal with Health Potions" << endl;
							char key;
							cin >> key;
							a.setStamina(a.getStamina() - 3);
							cout << "-3 Stamina!" << endl;
							cout << "You did " << a.getDamage() << " damage." << endl;
							cout << c.getmonsterName() << " did " << c.getmonsterDamage() << " damage." << endl;
							c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());
							a.setHealth(a.getHealth() - c.getmonsterDamage());
							if (key == 'p' && b.getHPotion() > 0){
								a.setHealth(a.getMaxHealth());
								b.setHPotion(b.getHPotion() - 1);
							}

						} while (c.getmonsterHealth() >= 0);
						break;
					}
					if (temp = 4){
						break;
					}
				case 5:
					cout << "Welcome to the castle!" << endl;
					cout << endl;
					cout << "What would you like to do here?" << endl;
					cout << "1.)Attack!" << endl;
					cout << "2.)Look Around" << endl;
					cout << "3.)Fight the boss" << endl;
					cout << "4.)Leave" << endl;
					temp = 0;
					cin >> temp;
					if (temp == 1){
						temp = 0;
						c.setmonsterName("Knight");
						c.setmonsterHealth(100);
						c.setmonsterMaxHealth(100);
						c.setmonsterDamage(20);



						do{
							char choice;
							cout << c.getmonsterName() << " Health: " << c.getmonsterHealth() << endl;
							cout << "Attack using any key! Use 'n' to leave!" << endl;
							cin >> choice;
							if (choice == 'n'){
								break;
							}
							c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());
							a.setHealth(a.getHealth() - c.getmonsterDamage());
							cout << "You did " << a.getDamage() << " damage." << endl;
							cout << c.getmonsterName() << " did " << c.getmonsterDamage() << " damage." << endl;


						} while (c.getmonsterHealth() > 0);
						cout << "Monster has been killed" << endl;
						cout << "You got 10 Schmeebs as payment" << endl;
						b.setSchmeebs(b.getSchmeebs() + 10);
						break;
					}
					if (temp = 2){
						if (b.getSchmeebs() > 110){
							cout << "You get nothing!" << endl;
							cout << endl;
						}
						else(b.setSchmeebs(b.getSchmeebs() + 5));
						cout << "One Schmeeb added to your inventory!" << endl;
					}
					if (temp == 3){
						cout << "Boss battle initiated!" << endl;
						c.setmonsterName("The King");
						c.setmonsterHealth(400);
						c.setmonsterDamage(13);
						do{
							if (a.getStamina() <= 0){
								cout << endl;
								cout << "You ran out of stamina..." << endl;
								if (b.getSchmeebs() > 5){
									b.setSchmeebs(b.getSchmeebs() - 5);
									cout << "-5 Schmeebs" << endl;
								}
								cout << endl;
								break;

							}

							cout << "Health: " << a.getHealth() << "/" << a.getMaxHealth() << " | Stamina: " << a.getStamina() << " | Schmeebs : " << b.getSchmeebs() << endl;
							cout << "Weapon: " << b.getWeaponName() << " | Damage: " << a.getDamage() << " | Armor: " << b.getArmorName() << endl;
							cout << "Health Potions: " << b.getHPotion();
							cout << endl;
							cout << "BOSS: " << c.getmonsterName() << endl;
							cout << "BOSS HEALTH: " << c.getmonsterHealth() << endl;
							cout << endl;
							cout << "Attack using any letter!" << endl;
							cout << "Press 'n' to leave" << endl;
							cout << "Press 'p' to heal with Health Potions" << endl;
							char key;
							cin >> key;
							a.setStamina(a.getStamina() - 3);
							cout << "-3 Stamina!" << endl;
							cout << "You did " << a.getDamage() << " damage." << endl;
							cout << c.getmonsterName() << " did " << c.getmonsterDamage() << " damage." << endl;
							c.setmonsterHealth(c.getmonsterHealth() - a.getDamage());
							a.setHealth(a.getHealth() - c.getmonsterDamage());
							if (key == 'p' && b.getHPotion() > 0){
								a.setHealth(a.getMaxHealth());
								b.setHPotion(b.getHPotion() - 1);
							}

						} while (c.getmonsterHealth() >= 0);
						break;
					}
					cout << "YOU WIN THE GAME!" << endl;
					system("pause");
					return;
					if (temp = 4){
						break;
					}

				}
				if (location == 6){
					break;
				}
			}


		}
	} while (menutemp != 3);
	cout << "Quitting game..." << endl;
}
