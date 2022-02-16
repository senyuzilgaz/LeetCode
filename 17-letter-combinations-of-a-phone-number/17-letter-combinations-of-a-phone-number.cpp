class Solution {
public:
    
 unordered_map<int, vector<char>> DIGITS{
	{0,{'0'}},       					{1,{'1'}},
	{2,{'a','b','c'}},       	{3,{'d','e','f'}},
	{4,{'g','h','i'}},       	{5,{'j','k','l'}},
	{6,{'m','n','o'}},       	{7,{'p','q','r','s'}},
	{8,{'t','u','v'}},       	{9,{'w','x','y','z'}}
};
   
    vector<string> letterCombinations(string digits) {
        if(digits == "")
            return {};
        vector<string> result;
        vector<char> current(digits.size());
        helper(result, current, 0, digits);
        return result;
    }
    
    void helper(vector<string> &result, vector<char> &current, int idx, string digits){
        if(idx == digits.size()){
            string res = accumulate(current.begin(), current.end(), string{""});
            result.push_back(res);
            return;
        }else{
            int digit = digits[idx] - '0';
            vector<char> letters = DIGITS[digit];
            for( auto letter : letters){
                current[idx] = letter;
                helper(result, current, idx + 1, digits);
            }
        }
    }
};