class Solution {
public:
    double helper(double x, int n){
        double res;
        if (x == 0) {
            return 0;
        }
        if (n == 0) {
            return 1;
        }
        if (n == 1) {
            return x;
        } else {
            res = helper(x, n/2);
            res = res *res;
            
            if(n % 2 == 0){
                return res;
            }else{
                return x *res;
            }
        }
    }

    double myPow(double x, int n) {
        if (n < 0) {
            n = abs(n);
            double res = helper(x, n);
            return 1 / res;
        } else {
            return helper(x, n);
        }
    }
};

// 2^6

// 0 x=2 n=6 r=32 //64
// 1 x=2 n=5 r=16 //32
// 2 x=2 n=4 r=8 //16
// 3 x=2 n=3 r=4 //8
// 4 x=2 n=2 r=2 //4
// 5 x=2 n=1