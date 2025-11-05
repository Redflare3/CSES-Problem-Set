#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int x = 0;

    for (int i = 2; i < n; i += 2 ){
        x = n - i;
        if (x % 2== 0){
            cout << "Yes";
            return 0;

        }
    }


    cout << "No";
    return 0;

    }


