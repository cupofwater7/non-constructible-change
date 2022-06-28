#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int nonConstructibleChange(vector<int> coins);

int main()
{
    vector<int> input = { 5, 7, 1, 1, 2, 3, 22 };

    cout << nonConstructibleChange(input);
    return 0;
}


int nonConstructibleChange(vector<int> coins) {
    // Write your code here.
    sort(coins.begin(), coins.end());


    int change = 0;

    for (int coin = 0; coin < coins.size(); coin++)
    {

        if (coins[coin] > change + 1)
        {
            return change + 1;
        }
        change += coins[coin];
    }
    return change + 1;
}