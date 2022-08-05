class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        int size= sizeof(nums)/sizeof(nums[0]);
        for(int i=0 ;i<size;i++){
            for(int j=i+1;j<size;j++){
                if (nums[i]==nums[j]){
                    return nums[i];
                }
            }
        }
        return 0;
    } 
};
      
