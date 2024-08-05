#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[1000];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "\n";


    int start=0,end=size-1; 

    for (int i = 0; i < size; i++) {
       while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
       }
           }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout << "\n\n\n";
}