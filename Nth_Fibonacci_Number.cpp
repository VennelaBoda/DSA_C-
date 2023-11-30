#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 1;
    int first = 1;
    int second = 1;
    if(n == 1)
        cout << ans << endl;
    else if(n == 2)
        cout << ans << endl;
    else
    {
        for(int i = 2; i < n; i++)
        {
            ans = first + second;
            first = second;
            second = ans;
        }
        cout << ans << endl;
    }

    return 0;
}
