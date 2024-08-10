int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum=0;

         for (int i = 0; i < n; i++) {
              sum+= nums[i];             // sum of all element in an array 
         }
         
     int ans = n*(n+1)/2;               // sum of n number
        return ans-sum;
    }
