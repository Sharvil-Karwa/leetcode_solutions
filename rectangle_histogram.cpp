#include<iostream>
#include<deque>
using namespace std;

int main(){
    int arr[6] = {1,1,1,1,1,1};
    int answer = 0;
    for(int j=0;j<6;j++){
        int l = arr[j];
        int b = 1;
        for(int i=j+1;i<6;i++){
            if(i==6){
                break;
            }
            if(arr[i]>=l){
                b++;
            }
            else{
                break;
            }
        }
        if((l*b)>answer){
            answer = l*b;
        }
    }
    cout<<answer;
}
