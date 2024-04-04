#include<iostream>

using namespace std;

int main(){
	// cout << "Hello World!" << endl;
	int n;
	while(true){
		cout << "enter the number of rows:" << endl;
		cin >> n; 
		if (!(n>0 && n<=10)){
			cout << "Invalid input, Please enter a positive interger value <= 10" << endl;
			continue;
		}else{
			break;
		}
	}
	
	for(int i = 0; i < n; i++){
		for (int j = i+1; j > 0; j--){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
