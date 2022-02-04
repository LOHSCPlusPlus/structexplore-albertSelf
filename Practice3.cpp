#include <iostream>
#include <string>
using namespace std;

// Put the person struct here

struct Name {
  string first;
  string last;
  Name();
  Name(string firstname, string lastname);
};

 Name::Name(string firstname, string lastname) {
	first = firstname;
  last = lastname;
}

Name::Name() {
	first = "Uknown";
	last = "Uknown";
}



int main() {
	// Create two instances of person here, and assign the names.

  Name person1;
  cout << person1.first << " " << person1.last << endl;
  person1.first = "Dorian";
  person1.last = "Gray";

  Name person2("Linus", "Van Pelt");
  cout << person2.first << " " << person2.last << endl;

	// Add the prints here

  cout << person1.first << " " << person1.last << endl;
  cout << person2.first << " " << person2.last << endl;



	return 0;
}
