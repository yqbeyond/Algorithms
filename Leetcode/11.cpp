class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int size = height.size();
        int max = 0;
        int _area;
        /*
        for (int i = 0; i < size; i++)
        {
            for (int j = i+1; j < size; j++)
            {
                _area = (j - i) * (height[j] > height[i] ? height[i] : height[j]);
                if (max < _area) max = _area;
            }
        }
        */
        
        int b = 0, e = size - 1;
        while ( b < e)
        {
            _area = (e - b) * (height[b] > height[e] ? height[e] : height[b]);
            if (max < _area) max = _area;
            if (height[b] > height[e]) e--; // 动短边，下一个时刻的面积可能比现在的大，也可能比现在的小。如果动长边的话，则必定比现在的小
            else b++;
        }
            
        return max;
    }
};
