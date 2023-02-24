#include <iostream>
#include <unordered_set>

using namespace std;

bool isDisjoint(int* arr1, int* arr2, int size1, int size2) {
    unordered_set<int> set1;

    // Add all elements of arr1 to set1
    for (int i = 0; i < size1; i++) {
        set1.insert(arr1[i]);
    }

    // Check if any element of arr2 is present in set1
    for (int i = 0; i < size2; i++) {
        if (set1.find(arr2[i]) != set1.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    int arr1[] = { 9,4,3,1,-2,6,5 };
    int arr2[] = { 7,10,8 };
    int size1 = 7;
    int size2 = 3;

    if (isDisjoint(arr1, arr2, size1, size2)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

}
