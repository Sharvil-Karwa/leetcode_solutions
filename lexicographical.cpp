#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    while(n--){
        int m; cin>>m;
        vector<int> arr;
        vector<int> a;
        vector<int> b;
        for(int i=0;i<m;i++){
            int alpha; cin>>alpha;
            arr.push_back(alpha);
        }
        for(int i=0;i<m;i++){
            int t = i;
            int curr = arr[i];
            if(i+1==m) break;
            i = i + 1;
            while(arr[i]<curr){
                i++;
            }
            for(int j=t;j<i;j++){
                a.push_back(arr[j]);
            }
            for(int j=t;j<i;j++){
                arr.erase(arr.begin());
            }
            i = t+1;
            // swap a and b
            vector<int> temp = a;
            a = b;
            b = temp;
        }
        for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
        for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
    }
}

