// Final Project Shoppe simulator
// Shjon Oelke

#include <iostream>

using namespace std;
// function that reads stock stats
void shopStock() {

	// class designated for weapon items
	class weapons {
	public:
		// using reference for weapon price association
		int w_price = 35;
		int& wref = w_price;
		double weaponStock(string Sword, string Axe, string Bow);
		double weaponStock = wref;
		
	
	};
	// class designated for armor items
	class armor {
	public:
		// using reference for armor price association
		int a_price = 75;
		int& aref = a_price;
		double armorStock(string Leather, string Steel, string Robes);
		double armorStock = aref;
		
	};
	// class designated for consumables
	class items {
	public:
		// using reference for consumable price association
		int i_price = 5;
		int& iref = i_price;
		double itemsStock(string Potion, string Arrows, string Torches);
		double itemsStock = iref;
	
	};

}
/*
	Inheritance Script

	#include <iostream>

	using namepsace std;
	
	void shopStock(){
	class Weapons
	{
	public:
	int w_price;

		sword();

		Axe();

		Bow();
	};
	Weapon::sword():
	w_price(35)
	{}
	}
*/