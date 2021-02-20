#include <iostream>
using namespace std;

int LList(int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n > 1)
        return LList(n - 2) + LList(n - 1);
}


int main()
{
    int n;
    cin >> n;
    cout << LList(n) << endl;
    return 0;
}


