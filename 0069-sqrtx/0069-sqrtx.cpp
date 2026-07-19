class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }

        int left = 1;
        int right = x / 2;

        while(left<=right){
            long long int mid = (left + right)/2;
            long long int square = mid*mid ;

            if(square == x){
                return mid;
            }else if(square < x){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return right;
        
    }
};