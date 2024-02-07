#include <bits/stdc++.h>

int findNextDistinctYear(int year)
{
    std::vector<int> digits;
    while (year > 0)
    {
        digits.push_back(year % 10);
        year /= 10;
    }
    for (int i = digits.size() - 1; i >= 0; --i)
    {
        if (digits[i] == 9 || any_of(digits.begin() + i + 1, digits.end(), [digits, i](int digit)
                                     { return digit == digits[i]; }))
        {
            digits[i]++;
            for (int j = i + 1; j < digits.size(); ++j)
            {
                if (digits[j] == 10)
                {
                    digits[j] = 0;
                    if (j + 1 < digits.size())
                    {
                        digits[j + 1]++;
                    }
                    else
                    {
                        digits.push_back(1);
                    }
                }
            }
            break;
        }
    }
    int new_year = 0;
    for (int i = digits.size() - 1; i >= 0; --i)
    {
        new_year = new_year * 10 + digits[i];
    }

    return new_year;
}

int main()
{
    int year;
    std::cin >> year;
    int next_year = findNextDistinctYear(year);
    std::cout << "Next year with distinct digits: " << next_year << std::endl;
    return 0;
}
