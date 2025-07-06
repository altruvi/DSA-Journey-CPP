#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Custom comparator function
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    // If second elements are same, sort by first element in descending order
    return p1.first > p2.first;
}

void explainmore() {
    int a[] = {5, 2, 9, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);

    // Normal sort
    sort(a, a + n);

    // Sort specific range
    sort(a + 2, a + 4);  // Only a[2] and a[3] get sorted

    // Sort in descending order
    sort(a, a + n, greater<int>());

    // Sorting pairs using custom comparator
    pair<int, int> p[] = {{1, 2}, {2, 1}, {4, 1}};
    int m = sizeof(p) / sizeof(p[0]);
    sort(p, p + m, comp);  // Use custom comparator

    // Built-in function to count set bits
    int num = 7;
    int cnt = __builtin_popcount(num);  // For int

    long long big_num = 139475;
    int cntll = __builtin_popcountll(big_num);  // For long long

    // Print results for understanding
    cout << "Sorted pairs using custom comparator:\n";
    for (int i = 0; i < m; ++i) {
        cout << "{" << p[i].first << ", " << p[i].second << "} ";
    }
    cout << "\nNumber of 1s in binary of " << num << " is: " << cnt << endl;
    cout << "Number of 1s in binary of " << big_num << " is: " << cntll << endl;
}

int main() {
    explainmore();
    return 0;
}
