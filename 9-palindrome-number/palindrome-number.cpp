class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int dup = x;
        long long revnum = 0;

        while (x != 0) {
            int id = x % 10;
            x = x / 10;

            revnum = (revnum * 10) + id;
        }

        if (revnum == dup) {
            return true;
        }

        return false;
    }
};