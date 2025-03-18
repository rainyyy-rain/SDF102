#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector <int> numbers;
	
	int x;
	cout << "Enter 10 numbers " << endl;
	for (int i=0; i < 10; i++ ){
		cin >> x;
	numbers.push_back(x);
	}
	cout << "Confirm your 10 digits " << endl;
	for (int number : numbers){
		cout << number << endl;
	}
	return 0;
}
