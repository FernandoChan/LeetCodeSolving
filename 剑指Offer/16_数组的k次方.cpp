// 3.18 out of memory error
class Solution {
private:
    bool invalidInput = false;
public:
    double Power(double base, int exponent) {
        
        if (equal(base,0.0) && exponent < 0){
                invalidInput=true;
                return 0.0;
        }
        double result = PowerCore(base, exponent);
        return result;        
    }
    bool equal (double num1, double num2){
        if ((num1-num2) <= 0.00001 && (num1-num2>=-0.00001)){
            return true;
        }
        return false;
    }
    double PowerCore(double base,int exponent){
        if (exponent == 0){
            return 1;
        }
        if (exponent == 1){
            return base;
        }
        
        double res = PowerCore(base , exponent  >> 1);
        res*=res;
        if  (exponent & 0x1 == 1){
            // odd number
            res *= base;
        }
        return res;
    }
};
