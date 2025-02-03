#include <iostream>

using namespace std;

struct Name {
	string name = "";
	int age = 0;
	string course = "";
	int year = 0;
	string block = "";
	string gender = "";
	
};
void getPerson(Name &student);
void displayName(Name student1);

int main(){
	
	Name person1, person2, person3, person4;
	
	cout << "Enter Student1: \n";
	getPerson(person1);
	cout << "Enter Student2: \n";
	getPerson(person2);
	cout << "Enter Student3: \n";
	getPerson(person3);
	cout << "Enter Student4: \n";
	getPerson(person4);
	displayName(person1);
	displayName(person2);
	displayName(person3);
	displayName(person4);
	return 0;
}
void getPerson(Name &student){
	cout << "Student Profile: " << endl;
	getline(cin, student.name);
	cin >> student.age;
	cin.ignore();
	getline(cin, student.course);
	cin >> student.year;
	cin.ignore();
	getline(cin, student.block);
	getline(cin, student.gender);
}
void displayName(Name student1){
	cout << student1.name << endl;
	cout << student1.age << endl;
	cout << student1.course << endl;
	cout << student1.year << endl;
	cout << student1.block << endl;
	cout << student1.gender << endl;
}

