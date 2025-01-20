 #include <iostream>
 
 using namespace std;
 
 int main(){
 	int numbers[10];
 	int evenNumbers[10];
 	
 	for(int i=0; i<10; i++){
 		cin >> numbers[i];
	}
	 
	 for(int i=0; i<10; i++){
	 	if(numbers[i] % 2 == 0){
	 		evenNumbers[i] = numbers[i];
		cout << evenNumbers[i] << endl; 
		}
	}
 	return 0;
 }
 
