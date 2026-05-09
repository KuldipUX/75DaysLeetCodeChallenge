class Solution {
public:
    
    bool isMatched(unordered_map<char,int>& m1,
                   unordered_map<char,int>& m2) {
        return m1 == m2;// sahi hua to true return hoga otherwise false
    }
    bool checkInclusion(string s1, string s2) {
          int n = s1.size();
          int m = s2.size();

           if (m < n) return false; //dusri string jiske andr permutation check kar rahe hai wo hi agar choti nikli to bc fayada kya. false return karo.
         unordered_map<char,int> m1, m2;
         // initial window
        for (int i = 0; i < n; i++) {
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        if (isMatched(m1, m2)) return true;// initial window me hi agr permutation combination of string mil jaaye fir to sahi turant return true kar do

        //agar nahi karta to window slide karenge.
        for(int i = n;i<m;i++){
            m2[s2[i]]++;//add new character
            m2[s2[i-n]]--;//remove old character
            if (m2[s2[i - n]] == 0)
                m2.erase(s2[i - n]);
            if (isMatched(m1, m2)) return true;
        }
        return false;
    }
};// iska brute force bhi dhekna padega.