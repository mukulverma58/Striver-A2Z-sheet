#include<iostream>
using namespace std;
int main(){
    int key,j;
    int arr[5] = {48,12,87,43,9};
    for(int i=0; i<5; i++){
        j = i-1;
        key = arr[i];
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        
    }
    cout<<"Sorted Array = ";
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}