class Solution {
public:
    int reverse(int x) 
        {
            int res = 0;
            if (x != 0)
                {
                    std::vector<int> tempV;
                    int k = 0; // коэффициэнт 
                    bool negative = 0;
                    if(x<0) { negative = 1; x = x * (-1);}
                    while (x != 0)
                        {
                            tempV.push_back(x % 10);
                            x = x / 10;
                        };
                    k = pow(10, tempV.size()-1); // коэффициэнт 
                    for (int a : tempV) // 
                        {
                            res += a * k; //
                            k /= 10; // коэфициэнт делится на 10.
                        };
                    if (negative) res = res * (-1);

                };
            return res;
        };
};