#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[1000];
	  int size;
	  cin>>size;
      	for(int i=0;i<size;i++){
	    cin>>arr[i];
	}

    int ans=INT_MIN;
    for(int i=0;i<size;i++){
      if(arr[i]>ans)
      ans = arr[i];
    }
    cout<<"\n";
    cout<<ans;
    cout<<"\n";
    cout<<"\n";
}