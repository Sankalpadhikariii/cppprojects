#include <iostream>
using namespace std;

// create a class
class Matrix {
  // private data members
 private:
  int x[10][10];
  int row, col;

  // public functions
 public:
  // getMatrix() function to insert matrix
  void getMatrix(int r, int c) {
    // initialising a matrix type variable
    Matrix M1;

    // copying value of parameters in the data members
    row = r;
    col = c;

    // nested for loop for insertion of matrix
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        cout << "Enter x[" << i << "][" << j << "] : ";
        cin >> x[i][j];
      }
    }
  }

  // putMatrix() function to print the matrix
  void putMatrix() {
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        cout << x[i][j] << " ";
      }
      cout << "\n";
    }
  }

  // transpose() function to perform transpose the matrix
  Matrix transpose() {
    // initialising a Matrix type variable
    Matrix M;

    // copying the value of parameters in the data members
    M.row = row;
    M.col = col;

    // nested for loop to transpose the matrix
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        M.x[j][i] = x[i][j];
      }
    }

    // returning the resulted matrix
    return (M);
  }
};

int main() {
  // creating objects
  Matrix M1, M2;

  // inserting matrix using getMatrix() function
  cout << "Enter Matrix:\n" << endl;
  M1.getMatrix(2, 2);

  // printing the matrix using putMatrix() function
  cout << "\nMatrix:" << endl;
  M1.putMatrix();

  cout << endl;

  // calling transpose() function to transpose the matrix
  M2 = M1.transpose();
  cout << "\nTranspose of matrix\n" << endl;

  // printing the resulted matrix
  M2.putMatrix();

  return 0;
}
