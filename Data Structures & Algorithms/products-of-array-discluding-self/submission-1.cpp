class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        vector<int>ans(n);
        prefix[0]=1;
        suffix[n-1]=1;

        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        for(int j=n-2;j>=0;j--){
            suffix[j]=suffix[j+1]*nums[j+1];
        }
        for(int z=0;z<n;z++){
            ans[z]=prefix[z]*suffix[z];
        }
        return ans;
    }
};
