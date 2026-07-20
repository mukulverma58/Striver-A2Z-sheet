#include<iostream>
using namespace std; 
void Nnumbersum(int i,int n, int sum){
    if(i>n){
    cout<<"sum = "<<sum;
    return;
    }
    Nnumbersum(i+1,n,sum+i);
}
int main(){
    int n;
    cin>>n;
    int i = 1;
    Nnumbersum(i,n,0);
}