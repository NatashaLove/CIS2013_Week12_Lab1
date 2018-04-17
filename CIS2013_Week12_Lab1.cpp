#include <iostream>
#include <cstring>

using namespace std;
// the class will remember all data changes in the main
class Human {
		private:
		int legs;
		int arms;
		
		public:
		
		string hair;
		string name;
		
		Human () {
			setName ();
			setHair (); // construct - returns the function after creating an object
			legs = 2;
			arms = 2;
		}
		
		int getLegs () {
			return legs;
		}
		int setLegs () {
			cout << "How many legs do you want? ";
			cin >> legs;
		}
		
		int getArms () {
			return arms;
		}
		
		// the function is separate from construct in order to use it later separately
		void setHair ()		{
			cout << "What hair color do you want?";
			cin >> hair;
		}
		void setName ()		{
			cout << "What name do you want?";
			cin >> name;
		}
		
};
// class Man and Woman inherit from class Human all what in public
class Man : public Human {
	public:
	
	bool hasEgo = true;
	string pee = "standing";
	
};
class Woman : public Human {
	public:
	
	bool hasEgo = false;
	string pee = "sitting";
	
};

int main () {
	
	Man bob;
	Woman sue;

	cout << "Our "<< bob.name <<  " has " << bob.getLegs() << " legs and " << bob.getArms() << " arms and " << 
	bob.hair << " hair " << endl;
	
	cout << bob.name <<  " has Ego? " <<bob.hasEgo << endl << " and pees " << bob.pee << endl;
	
	sue.setLegs();
	
	cout << "Our "<< sue.name <<  " has " << sue.getLegs() << " legs and " << sue.getArms() << " arms and " << 
	sue.hair << " hair " << endl << " has Ego? " <<sue.hasEgo << endl << " and pees " << sue.pee << endl;
	
	
	
	
	
	return 0;
}