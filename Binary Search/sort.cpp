#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,3,0};
    for(int j=0;j<4;j++){
        for(int i=j+1;i<5;i++){
            if(arr[i]<arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}