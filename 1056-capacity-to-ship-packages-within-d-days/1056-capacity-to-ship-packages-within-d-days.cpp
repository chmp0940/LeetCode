class Solution {
public:
    bool isPossible(vector<int>& weights, int days,int mid)
    {
        int mindays=1;
        int count=0;
        for(auto i:weights)
        {
            if(count+i<=mid)
            {
                count+=i;
            }
            else{
                mindays++;
                count=0;
                count+=i;
            }
        }
        if(mindays<=days) return true;
        else return false;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int s=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(auto i:weights)
        {
            sum+=i;
        }
        int e=sum;
        int ans=0;
        while(s<=e)
        {
            int mid=s+(e-s)/2;

            if(isPossible(weights,days,mid))
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