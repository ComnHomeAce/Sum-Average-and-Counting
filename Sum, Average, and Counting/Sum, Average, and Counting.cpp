//This program finds the sum and average of 4 numbers,
//then returns the number of the entered numbers that are above the calculated average.

#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    //num = array
    //sum = sum
    //avg = average
    //i = index
    //cnt = count

    double num[4], sum, avg;
    int i = 0, cnt = 0;

    cout << "This program finds the sum and average of 4 numbers, then returns\n";
    cout << "the number of the entered numbers that are above the calculated average.\n\n";

    while(i<4)
    {
        cout << "Enter number " << i+1 <<": ";
        cin >> num[i];
        i++;
    }
    i = 0;

    sum = accumulate (num, num + 4, 0);
    avg = sum / 4;

    while (i<4)
    {
        if (num[i]>avg)
        {
            cnt += 1;
            i++;
        }
        else
        {
            i++;
        }
    }

    cout << "\nThe sum is " << sum << "\n";
    cout << "\nThe average is " << avg << "\n";
    cout << "\n" << cnt << " number(s) are above average.\n";
}