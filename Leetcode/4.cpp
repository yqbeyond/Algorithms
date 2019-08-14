class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> tmp;
        while ( i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                tmp.push_back(nums1[i]);
                i++;
            }
            else if (nums1[i] == nums2[j])
            {
                tmp.push_back(nums1[i]);
                tmp.push_back(nums2[j]);
                i++;
                j++;
            }
            else
            {
                tmp.push_back(nums2[j]);
                j++;
            }
        }
        while ( i < nums1.size())
        {
            tmp.push_back(nums1[i]);
            i++;
        }
        while ( j < nums2.size())
        {
            tmp.push_back(nums2[j]);
            j++;
        }
        
        return (tmp[tmp.size()/2] + tmp[(tmp.size()-1)/2]) / 2.0;
    }
};
