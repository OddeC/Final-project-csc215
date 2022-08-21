// Final Project Shoppe simulator
// Shjon Oelke

#include <iostream>
#include <string>
#include <vector>
#include "headerFile.h"

using namespace std;

int main()
{
	//declaring playername input and then assigning a pointer to it
	string playerName;
	string* ptr = &playerName;
	//console message that requests player name and then dleivers it.
	cout << "Welcome to the Immersive Adventurer Shop! What is your name traveler?" << endl;
	cin >> playerName;
	cout << "You've come to the right place, " << ptr << ", We have everything a fine adventurer like you could ever want! here is what we have in stock today :" << endl;
	//vector stock array.
	vector<string> stock;
	cout << "Items Available :" << endl;
	stock.push_back("Sword");
	stock.push_back("Potion");
	stock.push_back("Torch");
	stock.push_back("Axe");
	stock.push_back("Bow");
	stock.push_back("Arrows");
	stock.push_back("Leather Armor");
	stock.push_back("Steel Armor");
	stock.push_back("Wizard Robes");
	//for loop printing vector stock
	for (int i = 0; i < stock.size(); i++)
	{
		cout << stock[i] << endl;
	}
	//string declaring playerChoice
	string playerChoice;
	// console asking for player choice
	cout << "Do you see anything you like?" << endl;
	cin >> playerChoice;
	// provided dialogue options based on player choice.
	if (playerChoice == "Sword")
	{
		cout << "So you want my lucky sword ay? I suppose I don't use it no more. That'll be 35 gold." << endl;
	}
	else if (playerChoice == "Axe")
	{
		cout << "Ah, me mighy axe. I remember going through half the countryside of lumber in one day with this. That'll be 35 gold." << endl;
	}
	else if (playerChoice == "bow")
	{
		cout << "Fancy yourself a hunter, do ya? HEy you do me a favor and find a nice pelt out there, I'll take it off your hands. That'll be 35 gold." << endl;
	}
	else if (playerChoice == "Leather Armor")
	{
		cout << "Oh, you want the finer armor. Won't bounce off a solid axe swing, but it's better than nothing. The price on that is 75 gold." << endl;
	}
	else if (playerChoice == "Steel Armor")
	{
		cout << "Ah, we got a real man! This will take anything the world could throw at you. The price on that is 75 gold" << endl;
	}
	else if (playerChoice == "Wizard Robes")
	{
		cout << "Oh boy, you one of those that loves to frolick around, shooting fireballs out your fingers? to each their own i guess. The price on that is 75 gold." << endl;
	}
	else if (playerChoice == "Potion")
	{
		cout << "These'll save you in a pinch. 5 gold each." << endl;
	}
	else if (playerChoice == "Torch")
	{
		cout << "The brightest of lights for the darkest of places. 5 gold each." << endl;
	}
	else if (playerChoice == "Arrows")
	{
		cout << "these are straight enough to shoot apples at 100s of yards. 5 gold each." << endl;
	}
	else if (playerChoice == "Nothing")
	{
		cout << " Nothing catching your fancy? a shame then. Well don't die out there." << endl;
	}
	else
	{
		cout << " What was that? I couldn't hear you, you need to speak up." << endl;
	}
}
