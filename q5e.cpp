#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter order of symmetric matrix: ";
    cin >> n;

    int sym[n*(n+1)/2];
    cout << "Enter lower triangular part row-wise: ";
    for (int i = 0; i < n*(n+1)/2; i++) cin >> sym[i];

    cout << "Matrix:" << endl;
    int k = 0;
    int index[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            index[i][j] = k++;
            index[j][i] = index[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << sym[index[i][j]] << " ";
        }
        cout << endl;
    }
    return 0;
}
