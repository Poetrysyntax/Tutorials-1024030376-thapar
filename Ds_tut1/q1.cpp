#include <iostream>
using namespace std;
int arr[100];
int n = 0;
void create() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
void display() {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insert() {
    int pos, elem;
    cout << "Enter position (1 to " << n + 1 << "): ";
    cin >> pos;
    cout << "Enter element to insert: ";
    cin >> elem;
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = elem;
    n++;
}
void deleteElement() {
    int pos;
    cout << "Enter position (1 to " << n << "): ";
    cin >> pos;
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}
void linearSearch() {
    int elem;
    bool found = false;
    cout << "Enter element to search: ";
    cin >> elem;
    for (int i = 0; i < n; i++) {
        if (arr[i] == elem) {
            cout << "Element found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element not found!" << endl;
    }
}
int main() {
    int choice;
    do {
        cout << "\n\tMENU\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: deleteElement(); break;
            case 5: linearSearch(); break;
            case 6: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);
    return 0;
}
