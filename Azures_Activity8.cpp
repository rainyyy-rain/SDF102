#include <iostream>

using namespace std;

int add(int x, int y);
double add(double x, double y);

int subract(int x, int y);
double subtract (int x, int y);

int main(){
	
	cout << add(2, 3) << endl;
	cout << add(2.34, 3.22) << endl;
	cout << subtract(10, 5) << endl;
	cout << subtract(66.6, 55.5) << endl;
	
	return 0;
}
int add(int x, int y){
	return x + y;
}
double add(double x, double y){
	return x + y;
}
int subract(int x, int y){
	return x - y;
}
double subtract (int x, int y){
	return x - y;
}

