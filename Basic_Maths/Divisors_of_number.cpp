#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter n = ";
    cin>>n;
    int arr[100];
    int count =0;
    for(int i = 1; i<=sqrt(n); i++){
        if(n%i==0){
            arr[count++] = i;
            if(i!=n/i){
                arr[count++] = n/i;
            }
        }
    }
    cout<<("[");
    for(int i = 0; i<count; i++){
        cout<<arr[i];
        if(i!=count-1){
            cout<<(", ");
        }
    }
    cout<<("]");
}    