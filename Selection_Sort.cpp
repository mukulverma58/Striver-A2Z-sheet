#include<iostream>
using namespace std;
int main(){
    int temp,j;
    int arr[5] = {54,76,23,43,98};
    for(int i = 0; i<5; i++){
        for(j = i+1; j<5; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Sorted Array = ";
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}
