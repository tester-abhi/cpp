#include<iostream>
#include<string.h>

using namespace std;

int main(){
    // char name[] = {'A', 'B', 'H', 'I', '\0'};
    string name = "Abhi";
    cout <<  name << endl;
    cout << "length of name is " << name.length() << endl;
    cout << "first character of name is " << name[0] << endl;
    if(name[0] == 'A'){
        cout << "working" << endl;
    }
    return 0;
}