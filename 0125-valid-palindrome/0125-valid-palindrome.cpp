class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.size();
        // two pointer le lo pehle
        int i = 0; int j = n-1;
        //iterate karao
        while(i<j){
            //ignore karo npn alphanumeric leteers ko and pointer ko       increment and decremnt karo.skipping alphanumeric
        while(i<j && !isalnum(s[i])) i++;
        while(i<j && !isalnum(s[j])) j--;
        //compare the string letter case ko handle karte hue
        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        i++;
        j--;
        }
        return true;
    }
};