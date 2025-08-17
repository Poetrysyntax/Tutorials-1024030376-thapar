#include <iostream>
using namespace std;

int main() {
    int r1, c1, n1, r2, c2, n2;
    cout << "Enter rows cols of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter non-zero elements of first matrix: ";
    cin >> n1;

    int a[100][3];
    for (int i = 0; i < n1; i++) cin >> a[i][0] >> a[i][1] >> a[i][2];
    cout << "Enter rows cols of second matrix: ";
    cin >> r2 >> c2;
    cout << "Enter non-zero elements of second matrix: ";
    cin >> n2;

    int b[100][3];
    for (int i = 0; i < n2; i++) cin >> b[i][0] >> b[i][1] >> b[i][2];
    if (c1 != r2) {
        cout << "Multiplication not possible" << endl;
        return 0;
    }
    int result[200][3];
    int k = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i][1] == b[j][0]) {
                int row = a[i][0];
                int col = b[j][1];
                int val = a[i][2] * b[j][2];
                bool found = false;
                for (int x = 0; x < k; x++) {
                    if (result[x][0] == row && result[x][1] == col) {
                        result[x][2] += val;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    result[k][0] = row;
                    result[k][1] = col;
                    result[k][2] = val;
                    k++;
                }
            }
        }
    }
    cout << "Result of multiplication:" << endl;
    for (int i = 0; i < k; i++) {
        cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl;
    
    return 0;
}
