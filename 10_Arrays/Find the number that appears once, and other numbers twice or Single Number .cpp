// Optimal Approach
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {
    //size of the array:
    int n = arr.size();

/* XOR all the elements:
arr = {4, 1, 2, 1, 2}.

xorr = 0 ^ 4 = 4
xorr = 4 ^ 1 = 5
xorr = 5 ^ 2 = 7
xorr = 7 ^ 1 = 6
xorr = 6 ^ 2 = 4
The final value of xorr is 4
*/

    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}

// Better Appproach




#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {

    //size of the array:
    int n = arr.size();

    // Declare the hashmap.
    // And hash the given array:
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    //Find the single element and return the answer:
    for (auto it : mpp) {
        if (it.second == 1)     // value 
            return it.first;    // key 
    }

    //This line will never execute
    //if the array contains a single element.
    return -1;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}

