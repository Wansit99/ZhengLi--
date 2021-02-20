#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int sum = 0;
    for (int i = 1; i < a; i++)
        if (a % i == 0)
            sum += i;
    if (sum == a)
        cout << "True";
    else
        cout << "False";
    return 0;
}
