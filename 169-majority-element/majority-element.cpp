class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        
        
        //USING HASHMAP
        map<int,int> mpp;
        for(int i =0; i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto chu:mpp)
        {
            if(chu.second>nums.size()/2)
            {
                return chu.first;
            }
        }
        return -1;  
    }
};