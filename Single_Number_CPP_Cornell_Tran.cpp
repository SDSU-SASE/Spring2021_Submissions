class Solution
{
public:
    int singleNumber(vector<int>& nums)
    {
        for(int x = 0; x < nums.size(); x++)
        {
            int store = nums[x];
            int dupe = 0;
            for (int y = 0; y < nums.size(); y++)
            {
                if (y != x)
                {
                    if (store == nums[y])
                    {
                        dupe = 1;
                        break;
                    }
                }
            }
            if (dupe == 0)
            {
                return store;
            }
        }
        return 0;
    }
};
