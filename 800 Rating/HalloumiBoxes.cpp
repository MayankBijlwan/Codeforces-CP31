#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;

        vector<long long>nums(n);

        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        //two conditions from here

        if(is_sorted(nums.begin(),nums.end()) || k>1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}
