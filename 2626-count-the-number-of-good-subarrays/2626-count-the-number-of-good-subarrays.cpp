class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int s = 0;
        int e = 0;
        int count = 0;
        long long no = 0;
        while (e < n && s < n) {
            mp[nums[e]]++;

            count += mp[nums[e]] - 1;

            if (count >= k) {
                cout << count << " " << s << e << " ";

                no += n - e;
                count -= mp[nums[s]] - 1;
                mp[nums[s]]--;

                s++;
                cout << count << endl;
                // e--;
                    
                count-=mp[nums[e]]-1;
                mp[nums[e]]--;
                e--;
            
                
            
            }
            e++;
        }
        return no;
    }
};