class Solution {
public:
    string removeDigit(string number, char target) {
        for(int i = 0;i < number.size();i++){
            if(number[i] == target && target < number[i+ 1]){
                number.erase(i,1);
                return number;
            }
        }
        int last = number.find_last_of(target);
        number.erase(last,1);
        return number;
    }
};