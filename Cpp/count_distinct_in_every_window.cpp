//just check every window from 0 to n-k  this is one iteration
//for getting k as loop but another iteration will be
//for each k range we will be checking disctinct elements
//by simple naive approach

// The trick is to use the 
// count of the previous window while sliding the window. 
// To do this a hash map can be used that stores elements
// of the current window. The hash-map is also operated 
// on by simultaneous addition and removal of an element 
// while keeping track of distinct elements. The problem 
// deals with finding the count of distinct elements 
// in a window of length k, at any step while shifting 
// the window and discarding all the computation done in 
// the previous step, even though k - 1 elements are same 
// from the previous adjacent window. For example, assume 
// that elements from index i to i + k - 1 are stored in 
// a Hash Map as an element-frequency pair. So, while 
// updating the Hash Map in range i + 1 to i + k, reduce 
// the frequency of the i-th element by 1 and increase 
// the frequency of (i + k)-th 
// element by 1.Insertion and deletion from the 
// HashMap takes constant time

// An efficient C++ program to
// count distinct elements in
// every window of size k
#include <iostream>
#include <map>
using namespace std;

void countDistinct(int arr[], int k, int n)
{
    // Creates an empty hashmap hm
    map<int, int> hm;

    // initialize distinct element count for current window
    int dist_count = 0;

    // Traverse the first window and store count
    // of every element in hash map
    for (int i = 0; i < k; i++) {
        if (hm[arr[i]] == 0) {
            dist_count++;
        }
        hm[arr[i]] += 1;
    }

    // Print count of first window
    cout << dist_count << endl;

    // Traverse through the remaining array
    for (int i = k; i < n; i++) {
        // Remove first element of previous window
        // If there was only one occurrence, then reduce distinct count.
        if (hm[arr[i - k]] == 1) {
            dist_count--;
        }
        // reduce count of the removed element
        hm[arr[i - k]] -= 1;

        // Add new element of current window
        // If this element appears first time,
        // increment distinct element count

        if (hm[arr[i]] == 0) {
            dist_count++;
        }
        hm[arr[i]] += 1;

        // Print count of current window
        cout << dist_count << endl;
    }
}

int main()
{
    int arr[] = { 1, 2, 1, 3, 4, 2, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    countDistinct(arr, k, size);

    return 0;
}
// This solution is contributed by Aditya Goel
