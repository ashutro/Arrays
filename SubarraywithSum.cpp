#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> subarraySum(int arr[],int n, long long s){
        int start = 0 , head = 0;
        int sum  = 0;
        vector<int> res;
        while(head<n){
            sum += arr[start];
            if(sum == s){
                res.push_back(head+1);
                res.push_back(start+1);
                return res;
            }
            if(sum<s){
                    start++;
                
            }
            if(sum>s){
                sum = 0;
                head ++;
                start = head;
            }
        }
        return {-1};

        
    }
};
int main(int argc, char const *argv[])
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        for(int i=0; i < n;i++){
            cin>>arr[i];
        }
        Solution obj;
        vector<int> res;

        res = obj.subarraySum(arr,n,s);
        for(int i = 0; i< res.size(); i++ ){
        cout<<res[i]<<endl;
        }
    }
    
    return 0;
}
