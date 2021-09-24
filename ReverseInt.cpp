class Solution {
public:
    int reverse(int x) 
        {
            int res = 0;
            int pre_max_int = 214748364;
            int pre_mix_int = -214748364;
            bool negative = 0;
                    while (x != 0)
                        {
                            if ((res > pre_max_int) || (res < pre_mix_int)) return 0;
                            else if ((res == pre_max_int) && ((x % 10) > 7 )) return 0;
                                else if ((res == pre_mix_int) && ((x % 10) > 8 )) return 0;
                            res *= 10;
                            res += x % 10;
                            x = x / 10;
                        };
                    if (negative) res = res * (-1);
            return res;
        };
};