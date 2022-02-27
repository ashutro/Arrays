#include<iostream>

using namespace std;

main(){
    int n,i;
    cin>>n;  // taking input size of array:
    int arr[n]; //Creating static array:
    for(i=0;i<n;i++){
        arr[i] = i+1;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}