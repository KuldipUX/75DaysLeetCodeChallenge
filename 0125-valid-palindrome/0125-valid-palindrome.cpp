class Solution {
public://we will use two pointer approach in this question 
    bool isPalindrome(string s) {
        int n = s.size();
        int i=0;int j = n-1;
       while(i<j){
        //skip non alphanumeric letters
        while(i<j && !isalnum(s[i])) i++;
        while(i<j && !isalnum(s[j])) j--;
        //compare letters handling case
        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }
        i++;
        j--;
       }
       return true;
    }
};