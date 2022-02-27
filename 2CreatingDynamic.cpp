#include<iostream>

using namespace std;

int main(){
    int n,i;
    cin>>n; // taking input for size of array:
    int *arr =  new int(n); // Creatig Dynamic Array:

    for(i=0;i<n;i++){
        arr[i] = i+1;
    }
    for(i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
    delete [] arr;  // Deleting the Dynamic Array:
    return 0;
}