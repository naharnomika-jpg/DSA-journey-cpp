class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand=0;
        int cout=0;
        for(int val:nums){
            if(cout==0){
                cand=val;
            }
            if(val==cand){
                cout++;
            }
            else{
                cout--;
            }
        }
        return cand;
    }
};