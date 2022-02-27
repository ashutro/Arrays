#include<iostream>

using namespace std;

main(){
    int n,i,m;
    cin >> n; // initial size fo array 
    int *arr1 =  new int(n);
    for(i=0;i<n;i++){
        arr1[i] = i+1;
    }
     for(i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }

    cin>> m; // takig input for next array:
    int *arr2 = new int(m);
    for(i=0;i<n;i++){
        arr2[i] = arr1[i];
    }
    
    delete [] arr1;
    arr1 = arr2;
    delete [] arr2;

    for(i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
 
}