#include<iostream>
#include<string>
using namespace std;


int main(){

    int num=38;
    int rem;

    while(num>9){
        int sum=0;
        while(num != 0){
            rem=num%10;
            sum+=rem;
            num/=10;
       }
       num=sum;
    }

  
    
    cout<<num <<endl;
  
    return 0;
}