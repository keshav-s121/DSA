class Solution {
public:
    int majorityElement(vector<int>& nums) {

int n = nums.size();
int cnt =0 ;
int el ;

for(int i =0 ; i< n ; i++){

if(cnt ==0 ){

cnt = 1;
el = nums[i];}

else if (nums[i] == el) {cnt++;}

else {cnt--;}

}return el;
}};


    //     map<int, int> mpp;
    //     int n = nums.size();

    //     // Har number ki count badhao
    //     for (int i = 0; i < n; i++) {
    //         mpp[nums[i]]++;
    //     }

    //     // Jo number n/2 se zyada baar aaye, wahi majority element hai
    //     for (auto it : mpp) {
    //         if (it.second > n / 2) {
    //             return it.first;
    //         }
    //     }

    //     return -1; // Majority element guaranteed hai, isliye yahan nahi aayega
    // }
// };