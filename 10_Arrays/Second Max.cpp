#include<bits/stdc++.h>
using namespace std;

int second_max(int arr[],int n){
    int ans= -1;
    for(int i=0;i<n;i++){
        if(arr[i]>ans){
            ans= arr[i];
        }
    }

    int second = -1;
    for(int i =0;i<n;i++){
        if(arr[i]!=ans){
            second= max(second,arr[i]);
        }
    }
    return second;
}

int main() {
    int arr[1000];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

cout<< second_max(arr, size)<<"\n\n";
   

   
}