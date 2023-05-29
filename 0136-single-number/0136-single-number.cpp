class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int> apun;
	   for(auto x: nums)
		   apun[x]++;
	   for(auto bb: apun)
		   if(bb.second==1)
			   return bb.first;

        return -1;
    } 

};