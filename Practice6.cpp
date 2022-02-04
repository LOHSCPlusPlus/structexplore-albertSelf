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

void PrintName(Name p) {
    cout << ": First Name is " << p.first << ", Last Name is " << p.last << endl;
}

void ChangeLast(Name &p, string lastname) {
    p.last = lastname;
}

int main() {
	// Create two instances of person here, and assign the names.

  Name person1;
  person1.first = "Dorian";
  person1.last = "Gray";

  Name person2("Linus", "Van Pelt");

  PrintName(person1);
  PrintName(person2);

  ChangeLast(person2, "Torvalds");

  PrintName(person2);

	return 0;
}
