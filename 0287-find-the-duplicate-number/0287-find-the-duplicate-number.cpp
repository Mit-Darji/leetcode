class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int x = 0;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto im:mp){
            if(im.second > 1){
                x = im.first;
                break;
            }
        }
        return x;
    }
};