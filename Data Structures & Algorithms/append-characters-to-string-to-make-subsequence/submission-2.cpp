class Solution {
public:
    int appendCharacters(string s, string t) 
    {
        int i =0,j= 0;
        while(i<(int)s.size() && j<(int)t.size())
        {
            if(s[i] == t[j]) ++j;
            ++i;

        }
        return (int)t.size() - j;
    }
};