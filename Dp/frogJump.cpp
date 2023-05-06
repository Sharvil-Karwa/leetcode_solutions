#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &heights)
{
    int a1 = abs(heights[n-1]-heights[n-2]);
    int a2 = 0;
    for(int i=n-3;i>=0;i--){
        int x1 = abs(heights[i]-heights[i+1]) + a1;
        int x2 = abs(heights[i]-heights[i+2]) + a2;
        a2 = a1;
        a1 = min(x1,x2);
    }
    return a1;
}