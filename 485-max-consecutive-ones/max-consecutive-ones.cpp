class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

int maxi =0 ;
int cot =0 ;
int n = nums.size(); 
for(int i =0 ; i< n ; i++){
if(nums[i] == 1) { cot++;
maxi = max(maxi,cot);
} 
else cot =0 ;
}

   return maxi;     
    }
};