class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){
            int freq=0;
           for(int j=0;j<nums.size();j++){
            if(nums[i]==nums[j]){
                freq++;
            }
           }  
            if(freq>1){
            return true;
           }
           
        }
        return false;
    }
};