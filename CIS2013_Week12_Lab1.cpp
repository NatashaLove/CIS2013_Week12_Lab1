#include <iostream>
#include <cstring>

using namespace std;
// the class will remember all data changes in the main
class Person {
		private:
		int legs;
		int arms;
		
		public:
		
		string hair;
		string name;
		
		Person () {
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

int main () {
	
	Person sue;
	Person bob;

	cout << "Our "<< bob.name <<  " has " << bob.getLegs() << " legs and " << bob.getArms() << " arms and " << 
	bob.hair << " hair " << endl;
	
	sue.setLegs();
	
	cout << "Our "<< sue.name <<  " has " << sue.getLegs() << " legs and " << sue.getArms() << " arms and " << 
	sue.hair << " hair " << endl;
	
	
	
	
	return 0;
}