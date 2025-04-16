class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mp;
        int s = 0;
        long long count = 0, no = 0;

        for (int e = 0; e < n; ++e) {
            count += mp[nums[e]];
            mp[nums[e]]++;

            while (count >= k) {
                 cout << count << " " << s << e << " ";
                no += n - e;
                mp[nums[s]]--;
                count -= mp[nums[s]];
                s++;
                cout << count << endl;
            }
        }

        return no;
    }
};
