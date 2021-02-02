//Author- Suryakant Chandrakar
//contact-785surya@gmail.com

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int distance_sum(int arr[], int n)
{
    int res = 0, sum = 0;
    sort(arr, arr + n); // sorting the array.
    for (int i = 0; i < n; i++)
    {
        res += (arr[i] * i - sum);
        sum += arr[i];
    }
    return res;
}

int totaldistancesum(int x[], int y[], int n)
{
    return distance_sum(x, n) + distance_sum(y, n);
}

int main() //Main function
{
    cout << "Welcome to my Program" << endl;
    int x[] = {2, 4, 6, 8, 10};
    int y[] = {1, 3, 5, 7, 9};
    int n = sizeof(x) / sizeof(x[0]);// divide Total size by size of 1 unit to get total numbers
    cout << n <<endl;
    cout << "test cases are \n" << endl;
    cout << "X =\"2, 4, 6, 8, 10\" \n" << endl;
    cout << "Y =\"1, 3, 5, 7, 9\" \n" << endl;
    cout << "Sum of Manhattan distances is:\n\n"<<totaldistancesum(x, y, n) << endl;
    return 0;
}