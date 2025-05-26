class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        int n=words.size();
        unordered_map<string,int> mp;

        int ans=0;
        int count1=0;
        int count2=0;

        for(int i=0;i<n;i++)
        {
            string temp=words[i];
            reverse(temp.begin(),temp.end());
            if(mp[temp])
            {
                ans+=4;  
                if(words[i][0]==words[i][1])
                {
                    count2++;
                }
                mp[temp]--;
            }
            else{
                mp[words[i]]++;
                if((words[i][0]==words[i][1]))
                {
                    count1++;
                  
                }

            }
        }

        if(count1-count2>0) return ans+2;

        return ans;


    }
};