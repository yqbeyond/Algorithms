class Solution {
public:
    void swap(vector<int>& arr, int i, int j)
    {
        if (i == j) return;
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    
    void qsort(vector<int>& arr, int s, int e)
    {
        if (s >= e) return;
        int i = s+1;
        int pro = s;
        for (; i <= e; i++)
        {
            if (arr[i] < arr[pro])
            {
                swap(arr, pro + 1, i);
                swap(arr, pro + 1, pro);
                pro++;
            }
        }
        
        qsort(arr, s, pro-1);
        qsort(arr, pro+1, e);
    }
    
    vector< vector<int> > threeSum(vector<int>& nums) {
        vector< vector<int> > ret;
        if (nums.size() < 3) return ret;
        int j, p;
        qsort(nums, 0, nums.size() - 1);
        
        for (int i = 0; nums[i] <= 0 && i + 3 <= nums.size();)
        {
            for (int b = i + 1, e = nums.size() - 1; b < e && nums[e] >= 0;)
            {
                if (nums[i] + nums[b] + nums[e] == 0)
                {
                    vector<int> v; v.push_back(nums[i]); v.push_back(nums[b]); v.push_back(nums[e]); ret.push_back(v);
                    
                    for (j = b + 1, p = b; nums[b] == nums[j] && nums[j] <= 0 && j + 2 <= nums.size(); j++)
                        ;
                    b = j;
                    
                    for (j = e - 1, p = e; nums[e] == nums[j] && nums[j] >= 0 && j  >= 2; j--)
                        ;
                    e = j;
                }                
                else if (nums[i] + nums[b] + nums[e] < 0)
                    b++;
                else
                    e--;
            }
            j = i + 1;
            for (;nums[i] == nums[j] && nums[j] <= 0 && j + 3 <= nums.size(); j++) ;
            i = j;
        }
        return ret;
    }
};
