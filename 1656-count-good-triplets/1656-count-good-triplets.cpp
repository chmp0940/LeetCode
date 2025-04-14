class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = arr.size();

        int s = 0;
        int m = 0;
        int e = 0;
        int count = 0;

        while (s < n - 2 ) {
            m = s + 1;
            while (m < n - 1) {
                if (abs(arr[s] - arr[m]) <= a) {
                    e = m + 1;
                    while (e < n) {
                        if (abs(arr[m] - arr[e]) <= b &&
                            abs(arr[s] - arr[e]) <= c) {

                            count++;
                        }
                        e++;
                    }
                }
                m++;
            }
            s++;
        }
        return count;
    }
};