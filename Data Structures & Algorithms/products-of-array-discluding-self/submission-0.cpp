class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
    vector<int> suffix(nums.size());
    vector<int> prefix(nums.size());
    vector<int> output(nums.size());
    for ( int i=0;i<nums.size();i++){
        if(i==0){
            prefix[i]=1;
        }
        else{
        prefix[i]=prefix[i-1]*nums[i-1];
        }
    }
    for ( int i=nums.size()-1;i>=0;i--){
        if(i==nums.size()-1){
            suffix[i]=1;
        }
        else{
        suffix[i]=suffix[i+1]*nums[i+1];
        }
    }
    for ( int i=0;i<nums.size();i++){
        output[i]=prefix[i]*suffix[i];   
    }
    return output;
    }
    //  o(n^2)
    //   vector<int> output(nums.size());

    //     for(int i=0;i<nums.size();i++){
    //         int res=1;
    //         for (int j=0;j<nums.size();j++){
    //             if(i!=j){
    //                 res*=nums[j];
    //             }

    //         }
    //         output[i]=res;
    //     }

    //     return output;
};
