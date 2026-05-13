class Solution {
public:
    vector<int> replaceElements(vector<int>& arr)
    {
        int maxfromright = -1;
        for(int i =(int)arr.size()-1;i>=0;--i)
        {
            int current = arr[i];
            arr[i] = maxfromright;
            maxfromright = std::max(maxfromright, current);
        }
        return arr;
    }
};