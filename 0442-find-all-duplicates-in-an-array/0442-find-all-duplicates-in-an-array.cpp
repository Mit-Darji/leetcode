class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto it : nums){
            mp[it]++;
        }
        for(auto im : mp){
            if(im.second == 2){
                ans.push_back(im.first);
            }
        }
        return ans;
    }
};