class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0){
            return false;
        }
        unordered_map<int, int> mp;
        mp.insert({nums[0],1});
        for (int i =1;i<nums.size();i++){
            if (mp.find(nums[i])!=mp.end()){
                return true;
            }
            else{
                mp.insert({nums[i],1});
            }
        }
        return false;
        
    }
};