#include<iostream>
#include<string>
using namespace std;

class Solution{
    public:
    int lengthOfLastWord(string s){
        int length=0;

        int i = s.length()-1;
        while(s[i]>=0 && s[i] == ' '){
            i--;
        }

        while(s[i]>=0 && s[i] != ' '){
            i--;
            length++;
        }

        return length;
    }
};

int main(){

    string s = "Hello world" ;
    Solution s1;
    int length = s1.lengthOfLastWord(s);
    cout<<length;
    return 0;
}