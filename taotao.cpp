#include <iostream>
using namespace std;

int main()
{
    int a[10], n = 0, hight = 0;
    for (int i = 0; i < 2; i++)
    {
        cin >> a[i];
    }
    cin >> hight;
    for (int j = 0; j < 2; j++)
    {
        if (a[j] <= hight + 30)
            n++;
    }
    cout << n << endl;
    return 0;
} // namespace std;
