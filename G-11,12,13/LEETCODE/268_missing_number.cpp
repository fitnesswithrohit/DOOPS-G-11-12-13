// 1st Method

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        int sum_n = n * (n + 1) / 2;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }

        return sum_n - sum;
    }
};

// 2nd Method

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int x = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        { // x = 0^3^0^1
            x = x ^ nums[i];
        }

        for (int i = 0; i <= n; i++)
        { // x = 0^3^0^1 ^ 0^1^2^3
            x = x ^ i;
        }

        return x;
    }
};
