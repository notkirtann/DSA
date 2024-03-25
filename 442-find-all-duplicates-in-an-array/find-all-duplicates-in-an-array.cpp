class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    vector<int> ans;
    if(nums.size()==0) return ans;
    if(nums.size()==1) return ans;
    sort(nums.begin(),nums.end());
    
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i-1]==nums[i]) ans.push_back(nums[i]);
    }
    return ans;
}
};