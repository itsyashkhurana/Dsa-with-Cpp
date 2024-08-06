https://leetcode.com/problems/rotate-array/

 void rotate(std::vector<int>& nums, int k) {
        int N = nums.size();
           k= k % N;
       if (k == 0) return;
        std::rotate(nums.begin(), nums.begin() + N - k, nums.end());
    }
