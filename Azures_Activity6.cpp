#include <iostream>

using namespace std;

void printReverse (int numbers[10]);

int main(){
	
	int numbers[10];
	for (int i=0; i<10; i++){
		cin >> numbers[i];
	}
	printReverse(numbers);
	
	return 0;
}
void printReverse (int numbers[10]){
	for (int i=9; i>=0; i--){
		cout << numbers[i] << endl;
	}
}
