class Solution {  //recursive版本
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string prev_str = countAndSay(n - 1);
        string result = "";
        int i = 0;
        while(i < prev_str.size()) {
            int count = 1;
            while(++i < prev_str.size() && prev_str[i] == prev_str[i-1])
                count++;
            result += to_string(count) + prev_str[i-1];
        }
        return result;
    }
};