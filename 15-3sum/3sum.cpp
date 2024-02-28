class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        unordered_set<int> st;
        set<vector<int>> seen;
        vector<vector<int>> ans;
        for(int i = 0; i < n - 2; i++) {
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i - 1]) continue;

            int j = i + 1;
            int k = n - 1;
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++; k--;
                    while(j < n && nums[j] == nums[j - 1]) {
                        j++;
                    }
                    while(k > i && nums[k] == nums[k + 1]) {
                        k--;
                    }
                } else if(sum < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }

        for(auto triplet: seen) {
            ans.push_back(triplet);
        }

        return ans;
    }
};

/*

[-1,0,1,2,-1,-4]
[-4,-1,-1,0,1,2]

*/