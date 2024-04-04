#include<iostream>

using namespace std;

int main(){
	// cout << "Hello World!" << endl;
	int n = 5;
	for(int i = 0; i < n; i++){
		for (int j = i+1; j > 0; j--){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
