  using ll = long long;

    bool sol(vector<int>& nums, int m, ll sum) {
        int c = 1;
        ll s = 0;
        for (auto& num : nums) {
            s += num;
            if (s > sum) {
                s = num;
                ++c;
            }
        }
        return c <= m;
    }

    int splitArray(vector<int>& nums, int m) {
        ll left = 0, right = 0;
        for (auto& num : nums) {
            left = max(left, (ll)num);
            right += num;
        }
        while (left <= right) {
            ll mid = left + (right-left)/2;
            if (sol(nums, m, mid))
                right = mid-1;
            else
                left = mid+1;
        }
        return left;
    }
