class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        for(auto im : mp){
            if(im.second > (nums.size() / 2)){
                return im.first;
            }
        }
        return -1;
    }
};