#include <iostream>
using namespace std;

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);

    int n  =0;
    long long x = 0;
   
    cin >> n;

    for (int i = 1 ; i <= n; i++){
        x += i;
    }

    long long x_2 = 0;
    for(int i = 0; i < n-1;i++){
        int x_2_i;
        cin >> x_2_i;
        x_2 += x_2_i;
    }

    cout << x - x_2;
}





