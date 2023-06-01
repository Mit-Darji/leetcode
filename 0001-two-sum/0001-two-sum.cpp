class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i = 0;i < nums.size();i++){
            int x = nums[i];
            int y = target - x;
            if(mp.find(y) != mp.end()){
                return {mp[y],i};
            }
            mp[x] = i;
        }
        return {-1,-1};
    }
};