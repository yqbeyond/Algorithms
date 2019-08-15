class Solution {
public:
    void longestDecomposition(string text, int b, int e, int& count)
    {
        if (b == e) { count += 1; return;}
        if (b > e) return ;
        
        int size = e - b + 1;
        int i;
        
        bool ok = true;
        for (i = 1; i <= size / 2; i++)
        {
            ok = true;            
            for (int j = 0; j < i; j++)
            {               
                if (text[b+j] != text[b + size - i + j ]) 
                {                    
                    ok = false;
                    break;
                }
            }
            if (ok) {  break;}
        }
        if (ok)
        {
            count += 2;
            longestDecomposition(text, b + i, e - i, count);
        }
        else
            count += 1;
            
        
    }
    int longestDecomposition(string text) {
        int count = 0;
        longestDecomposition(text, 0, text.size() - 1, count);
        return count;
    }
};
