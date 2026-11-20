class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size()) return false;

        int freq1[26] = {0};
        int freq2[26] = {0};

        int n = s1.size();
        int m = s2.size();

        for (char c : s1) 
        {
            freq1[c - 'a']++;
        }

        for (int i = 0; i < n; i++) 
        {
            freq2[s2[i] - 'a']++;
        }

        if (equal(freq1, freq1 + 26, freq2)) 
        {
            return true;
        }

        for (int right = n; right < m; right++) 
        {

            freq2[s2[right] - 'a']++;

            freq2[s2[right - n] - 'a']--;

            if (equal(freq1, freq1 + 26, freq2)) 
            {
                return true;
            }
        }

        return false;
    }
};
