#include<iostream>
#include<stack>
#include<string.h>

class Solution{
    public:
    bool isValidString(std::string s){
        std::stack<int> op, ob, os;
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '('){
                op.push(i);
            }else if(s[i] == '{'){
                ob.push(i);
            }else if(s[i] == '['){
                os.push(i);
            }else if(s[i] == ')'){
                if(!op.empty()){
                    op.pop();
                }else{
                    return false;
                }
            }else if(s[i] == '}'){
                if(!ob.empty()){
                    ob.pop();
                }else{
                    return false;
                }
            }else if(s[i] == ']'){
                if(!os.empty()){
                    os.pop();
                }else{
                    return false;
                }
            }
        }
        if(op.empty() && ob.empty() && os.empty()){
            return true;
        }
    }
};

int main(){
    Solution s;
    std::string sampleString = "(){}[]";
    if(s.isValidString(sampleString)){
        std::cout << sampleString << " is a valid string" << std::endl;
    }else{
        std::cout << sampleString << " is not a valid string" << std::endl;
    }
    return 0;
}

