#include<iostream>
#include<string.h>

using namespace std;

class Solution{
	public:
		int op = 0, cp = 0, rsrv = 0;
		void printDataMembers(){
			cout << "The data members are: " << endl;
			cout << "op: " << op << " cp: " << cp << " rsrv: " << rsrv << endl;
		}
		bool isValidString(string s){
			if(s.length() > 0 && s.length() <= 100){

			}
			return false;
		}
};

int main(){
	Solution s;
	string sampleString = "()";
	bool output = s.isValidString(sampleString);
	if(output){
		cout << sampleString << " is a valid string" << endl;
	}else{
		cout << sampleString << " is not a valid string" << endl;
	}
	return 0;
}
