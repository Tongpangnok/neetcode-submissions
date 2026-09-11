class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int g=-1;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
          g=max(arr[j],g);
        }
        arr[i]=g;
        g=-1;
    }
    return arr;
    }
};