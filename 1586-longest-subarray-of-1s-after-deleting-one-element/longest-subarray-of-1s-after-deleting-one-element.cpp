class Solution {
public:
    int longestSubarray(vector<int>& nums) {
    int i,j,count_zero,subarr,max_subarr,n=nums.size();
    i=0;
    j=0;
    count_zero=0;
    subarr=0;
    max_subarr=0;
    while(j<n)
    {
        if(nums[j]==0)
        {
            count_zero++;
        }

        while(count_zero==2)
        {
            if(nums[i]==0)
            {
                count_zero--;
            }
            i++;
        }
        if((j-i)>subarr)
        {
            subarr=j-i;
        }
        j++;
    } 
    return subarr;   
    }
};