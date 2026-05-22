class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {

        for(int idx=nums.size()-1; idx >=0; idx--){
            if(nums[idx] == 9) nums[idx] = 0;
            else{nums[idx]++; break;}
        }
       if(nums[0] == 0) {
        vector<int> result(nums.size() + 1, 0) ;
        result[0] = 1;
        return result;
       }
       return nums;
        
    }
};