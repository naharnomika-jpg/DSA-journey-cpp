class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }
        vector<pair<char,int>>items(freq.begin(),freq.end());
        sort(items.begin(),items.end(),[](auto &a, auto &b){
            return a.second > b.second;
        });
        string result;
        for(auto &p :items){
            result += string(p.second , p.first);
        }
        return result;
    }
};