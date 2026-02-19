//using Binary search Tc-O(nlogn)
#include<bits/stdc++.h>
using namespace std;

bool check(int cap,int x,vector<long long>&a){
    
    int n = a.size();

    if(cap<a[0]) return false;

    for(int i=1;i<n;i++){

        if(cap<(a[i]-a[i-1])){
            return false;
        }
    }
    
    if(cap < 2*(x-a[n-1])) return false;

    return true;
}

int Binarysearch(int n,int x,vector<long long>&a){
    
    int low = 0 , high = 2*x ,ans = x;

    while(low<=high){

        int mid = low + (high - low)/2;

        if(check(mid,x,a)){
            ans = mid; 
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    return ans;
}


int main(){
    int t;
    cin>>t;

    while(t--){

        int n;
        int x;
        cin>>n>>x;

        vector<long long>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        cout<<Binarysearch(n,x,a)<<endl;

    }

    return 0;
}

//using tc O(n);

#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n, x;
        cin >> n >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        
        long long max_gap = a[0]; 

        for (int i = 1; i < n; i++) {
            max_gap = max(max_gap, a[i] - a[i-1]);
        }

        max_gap = max(max_gap, 2 * (x - a[n-1]));

        cout<<max_gap<<endl;
    }

    return 0;
}
