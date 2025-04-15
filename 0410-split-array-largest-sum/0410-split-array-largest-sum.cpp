class Solution {
public:

    bool isPossible(vector<int>&nums,int mid,int k)
    {
        // int l=nums[0];
        int st=1;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count+nums[i]<=mid)
            {
                count+=nums[i];
            }
            else{
                st++;
                count=nums[i];
            }
        }

        return st<=k;
    }

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int s=*max_element(nums.begin(),nums.end());

        int e=0;
        for(auto i:nums)
        {
            e+=i;
        }
        int ans=0;
        while(s<=e)
        {
            int mid=s+(e-s)/2;

            if(isPossible(nums,mid,k))
            {
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;


        
    }
};