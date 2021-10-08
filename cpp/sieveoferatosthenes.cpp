#include <iostream>
using namespace std;
#define ll long long
void primeSieve(ll n)
{

    ll prime[10000] = {0};

    for (ll i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (ll j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (ll i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " " ;
        }
    }
    cout << endl;
}

// void primefactor(lln)
// {

//     llspf[100] = {0};
//     for (lli = 2; i <= n; i++){
//         spf[i]=i;
//     }
    
//     for (lli = 2; i <= n; i++)
//     {
//         if (spf[i] == i)
//         {
//             for (llj = i * i; j <= n; j +=i)
//             {
//                 if (spf[j] == j)
//                 {
//                     spf[j] = i;
//                 }
//             }
//         }

//     }

//     while (n != 1)
//         {
//             cout << spf[n] << " ";
//             n = n / spf[n];
//         }
// }


int main()
{

    ll n;
    cin >> n;

    primeSieve(n);
    // primefactor(n);
    return 0;
}