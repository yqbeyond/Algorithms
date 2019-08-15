class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) return strs[0];
        if (strs.size() == 0) return "";
        
        int index = 0;
        string ret = "";
        while (true){
            bool ok = true;
            for (int i = 1; i < strs.size(); i++){
                if (index >= strs[i].size() || strs[i][index] != strs[0][index]) {
                    ok = false;
                    break;
                }
                
            }
            if (!ok)
                break;
            else
                ret += strs[0][index];
            index++;
        }
        return ret;
    }
};
