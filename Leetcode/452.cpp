int cmp(vector<int>& a, vector<int>& b) { return a[0] < b[0];}

class Solution {
public:
   
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.size() == 0) return 0;
        sort(points.begin(), points.end(), cmp);
        int max_l = points[0][0];
        int min_r = points[0][1];
        int ret = 1;
        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] > max_l) max_l = points[i][0];
            if (points[i][1] < min_r) min_r = points[i][1];
            
            if (max_l > min_r) {
                ret += 1;
                max_l = points[i][0];
                min_r = points[i][1];
            }
        }
        return ret;
    }
};
