class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        int freq[26] = {0};
        int i = 0;
        int j = 0;
        for( char p : s ){
            freq[s[i] - 'a']++;
            i++;
        }
        for( char n : t ){
            freq[t[j] - 'a']--;
            j++;
        }
        for(int i = 0; i < 26; i++){
            if( freq[i] != 0){
                return false;
        }
        
        }
        return true;
    }
};