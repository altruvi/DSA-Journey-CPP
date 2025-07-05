#include<iostream>
#include<set> // Needed for multiset
using namespace std;

void explainMultiset(){
    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1); // ms = {1, 1, 1}

    ms.erase(1);  // Erases **all** instances of 1 => ms becomes empty

    // If you wanted to erase only a **single** instance, do this:
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); // ms = {1, 1, 1} again

    int cnt = ms.count(1);  // cnt = 3

    ms.erase(ms.find(1)); // Erases only **one** instance of 1 => ms = {1, 1}

    // Correct way to erase a range: use two valid iterators
    auto it1 = ms.find(1);
    auto it2 = it1;
    advance(it2, 2); // Move iterator two positions ahead

    ms.erase(it1, it2); // Erases two more elements => ms becomes empty again
}

int main(){
    explainMultiset();
    return 0;
}
