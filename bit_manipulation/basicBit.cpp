#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*
        2^x <= 10^7
        log(10^7) == 23
        so maximumm arrray sice is 23   basically this is brute forcingc`

     */

    int n;
    cout << "Enter the size of array: " << "\n";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the number in array: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "All the subset are --->>> " << "\n";
    for (int i = 0; i < (1 << n); i++)
    { // 0000 --> 1111 considering alll possibility
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                cout << a[j] << " ";
            }
        }
        cout << "\n";
    }

    cout << "------------------------------------------" << endl;

    /*
        exact complimetn of a number
     */

    int l = 0;
    int b;
    cout << "enter the number whose compliment is to calculate: " << "\n";
    cin >> b;
    while (b >> l)
    {
        l++;
    }

    int exact_compliment_of_a = ~b & ((1 << l) - 1);
    cout << "exact_compliment_of_a is: " << exact_compliment_of_a << "\n";

    return 0;
}
