
#include <iostream>
#include<iomanip>
using namespace std;

int cal(string c, int sum, int a, int b) {
    if (a == 0 && b == 0) {
        cout << '0';
        return 0;
    }
    for (int i = 0; i < a - sum; i++)
        cout << '0';
    for (int i = 0; i < sum; i++)
        cout << c[i];
    
    if (b == 0)
        return 0;
    cout << '.';
    if (int(c.length() - sum) <= b) {
        for (int i = sum + 1; i < int(c.length()); i++)
            cout << c[i];
        for(int i = 0; i <int(b-c.length()+sum+1); i++)
            cout << '0';
    }
    else
        for (int i = sum + 1; i < sum + 1+b; i++)
            cout << c[i];
    return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    string c;
    cin >> c;
    for (int i = 0; i < c.length(); i++)
        if (c[i] != '.')
            sum++;
        else
            if(c[i] == '.')
                break;
    
    cal(c, sum, a, b);
    return 0;
}

