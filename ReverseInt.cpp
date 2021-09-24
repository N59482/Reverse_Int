class Solution {
public:
    int reverse(int x) 
        {
            int res = 0;
            int pre_max_int = 214748364;
            bool negative = 0;
            if(x < 0) { negative = 1; x = x * (-1);}
                    while (x != 0)
                        {
                            if (res > pre_max_int) return 0;
                            else if ((res == pre_max_int) && ((x % 10) > (7 + int(negative)))) return 0;
                            res *= 10;
                            res += x % 10;
                            x = x / 10;
                        };
                    if (negative) res = res * (-1);
            return res;
        };
};