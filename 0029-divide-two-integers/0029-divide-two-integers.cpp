class Solution {
public:

    long long divides(long long a , long long b){

        if(a == 0){
            return 0;
        }

       
        long long quotient = 0;

        int sign  = ((a<0)^(b<0) ? -1:1);

        a = abs(a);
        b = abs(b);

        while(a>=b){
            long long temp = b;
            long long multiple = 1;

            while ((temp << 1) <= a) {
                temp <<= 1;
                multiple <<= 1;
            }
            a -= temp;
            quotient+=multiple;;
        }

        return quotient*sign ; 

    }
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }

        return divides(dividend,divisor);

        
        
    }
};