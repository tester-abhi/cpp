#include<iostream>
#include<string>
using namespace std;

class Person{
    string fname, lname;
    public:
        Person(string, string);
        void print_obj();
};

Person::Person(string first_name, string last_name){
    fname = first_name;
    lname = last_name;
}

void Person::print_obj(){
    cout << "first name is " << this->fname << endl;
    cout << "last name is " << this->lname << endl;
}

int main(){
    Person p1("John", "Snow");
    p1.print_obj();
    return 0;
}