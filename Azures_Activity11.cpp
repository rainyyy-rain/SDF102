#include <iostream>

using namespace std;

class Student {
	public:
		string name;
		int age;
		string course;
		string block;
		string year;
		
	Student(string getName, string getCourse, string getBlock, string getYear, int getAge){
		name = getName;
		course = getCourse;
		block = getBlock;
		age = getAge;
		year = getYear;
	}
};

int main(){
	Student pupil1("Rainel Dave Azures", "BSIT", "Block B", "1st year", 19);
	Student pupil2("Joshua De Guzman", "BSIT", "Block B", "1st year" , 19);
	Student pupil3("Jian Kim Alto", "BSIT", "Block B", "1st year", 18);
	Student pupil4("Jericho Inopia", "BSIT", "Block B", "1st year", 21);
	Student pupil5("Lariel Conmigo", "BSIT", "Block B", "1st year", 18);
	
	cout << pupil1.name << ", " << pupil1.course << ", " << pupil1.block << ", " << pupil1.year << ", " << pupil1.age << ", " << endl;
	cout << pupil2.name << ", " << pupil2.course << ", " << pupil2.block << ", " << pupil2.year << ", " << pupil2.age << ", " << endl;
	cout << pupil3.name << ", " << pupil3.course << ", " << pupil3.block << ", " << pupil3.year << ", " << pupil3.age << ", " << endl;
	cout << pupil4.name << ", " << pupil4.course << ", " << pupil4.block << ", " << pupil4.year << ", " << pupil4.age << ", " << endl;
	cout << pupil5.name << ", " << pupil5.course << ", " << pupil5.block << ", " << pupil5.year << ", " << pupil5.age << ", " << endl;
	
	return 0;
}
