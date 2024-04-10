#include<iostream>
#include<stack>
#include<string.h>

class Solution{
    public:
    bool isValidString(std::string s){
        std::stack<int> op, ob, os, pushSequence;
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '('){
                op.push(i);
                pushSequence.push(0);
            }else if(s[i] == '{'){
                ob.push(i);
                pushSequence.push(1);
            }else if(s[i] == '['){
                os.push(i);
                pushSequence.push(2);
            }else if(s[i] == ')'){
                // [({(())}[()])]
                if(!op.empty() && pushSequence.top() == 0){
                    op.pop();
                    pushSequence.pop();
                }else{
                    return false;
                }
            }else if(s[i] == '}'){
                if(!ob.empty() && pushSequence.top() == 1){
                    ob.pop();
                    pushSequence.pop();
                }else{
                    return false;
                }
            }else if(s[i] == ']'){
                if(!os.empty() && pushSequence.top() == 2){
                    os.pop();
                    pushSequence.pop();
                }else{
                    return false;
                }
            }
        }
        if(op.empty() && ob.empty() && os.empty()){
            return true;
        }
        return false;
    }
};

int main(){
    Solution s;
    std::string sampleString = "[({(())}[()])]";
    if(s.isValidString(sampleString)){
        std::cout << sampleString << " is a valid string" << std::endl;
    }else{
        std::cout << sampleString << " is not a valid string" << std::endl;
    }
    return 0;
}

