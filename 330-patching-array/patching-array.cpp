class Solution {
    //kayes
public:
    int minPatches(vector<int>& nums, int n) {
        long long miss = 1;
        int patches = 0;
        int i = 0;
        while (miss <= n ){
            if(i<nums.size() && nums[i] <= miss){
                miss += nums[i];
                i++;
            }else{
                miss += miss;
                patches++;

            }
        } return patches;
        
    }
}; 