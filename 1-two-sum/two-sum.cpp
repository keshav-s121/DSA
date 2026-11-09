class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

map<int ,int > mpp;
int n =nums.size();

for(int i =0; i< n ; i++){
    int arr = nums[i];
    int morenum = target -arr;
    if(mpp.find(morenum)!= mpp.end()){
        return {mpp[morenum],i};
    }
    mpp[arr] = i;
}
return {-1 , -1};


        
    }
};