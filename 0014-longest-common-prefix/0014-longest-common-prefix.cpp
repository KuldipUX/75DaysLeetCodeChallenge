class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        for(int i = 0; i < strs[0].size(); i++) {
            char ch = strs[0][i];//first string ka ith index ki value.
             //strs[1][i] == ch ?
            //strs[2][i] == ch ?
           //strs[3][i] == ch ?
            for(int j = 1; j < strs.size(); j++) {
                if(i >= strs[j].size() || strs[j][i] != ch)// "Jab i second string ki length ke barabar ya usse bada ho jata hai, tab us index par value exist nahi karti."
                    return strs[0].substr(0, i);
            }
        }
        return strs[0];
    }
};
