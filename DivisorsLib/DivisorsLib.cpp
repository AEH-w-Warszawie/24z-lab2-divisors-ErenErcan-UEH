#include <vector>
#include <cmath>

std::vector<unsigned long long> divisors(unsigned long long number)
{
    std::vector<unsigned long long> result;

    for (unsigned long long i = 2; i <= std::sqrt(number); ++i)
    {
        if (number % i == 0)
        {
            result.push_back(i);
            if (i != number / i && (number / i) < number)
            {
                result.push_back(number / i);
            }
        }
    }

    return result;
}
