#include<bits/stdc++.h>
using namespace std;
void Insert(int  arr[],int n,int pos,int ele){
    int size = n;
    int i;
    if(pos < 0 || pos > size ){
        cout<< "overflow_error underflow_error " <<endl; // Checking condition for position underflow or overflow
    }
    else{
        arr[pos-1] = ele; // inserting the element:
     for(i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
        }
    }
}
void Append(int arr[],int n,int ele){
    int size = n+1; // increasing the size
    int arrnew[size]; // Creating the new array:

    for(int i = 0; i<size;i++){
        arrnew[i] = arr[i]; // copy the element old array to new array:

    }
    arrnew[n] = ele; // Appending the element:
}
main(){
    int n,i;
    cin>>n;  // taking input size of array:
    int arr[n]; //Creating static array:
    for(i=0;i<n;i++){
        arr[i] = i+1;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    int pos,ele;
    cin>> pos >> ele;
    Insert(arr,n,pos,ele);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    int apele;
    cin >> apele;
    Append(arr,n,apele);
    for(i=0;i<n+1;i++){
        cout<<arr[i]<<" "<<endl;
    }
    
}