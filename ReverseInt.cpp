class Solution {
public:
    int reverse(int x) 
        {
            int res = 0;
            int pre_max_int = 214748364;
            bool negative = 0;
            if(x < 0) { negative = 1; x = x * (-1);}
            /*
сложное условие while - обьясняю:
            while (усл1 && (усл2 && усл3)) где: 
усл 1. (x != 0) - входное число не закончилось
усл 2. (res <= pre_max_int) - промежуточный результат не больше чем MAX_INT % 10
усл 3. (x % 10) <= (7 + int(negative)) - (x % 10) не больше чем последняя цифра макс\мин значения int (7 или 8 в зависимости от знака) диапазон значений int - 2...8 < x < 2..7
            */
                    while ((x != 0) && ((res <= pre_max_int) && ((x % 10) <= (7 + int(negative)))))
                        {
                            res *= 10;
                            res += x % 10;
                            x = x / 10;
                        };
                    if (negative) res = res * (-1);
                    if (x != 0) res = 0;
            return res;
        };
};