class Solution {
public:
    bool isPalindrome(int l,int r,string s)
    {
        while(l<=r)
        {
            if(s[l]!=s[r]) return false;

            l++;
            r--;
        }
        return true;
    }



    string longestPalindrome(string s) {
        int n=s.length();
        string ans;
        int st=0;
        int e=n-1;
        int i=0;
        int maxi=INT_MIN;
        while(i<n)
        {
        int l=0;

            st=i;
            e=st;;
            bool is=true;
            while(e<n&&st<=e)
            {
                if(s[st]==s[e])
                {
                    if(isPalindrome(st,e,s))
                    {
                        l=e-st+1;
                    }
                }
                e++;
                
            }
           
            
            
                if(l>maxi)
                {
                    maxi=l;
                    ans=s.substr(st,l);
                }
            

            i++;
        }

        return ans;
    }
};