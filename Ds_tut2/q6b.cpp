#include <iostream>
using namespace std;
int main() {
    int r, c, n1, n2;
    cout << "Enter rows cols of matrix: ";
    cin >> r >> c;
    cout << "Enter non-zero elements of first matrix: ";
    cin >> n1;
    int a[100][3];
    for (int i = 0; i < n1; i++) cin >> a[i][0] >> a[i][1] >> a[i][2];
    cout << "Enter non-zero elements of second matrix: ";
    cin >> n2;
    int b[100][3];
    for (int i = 0; i < n2; i++) cin >> b[i][0] >> b[i][1] >> b[i][2];

    int i = 0, j = 0, k = 0;
    int sum[200][3];
    while (i < n1 && j < n2) {
        if (a[i][0] < b[j][0] || (a[i][0] == b[j][0] && a[i][1] < b[j][1])) {
            sum[k][0] = a[i][0]; sum[k][1] = a[i][1]; sum[k][2] = a[i][2];
            i++; k++;
        } else if (b[j][0] < a[i][0] || (a[i][0] == b[j][0] && b[j][1] < a[i][1])) {
            sum[k][0] = b[j][0]; sum[k][1] = b[j][1]; sum[k][2] = b[j][2];
            j++; k++;
        } else {
            sum[k][0] = a[i][0]; sum[k][1] = a[i][1];
            sum[k][2] = a[i][2] + b[j][2];
            i++; j++; k++;
        }
    }
    while (i < n1) {
        sum[k][0] = a[i][0]; sum[k][1] = a[i][1]; sum[k][2] = a[i][2];
        i++; k++;
    }
    while (j < n2) {
        sum[k][0] = b[j][0]; sum[k][1] = b[j][1]; sum[k][2] = b[j][2];
        j++; k++;
    }

    cout << "Result of addition:" << endl;
    for (int x = 0; x < k; x++) {
        cout << sum[x][0] << " " << sum[x][1] << " " << sum[x][2] << endl;
    }

    return 0;
}
