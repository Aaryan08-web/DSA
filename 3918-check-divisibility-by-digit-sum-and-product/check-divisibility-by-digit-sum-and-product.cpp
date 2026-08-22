class Solution {
public:
    bool checkDivisibility(int n) {
        int a = n;
        int add = 0;
        int mul = 1;

        while(n>0){
            int digit = n%10;
            add +=  digit;
            mul *= digit;
            n /= 10;
        }
        if(a % (add+mul) == 0){
            return true;
        }else{
            return false;
        }
    }
};

