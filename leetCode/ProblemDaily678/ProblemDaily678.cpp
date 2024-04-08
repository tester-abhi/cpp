#include<iostream>
#include<string.h>

using namespace std;

class Solution {
public:
    int lMin=0, rMin=0, rsrv=0; 
    void printDataMembers(){
        cout << "lMin: " << lMin << endl;
        cout << "rMin: " << rMin << endl;
        cout << "rsrv: " << rsrv << endl;
    }
    bool checkValidString(string s) {
        if(s.length() >= 1 && s.length() <= 100){
       
        if(s[0] == ')' || s[0] == '*' && s[1] != ')'){
            return false;
        }
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(') lMin++;
            else if(s[i] == '*') rsrv++;
            else if(s[i] == ')') rMin++;
            if(rsrv%2 == 0 && rMin > lMin) return false;
        }
        if(rsrv%2 == 0 && rMin != lMin) return false;
        return true;
        }
        return false;
    }
};

int main(){
    Solution s;
    string sampleString = "()*)(";
    bool output = s.checkValidString(sampleString);
    if(output == true){
        s.printDataMembers();
        cout<< "\"" << sampleString << "\"" << " is a valid string" << endl;
        return 0;
    }
    else{
        s.printDataMembers();
        cout << "\"" << sampleString << "\"" << " is not a valid string" << endl;
        return 1;
    };
}