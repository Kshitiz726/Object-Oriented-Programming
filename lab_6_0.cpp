#include <iostream>
using namespace std;
class Matrix{
    private:
     int matrix[2][2];
     public:
       //Constructor
       Matrix(){
        for(int i = 0; i < 2 ; i++)
        {
            for(int j = 0 ; j < 2; j++){
                matrix[i][j] = 0;
            }
        }
       }

       //settter for matrix
       void setValue(){
        cout << "Enter the value of 2x2 matrix: ";
          for(int i = 0; i < 2; i++){
            for(int j = 0; j< 2; j++)
            {
                cin >> matrix[i][j];
            }
          }
       }
       int getValue(int which_row, int which_column){
        return matrix[which_row][which_column];
       }

       //operator overloading as member function
       Matrix operator-(const Matrix &other){
        Matrix result;
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                result.matrix[i][j] =   matrix[i][0] * other.matrix[0][j] +  matrix[i][1] *  other.matrix[1][j] ;
            }
        }
        return result;
       }


};
int main(){
    Matrix M1;
    Matrix M2;
    Matrix M3;

    M1 = Matrix();
    M1.setValue();

     M2 = Matrix();
    M2.setValue();


//use the operator that we overloaded earlier
    M3 = M1 - M2;

    //print M1
    cout << "Matrix M1:\n";
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
           cout << M1.getValue(i,j) << " ";
        }
        cout << endl;
    }
    //print M2
    cout << "Matrix M2:\n";
     for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << M2.getValue(i,j) << " ";
        }
         cout << endl;
    }
    //print M3
    cout << "Result Matrix M3:\n";
     for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
             cout << M3.getValue(i,j) << " ";
        }
        cout << endl;
    }


}