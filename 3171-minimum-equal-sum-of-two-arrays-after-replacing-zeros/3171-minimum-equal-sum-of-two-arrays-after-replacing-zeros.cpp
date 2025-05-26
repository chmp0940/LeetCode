class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {

        long long sum1=0;
        bool is1=false;
        for(auto i:nums1)
        {
            if(i==0)
            {
                sum1+=1;
                is1=true;
            }
            else{
                sum1+=i;
            }
        }
        long long sum2=0;
        bool is2=false;
        for(auto i:nums2)
        {
            if(i==0)
            {
                sum2+=1;
                is2=true;
            }
            else{
                sum2+=i;
            }
        }
        if(sum1!=sum2&&!is1&&!is2)
        {
            return -1;
        }
        if((!is1&&sum1<sum2)||(!is2&&sum2<sum1))
        {
            return -1;
        }
        long long ans=max(sum1,sum2);
        return ans;

    }
};