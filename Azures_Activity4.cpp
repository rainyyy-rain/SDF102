#include <iostream>

using namespace std;

int main(){
	
	struct {
		string name = "";
		int age = 0;
		string course = "";
		int year = 0;
		string block = "";
		string gender = "";
	}name1, name2, name3, name4;
	
	cout << "**************************************\n";
	name1.name = "Nelberto Cajan";
	name1.age = 19;
	name1.course = "BS in Information Technology";
	name1.year = 1;
	name1.block = "B";
	name1.gender = "Male\n";
	
	cout << "Student name: " << name1.name << endl;
	cout << "Age: " << name1.age << endl;
	cout << "Course: " << name1.course << endl;
	cout << "Year level: " << name1.year << endl;
	cout << "Block: " << name1.block << endl;
	cout << "Gender: " << name1.gender << endl;

	cout << "**************************************\n";
	
	name2.name = "Joshua De Guzman";
	name2.age = 19;
	name2.course = "BS in Information Technology";
	name2.year = 1;
	name2.block = "B";
	name2.gender = "Male\n";

	cout << "Student name: " << name2.name << endl;
	cout << "Age: " << name2.age << endl;
	cout << "Course: " << name2.course << endl;
	cout << "Year level: " << name2.year << endl;
	cout << "Block: " << name2.block << endl;
	cout << "Gender: " << name2.gender << endl;

	cout << "**************************************\n";
	
	name3.name = "Lariel Conmigo";
	name3.age = 18;
	name3.course = "BS in Information Technology";
	name3.year = 1;
	name3.block = "B";
	name3.gender = "Male\n";

	cout << "Student name: " << name3.name << endl;
	cout << "Age: " << name3.age << endl;
	cout << "Course: " << name3.course << endl;
	cout << "Year level: " << name3.year << endl;
	cout << "Block: " << name3.block << endl;
	cout << "Gender: " << name3.gender << endl;

	cout << "**************************************\n";
	
	name4.name = "Jian Kim Alto";
	name4.age = 19;
	name4.course = "BS in Information Technology";
	name4.year = 1;
	name4.block = "B";
	name4.gender = "Not Prefer to Say\n";

	cout << "Student name: " << name4.name << endl;
	cout << "Age: " << name4.age << endl;
	cout << "Course: " << name4.course << endl;
	cout << "Year level: " << name4.year << endl;
	cout << "Block: " << name4.block << endl;
	cout << "Gender: " << name4.gender << endl;

	return 0;
}
