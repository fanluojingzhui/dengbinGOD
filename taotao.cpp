#include <iostream>
using namespace std;

int main()
{
    int a[10], n = 0, hight = 0;
    for (int i = 0; i < 2; i++)
    {
        cin >> a[i];
        cout << "a[" << i << "]=" << a[i] << endl;
    }
    cin >> hight;
    for (int j = 0; j < 2; j++)
    {
        cout << "a[" << j << "]=" << a[j] << endl;
        if (a[j] <= hight + 30)
            n++;
    }
    cout << "陶陶可以够到" << n << "个苹果" << endl;
    return 0;
} // namespace std;
