class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector <int> st(256, -1);
        vector <int> ts(256, -1);
        for(int i = 0;i < s.size();i++){
            unsigned char a = s[i];
            unsigned char b = t[i];
            if(st[a] == -1 && ts[b] == -1){
                st[a] = b;
                ts[b] = a;
            }
            else if(st[a] != b || ts[b] != a){
                return false;
            }
        }
        return true;
    }
};