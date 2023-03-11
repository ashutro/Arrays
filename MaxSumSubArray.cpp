#include<bits/stdc++.h>

using namespace std ;

int SumSub(int a[], int n){
    int sum = INT_MIN;
    int l = 0;
    for(int i = 0; i < n; i++){
        l += a[i];
        if(sum<l){
            sum = l;
        }
        if(l < 0){
            l  = 0;
        }
    }
    return sum;
}

int main(){
    int arr[5] = {-1,-4,-3,-2,-1};
    cout<<SumSub(arr,5)<<endl;

    return 0;
}