#include<iostream>
using namespace std;
void ReverseArray(int i , int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    ReverseArray(i+1,arr,n);
}
int main(){
    int n;
    cout<<"Enter the size of Array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the index elements of Array = ";
        for(int i = 0; i< n; i++)
        cin>>arr[i];

    ReverseArray(0,arr,n);
    cout<<"Reversed Array = ";
        for(int i = 0; i<n; i++)
        cout<<arr[i]<<" ";

}