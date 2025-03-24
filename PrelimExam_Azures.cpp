#include <iostream>

using namespace std;

struct Student{
	string name;
	int studentID;
	float grades[5];
}; 

float calcuAverage(float grades[], int size){
	float sum = 0;
	for (int i = 0; i < size; i++){
		sum += grades[i];
	}
	return sum/size;
}
int main(){
	Student students[3];
	
	for(int i=0; i < 3; i++){
		cout << "Enter details for student" << i + 1 << ":" << endl;
		cout << "Name:";
		getline(cin, students[i].name);
		cout << "Student ID:";
		cin >> students[i].studentID;
		cout << "Enter grades for 5 subjects:";
		for (int j = 0; j < 5; j++){
			cin >> students[i].grades[j];
		}
		cin.ignore();
	}
	
	cout << "\nAverage grades:" << endl;
	for (int i = 0; i < 3; i++){
		float average = calcuAverage(students[i].grades, 5);
		
		cout << students[i].name << " (" << students[i].studentID << ")-" << (int)(average*10)/10.0 << endl; 
	}
	return 0;
}

