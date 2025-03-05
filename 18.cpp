#include <iostream>
using namespace std;

class Matrix {
    int rows, cols;
    int mat[10][10];
public:
    Matrix(int r, int c) : rows(r), cols(c) {}

    void getValue() {
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                cin >> mat[i][j];
    }

    void display() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    Matrix operator+(Matrix const& m) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
        return result;
    }

    Matrix operator-(Matrix const& m) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result.mat[i][j] = mat[i][j] - m.mat[i][j];
        return result;
    }

    Matrix operator*(Matrix const& m) {
        Matrix result(rows, m.cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < m.cols; ++j) {
                result.mat[i][j] = 0;
                for (int k = 0; k < cols; ++k)
                    result.mat[i][j] += mat[i][k] * m.mat[k][j];
            }
        return result;
    }
};

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    Matrix m1(r, c), m2(r, c), result(r, c);
    m1.getValue();
    m2.getValue();

    int choice;
    cout << "Choose operation: 1.Addition 2.Subtraction 3.Multiplication: ";
    cin >> choice;
    switch (choice) {
        case 1: result = m1 + m2; break;
        case 2: result = m1 - m2; break;
        case 3: result = m1 * m2; break;
        default: cout << "Invalid choice"; return 1;
    }

    result.display();
    return 0;
}
