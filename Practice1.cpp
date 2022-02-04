#include <iostream>
#include <string>
using namespace std;

// Put the person struct here

struct Name {
  string first;
  string last;
};




int main() {
	// Create two instances of person here, and assign the names.

  Name person1;
  person1.first = "Dorian";
  person1.last = "Gray";

  Name person2;
  person2.first = "Charlie";
  person2.last = "Brown";

	// Add the prints here

  cout << person1.first << " " << person1.last << endl;
  cout << person2.first << " " << person2.last << endl;



	return 0;
}
