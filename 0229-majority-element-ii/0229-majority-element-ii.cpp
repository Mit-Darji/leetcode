class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         unordered_map<int,int> mp;
         vector<int> v;
        for(auto it : nums){
            mp[it]++;
        }
        for(auto im : mp){
            if(im.second > (nums.size() / 3)){
                v.push_back(im.first);
            }
        }
        return v;
    }
};