#include<iostream>
using namespace std;
int main(){
    int n;
    int digit;
    int rev = 0;
    cout<<"Enter numeber = ";
    cin>>n;
    while(n!=0){
        digit = n%10;
        rev = (rev * 10) + digit;
        n = n / 10;
    }
    cout<<"The Reverse of the number is = "<<rev;
    
}