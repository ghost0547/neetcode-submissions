class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            int b=target-a;
            if(m.find(b)!=m.end()){
                ans.push_back(m[b]);
                ans.push_back(i);
                return ans;
            }
            m[a]=i;
        }
        return {-1};
    }
};
