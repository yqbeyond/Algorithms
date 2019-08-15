class Solution {
public:
    void swap( vector<int>&arr, int i, int j)
    {
        if (i == j) return ;
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    
    void permute(vector<int>& nums, int s, int e, vector< vector<int> >& ret)
    {
        if (s == e) { ret.push_back(nums); return; }
        permute(nums, s+1, e, ret);
        for (int i = s + 1; i <= e; i++)
        {
            swap(nums, s, i);
            permute(nums, s+1, e, ret);
            swap(nums, s, i);
        }
    }
    vector<vector<int> > permute(vector<int>& nums) {
        vector< vector<int> > ret;
        permute(nums, 0, nums.size() - 1, ret);
        return ret;
    }
};
