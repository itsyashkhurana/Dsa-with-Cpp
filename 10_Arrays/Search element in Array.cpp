#include <bits/stdc++.h>
using namespace std;
   
int main() {
	int arr[1000];
	  int size;
	  cin>>size;
	   
	for(int i=0;i<size;i++){ 
	    cin>>arr[i];
	}

   int x;
   cin>>x;
   int ans=-1;

	for(int i=0;i<size;i++){
	    if(arr[i]==x){
          ans = i;
            break; 
	}
	  }

cout<<"Element found at index "<<ans <<"\n" ;


}

