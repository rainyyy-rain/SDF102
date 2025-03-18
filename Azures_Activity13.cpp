 #include <iostream>
 
 using namespace std;
 
 class Student {
 	private:
 		string name;
 		int age;
 		string course;
 		string block;
 		string year;
 		
	public:
		void setName (string NameParams){
			name = NameParams;
		}
		void setAge (int AgeParams){
			age = AgeParams;
		}
		void setCourse (string CourseParams){
			course = CourseParams;
		}
		void setBlock (string BlockParams){
			block = BlockParams;
		}
		void setYear (string YearParams){
			year = YearParams;
		}
		
		string getName(){
			return name;
		}
		int getAge (){
			return age;
		}
		string getCourse(){
			return course;
		}
		string getBlock(){
			return block;
		}
		string getYear(){
			return year;
		}
 };
 
 int main(){
 	
 	Student pupil1, pupil2, pupil3, pupil4, pupil5;
 	string name;
 	int age;
 	string course;
 	string block;
 	string year;
 	
 	cout << "Student Information" << endl;
	cout << "Name: ";
 	getline(cin, name);
	cout << "Age: ";
 	cin >> age;
 	cin.ignore();
	cout << "Course: ";
	getline(cin, course);
	cout << "Block: ";
	getline(cin, block);
	cout << "Year Level: ";
	getline(cin, year);
 	cout << endl;
	
	pupil1.setName(name); pupil1.setAge(age); pupil1.setCourse(course); pupil1.setBlock(block); pupil1.setYear(year);
	
	cout << "Student Information 1 " << endl;
	cout << "Name: " <<pupil1.getName() << "\nAge: "<< pupil1.getAge() << "\nCourse: " << pupil1.getCourse() << "\nBlock: "<< pupil1.getBlock() << "\nYear Level: "<< pupil1.getYear() << endl;
	cout << endl;
	
	cout << "Student Information" << endl;
	cout << "Name: ";
 	getline(cin, name);
	cout << "Age: ";
 	cin >> age;
 	cin.ignore();
	cout << "Course: ";
	getline(cin, course);
	cout << "Block: ";
	getline(cin, block);
	cout << "Year Level: ";
	getline(cin, year);
	cout << endl;
	
	pupil2.setName(name); pupil2.setAge(age); pupil2.setCourse(course); pupil2.setBlock(block); pupil2.setYear(year);
	
	cout << "Student Information 2 " << endl;
	cout << "Name: "  <<pupil2.getName()<< "\nAge: " << pupil2.getAge()<< "\nCourse: " << pupil2.getCourse()<< "\nBlock: " << pupil2.getBlock()<< "\nYEar: " << pupil2.getYear() << endl;
	cout << endl;
	
	cout << "Student Information" << endl;
	cout << "Name: ";
 	getline(cin, name);
	cout << "Age: ";
 	cin >> age;
 	cin.ignore();
	cout << "Course: ";
	getline(cin, course);
	cout << "Block: ";
	getline(cin, block);
	cout << "Year Level: ";
	getline(cin, year);
	cout << endl;

	pupil3.setName(name); pupil3.setAge(age); pupil3.setCourse(course); pupil3.setBlock(block); pupil3.setYear(year);
	
	cout << "Student Information 3" << endl;
	cout << "Name: "  <<pupil3.getName()<< "\nAge: " << pupil3.getAge()<< "\nCourse: " << pupil3.getCourse()<< "\nBlock: " << pupil3.getBlock()<< "\nYEar: " << pupil3.getYear() << endl;
	cout << endl;
	
	cout << "Student Information" << endl;
	cout << "Name: ";
 	getline(cin, name);
	cout << "Age: ";
 	cin >> age;
 	cin.ignore();
	cout << "Course: ";
	getline(cin, course);
	cout << "Block: ";
	getline(cin, block);
	cout << "Year Level: ";
	getline(cin, year);
	cout << endl;
	
	pupil4.setName(name); pupil4.setAge(age); pupil4.setCourse(course); pupil4.setBlock(block); pupil4.setYear(year);
	
	cout << "Student Information 4: " << endl;
	cout << "Name: "  <<pupil4.getName()<< "\nAge: " << pupil4.getAge()<< "\nCourse: " << pupil4.getCourse()<< "\nBlock: " << pupil4.getBlock()<< "\nYEar: " << pupil4.getYear() << endl;
	cout << endl;
	
	cout << "Student Information" << endl;
	cout << "Name: ";
 	getline(cin, name);
	cout << "Age: ";
 	cin >> age;
 	cin.ignore();
	cout << "Course: ";
	getline(cin, course);
	cout << "Block: ";
	getline(cin, block);
	cout << "Year Level: ";
	getline(cin, year);
	cout << endl;
	
	pupil5.setName(name); pupil5.setAge(age); pupil5.setCourse(course); pupil5.setBlock(block); pupil5.setYear(year);
	
	cout << "Student Information 5: " << endl;
	cout << "Name: "  <<pupil5.getName()<< "\nAge: " << pupil5.getAge()<< "\nCourse: " << pupil5.getCourse()<< "\nBlock: " << pupil5.getBlock()<< "\nYEar: " << pupil5.getYear() << endl;
	
	return 0;
 }
