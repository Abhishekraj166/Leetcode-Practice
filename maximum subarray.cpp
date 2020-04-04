#include <vector>
#include<math.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int r = nums[0];
        int s = nums[0];
 
        for(int i=1; i<nums.size(); i++){
            s = max(nums[i], s + nums[i]);
            r = max(r, s);
        }
        return r;
    }
    int max(int a, int b) { return (a > b)? a : b; } 
   
};