class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        int n = nums.size();

        // Har number ki count badhao
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }

        // Jo number n/2 se zyada baar aaye, wahi majority element hai
        for (auto it : mpp) {
            if (it.second > n / 2) {
                return it.first;
            }
        }

        return -1; // Majority element guaranteed hai, isliye yahan nahi aayega
    }
};