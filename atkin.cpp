#include <bits/stdc++.h>
using namespace std;

vector<int> sieve_of_atkins(int n)
{
    vector<bool> prime(n + 1, false);

    // 2 and 3
    prime[2] = true;
    prime[3] = true;

    for (int x = 1; x*x <= n; x++)
    {
        for (int y = 1; y*y <= n; y++)
        {
            // check 1
            int val1 = 4 * x * x + y * y;
            if (val1 <= n && (val1 % 12 == 1 || val1 % 12 == 5))
            {
                prime[val1] = true;
            }
            int val2 = 3 * x * x + y * y;
            if (val2 <= n && val2 % 12 == 7)
            {
                prime[val1] = true;
            }
            int val3 = 3 * x * x - y * y;
            if (val3 <= n && val3 % 12 == 11)
            {
                prime[val1] = true;
            }
        }
    }
    for (int i = 5; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i * i)
                prime[j] = false;
        }
    }
    vector<int> prime_num;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            prime_num.push_back(i);
    }
    return prime_num;
}

int main()
{
    int limit;
    cout << "Enter the limit to find primes: ";
    cin >> limit;

    vector<int> primes = sieve_of_atkins(limit);

    cout << "Primes up to " << limit << " are:\n";
    for (int prime : primes)
    {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}