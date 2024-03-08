class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> mpp;
        int count = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;

            if (mpp[nums[i]] > maxi) {
                maxi = mpp[nums[i]];
                count = 0;
            }

            if (mpp[nums[i]] == maxi)
                count++;
        }

        return count * maxi;
    }
};