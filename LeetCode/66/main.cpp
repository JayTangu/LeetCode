class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last = digits.size() - 1;
        int i = 0;
        while(i != digits.size()) {
            if(digits[last - i] != 9) {
                digits[last - i] = digits[last - i] + 1;
                break;
            }
            else
                digits[last - i] = 0;
            i++;
        }
        if(i == digits.size()) {
            vector<int> ans;
            for(int i = 0 ; i <= digits.size() ; i++) {
                if(i==0)
                    ans.push_back(1);
                else
                    ans.push_back(0);
            }
            return ans;
        }
        return digits;
    }
};