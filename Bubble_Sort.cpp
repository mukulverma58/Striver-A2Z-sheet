#include<iostream>
using namespace std;
int main(){
    int temp,j;
    int arr[5] = {87,34,19,75,54};
    for(int i = 0; i<5; i++){
        for(j=i+1; j<5; j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i <5; i++){
        cout<<arr[i]<<" ";
    }
}