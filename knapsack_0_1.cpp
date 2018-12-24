#include <iostream>
using namespace std;
int main ()
{
    int i, j, weight [100], b [100], W, x,y, dparray [100][100];
    cout << "Enter the number of items please: ";
    cin >> y;
    cout << "Enter the weights please: ";
    for (i = 1; i <= y; i++) cin >> weight [i];
    cout << "Enter the  cost: ";
    for (i = 1; i <= y; i++) cin >> b [i];
    cout << "Enter the knapsack weight please: ";
    cin >> W;

    for (i = 0; i <= W; i++) dparray [0] [i];
    for (i = 0; i <= y; i++) dparray [i] [0];

    for (i = 1; i <= y; i++) {
        for (j = 1; j <= W; j++) {
            if (weight [i] <= j) {
                if (b [i] + dparray [i - 1] [j - weight [i]] > dparray [i - 1] [j]) dparray [i] [j] = b [i] + dparray [i - 1] [j - weight [i]];
                else dparray [i] [j] = dparray [i - 1] [j];
            }
            else dparray [i] [j] = dparray [i - 1] [j];
        }
    }

    for (i = 0; i <= y; i++) {
        for (j = 1; j <= W; j++) {
            cout << dparray [i] [j] << ' ';
        }
        cout << '\n';
    }
    i = y;
    j = W;
    cout << "Maximum benefit will be: " << dparray [i] [j] << endl << endl;

    cout << "The taken elements will be: ";
    while (i > 0 && b > 0)
    {
        if (dparray [i] [j] != dparray [i - 1] [j])
        {
            cout << i << " ";
            i--;
            j = j - weight [i];
        }
        else i--;
    }
    cout << '\n';
}







