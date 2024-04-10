#include<iostream>
#include<string.h>
#include<stack>

class Solution{
	public:
		int op = 0, cp = 0, rsrv = 0;
		void printDataMembers(){
			std::cout << "The data members are: " << std::endl;
			std::cout << "op: " << op << " cp: " << cp << " rsrv: " << rsrv << std::endl;
		}
		bool isValidString(std::string s){
			if(s.length() < 0 && s.length() > 100){
				return false;
			}else{
				std::stack<int> leftStack, starStack;
				for(int i = 0; i < s.length(); ++i){
					if(s[i] == '('){
						leftStack.push(i);
					}else if (s[i] == '*'){
						starStack.push(i);
					}else{
						if(!leftStack.empty()){
							leftStack.pop();
						}else if (!starStack.empty()){
							starStack.pop();
						}else{
							return false;
						}
					}
				}
				while(!leftStack.empty() && !starStack.empty()){
					if (leftStack.top() > starStack.top()){
						return false;
					}
					leftStack.pop();
					starStack.pop();
				}
				return leftStack.empty();
			}
			
			
			// return false;
		}
};

int main(){
	Solution s;
	std::string sampleString = "((((()(()()()()((((()()((())))))(())()())(((())())())))))))(((((()))))()))(()((()()))()()";
	bool output = s.isValidString(sampleString);
	if(output){
		std::cout << sampleString << " is a valid string" << std::endl;
	}else{
		std::cout << sampleString << " is not a valid string" << std::endl;
	}
	return 0;
}
