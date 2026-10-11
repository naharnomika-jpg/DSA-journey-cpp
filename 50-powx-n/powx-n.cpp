class Solution {
public:
    double myPow(double x, int n) {
        long long b=n;
        bool neg = b<0;
        if(neg) b = -b;
        double ans=1.0;
        while(b>0){
            if(b & 1) ans*=x;
            x*=x;
            b>>=1;
        }
        return neg ? 1.0 / ans:ans;
    }
};