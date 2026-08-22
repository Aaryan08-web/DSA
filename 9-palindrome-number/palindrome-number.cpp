class Solution {
public:
    bool isPalindrome(int x) {
        int a = x;
        long reverse = 0;

        if(x<0){
            return false;
        }

        while(x>0){
            int digit = x%10;
            reverse = reverse * 10 + digit;
            x /= 10;
        }
        if(a == reverse){
            return true;
        }
        else{
            return false;
        }
    }
};