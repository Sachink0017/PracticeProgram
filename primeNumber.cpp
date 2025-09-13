#include <bits/stdc++.h>

using namespace std;

int main()
{
    int start, end;
    vector<int> result;
    cout << "enter the range to print the prime numbers between";
    cin >> start >> end;
    // brute force
    for (int i = start; i <= end; i++)
    {
        if (i <= 1)
        {
            cout << "not prime";
        }
        for (int j = 2; j < i; j++)
        {
            if (j % i == 0)
            {
                result.push_back(i);
            }
        }
    }
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i];
    }
    return 0;
}