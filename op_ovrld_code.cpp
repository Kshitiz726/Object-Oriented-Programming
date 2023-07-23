#include <iostream>

class Matrix {
private:
    int matrix[2][2];

public:
    // Constructor
    Matrix() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Setter method to set values in the matrix
    void setValues() {
        std::cout << "Enter the values for the 2x2 matrix:\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                std::cin >> matrix[i][j];
            }
        }
    }

    // Getter method to retrieve values from the matrix
    int getValue(int row, int col) const {
        return matrix[row][col];
    }

     friend Matrix operator-(const Matrix& m1, const Matrix& m2);
};

// Overload the binary operator "-" for matrix multiplication outside the class
Matrix operator-(const Matrix& m1, const Matrix& m2) {
    Matrix result;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result.matrix[i][j] = m1.matrix[i][0] * m2.getValue(0, j) + m1.getValue(i, 1) * m2.getValue(1, j);
        }
    }

    return result;
}


//same thing in friend function that is , not making the operator , a member function 
//friend Matrix operator-(const Matrix& m1, const Matrix& m2);
// Matrix operator-(const Matrix& m1, const Matrix& m2) {
//     Matrix result;

//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             result.matrix[i][j] = m1.matrix[i][j] - m2.matrix[i][j];
//         }
//     }

//     return result;
// }

int main() {
    Matrix M1;
    Matrix M2;
    Matrix M3;

    // Initialize M1 with predefined values
    M1 = Matrix();
    M1.setValues();

    // Initialize M2 with user's values
    M2 = Matrix();
    M2.setValues();

    // Perform matrix subtraction and store the result in M3 using the overloaded "-" operator
    M3 = M1 - M2;

    // Display the contents of matrices M1, M2, and M3
    std::cout << "Matrix M1:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << M1.getValue(i, j) << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matrix M2:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << M2.getValue(i, j) << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Result Matrix M3:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << M3.getValue(i, j) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
