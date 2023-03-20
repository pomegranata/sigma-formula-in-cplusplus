#include <iostream>

using namespace std;

int rumus(int n){           //∑(x=1)^n = (2i+4)
    int x = 0;
    for (int i = 1; i <= n; i++){
        x = 2 * i + 4;
        cout << x << endl;
    }

    return x;
}

int main()
{
    int n;

    cout << "n: ";
    cin >> n;

    rumus(n);

    return 0;
}
