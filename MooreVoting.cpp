#include <bits/stdc++.h>

using namespace std;

int mooreVotingAlgo(int arr[], int n)
{
    int count = 1, candidate = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate)
            count++;
        else
            count--;
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }
    return candidate;
}
