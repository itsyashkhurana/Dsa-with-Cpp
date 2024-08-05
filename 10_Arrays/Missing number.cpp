#include <bits/stdc++.h>
using namespace std;

int main() {
	
	  int arr[6]={1,2,3,5,6};
    int sum=0;

    for (int i = 0; i < 5; i++) {
        sum+= arr[i];             // sum of all element in an array 
    }
int ans = 6*(6+1)/2;       // sum of n number
  cout<< ans-sum<< "\n\n";
	
}