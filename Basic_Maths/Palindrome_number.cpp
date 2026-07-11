#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number = ";
    cin>>n;
    int orignal = n;
    int reverse = 0;
    while(orignal != 0){
        int digit = orignal % 10;
        reverse = (reverse * 10) + digit;
        orignal = orignal / 10;
    }

    if(n == reverse)
        cout << "Palindrome Number";
    else
        cout << "Not Palindrome Number";

}