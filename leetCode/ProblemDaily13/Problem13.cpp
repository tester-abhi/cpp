#include<iostream>
#include<string>


class Solution {
public:
    int romanToInt(std::string s) {
        int output = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'M'){
                if (i == 0) output = output + 1000;
                else if (s[i-1] == 'C'){
                    output = output - 100;
                    output = output + 900;
                }
                else{
                    output = output + 1000;
                }
            }
            if(s[i] == 'D'){
                if (i == 0) output = output + 500;
                else if (s[i-1] == 'C'){
                    output = output - 100;
                    output = output + 400;
                } else{
                    output = output + 500;
                }
            }
            if(s[i] == 'C'){
                if (i == 0) output = output + 100;
               else if (s[i-1] == 'X'){
                    output = output - 10;
                    output = output + 90;
                } else{
                    output = output + 100;
                }
            }if(s[i] == 'L'){
                if (i == 0) output = output + 50;
                else if (s[i-1] == 'X'){
                    output = output - 10;
                    output = output + 40;
                } else{
                    output = output + 50;
                }
            }if(s[i] == 'X'){
                if (i == 0) output = output + 10;
                else if (s[i-1] == 'I'){
                    output = output - 1;
                    output = output + 9;
                } else{
                    output = output + 10;
                }
            }
            if(s[i] == 'V'){
                if (i == 0) output = output + 5;
                else if (s[i-1] == 'I'){
                    output = output - 1;
                    output = output + 4;
                } else{
                    output = output + 5;
                }
            }
            if(s[i] == 'I'){
                output = output + 1;
            }
        }
        return output;
    }
};


int main(){
    Solution s;
    std::string sampleString = "MXM";
    std::cout << "The integer equivalent of roman numeral " << sampleString << " is " << s.romanToInt(sampleString) << std::endl;
    return 0;
}