#include <iostream>

using namespace std;

int add(int x, int y){
	int sum = x + y;
	return sum;
}
int subtract(int x, int y){
	int minus = x - y;
	return minus;
}
int multiply(int x, int y){
	int multi = x * y;
	return multi;
}
int division(int x, int y){
	int quotient = x / y;
	return quotient;
}
int main (){
	cout << add(4,2) << endl;
	cout << subtract(10,4) << endl;
	cout << multiply(3,2) << endl;
	cout << division(12,2) << endl;
	return 0; 	
}

