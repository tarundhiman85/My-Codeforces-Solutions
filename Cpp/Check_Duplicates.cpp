//Learned if arr values are from 1 to n then we can use array itself
//for hashing by simple maths and we are using indexes as array elemenets
#include <bits/stdc++.h>
using namespace std;

// function to find repeating elements
vector<int> printRepeating(vector<int> arr, int n)
{
    // First check all the values that are
    // present in an array then go to that
    // values as indexes and increment by
    // the size of array
    for (int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }
    vector<int> v;
    // Now check which value exists more
    // than once by dividing with the size
    // of array
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
            v.push_back(arr[i]);
    }
    return v;
}

// Driver code
int main()
{
     vector<int> arr{ 1, 6, 3, 1, 3, 6, 6 };
    //int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "The repeating elements are: \n";

    // Function call
    printRepeating(arr, arr.size());
    return 0;
}