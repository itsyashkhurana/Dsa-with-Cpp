   int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxc =0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
                maxc= max(maxc,cnt);
            }
            else{
                cnt=0;
            }
        }
        return maxc;
    }
