#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
       cin >> a[i];
    }
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    long long total = 1LL * (n + 1) * (n + 2) / 2;
    cout << total - sum;
    return 0;
}