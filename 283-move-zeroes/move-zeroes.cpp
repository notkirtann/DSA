class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    vector<int>ans;
    int cout=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=0) ans.push_back(nums[i]);
        else cout++;
    }
    for(int i=0;i<cout;i++)
    {
        ans.push_back(0);
    }
    for(int i=0;i<nums.size();i++)
    {
        nums[i]=ans[i];
    }
}
};