class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int l = 0;
        int r = 0;
        int zc = 0;
        int ans = 0;
        while(r<flowerbed.size()){
            if(flowerbed[r]==0) zc++;
            while(zc>1){
                if(flowerbed[l]==0) zc--;
                l++; 
            } 
            if(zc==1 && l==0 && r==flowerbed.size()-1) ans++;
            else if(zc==1 && l==0 && flowerbed[r+1]==0) ans++;
            else if(zc==1 && r==flowerbed.size()-1 && flowerbed[l-1]==0) ans++;
            else if(zc==1 && flowerbed[l-1]==0 && flowerbed[r+1]==0) ans++;
            r++;
        }
        return ans>=n;
    }
};