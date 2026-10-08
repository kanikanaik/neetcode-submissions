class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s1;
        unordered_map<char,int> s2;

        for(char a : s){
            s1[a]++;
        }
        for(char b: t){
            s2[b]++;
        }

        if(s1 == s2){
            return true;
        }else{
            return false;
        }
    }
};
