#include <iostream>

using namespace std;

class MathUtils
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }

    static int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main()
{

    int sum = MathUtils::add(75, 86);
    int greatestCommonDivisor = MathUtils::gcd(34, 85);

    cout << "Sum: " << sum << endl;
    cout << "GCD: " << greatestCommonDivisor << endl;

    return 0;
}
