class Solution {
public:
    bool isPalindrome(int x) {
        long long revnum = 0;
        int dup = x;
        while( x > 0){
           int lastdigit;
           lastdigit = x % 10;
           x = x / 10;  
           revnum = (revnum * 10) + lastdigit; 
        }
        if(revnum == dup){
            return true;
        }
        else{
            return false;
        }
    }
};