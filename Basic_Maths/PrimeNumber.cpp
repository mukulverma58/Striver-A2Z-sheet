#include<iostream>
using namespace std;
bool prime(int n){
    if(n==1 || n ==0 )return 0;
    for(int i = n/2; i > 1; i--){
        if(n%i == 0) return 0;
    }
    return 1;

}
int main(){
    int n;
    cin>>n;
    cout<<boolalpha<<prime(n);

}