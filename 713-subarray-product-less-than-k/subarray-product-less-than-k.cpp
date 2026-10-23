class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         int i,j,count,pro,len;
        i=0;
        j=0;
        len=nums.size();
       pro=1;
        count=0;
        if(k<=1)
        {
            return 0;
        }
       while(j<len)
       {
            pro=pro*nums[j];
            while(pro>=k)
            {
               pro=(pro/nums[i]);
                i++;
            }
                 count=count+((j-i)+1);
                j++;
       }
       return count;    
    }
};