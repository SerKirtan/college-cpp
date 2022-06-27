//This code is incomplete / doesn't work
#include<iostream>
class Matrix
{
private:
    int **arr , rows , cols;
public:
    Matrix() : rows(0) , cols(0) {}
    Matrix(int rr, int cc)
    {
        arr = new int*[rr];
        for (int i = 0; i < rr; i++)
            arr[i] = new int[cc];
    }
    void input()
    {
        std::cout << "Enter rows and columns : ";
        std::cin >> rows >> cols ;
        arr = new int*[rows];
        for (int i = 0; i < rows ; i++)
            arr[i] = new int[cols];
        std::cout << "Enter array element : ";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                std::cin >> arr[i][j] ;
    }
    void print()
    {
        for (int i = 0; i < rows ; i++)
        {
            for (int j = 0; j < cols ; j++)
                std::cout << arr[i][j] << " ";
            std::cout << "\n";
        }
        std::cout << "\n";
    }
    Matrix operator +(Matrix m)
    {
        Matrix temp(rows, cols);
        for(int i = 0; i < rows; i++)
            for(int j = 0 ; j < cols ; j++)
                temp.arr[i][j] = arr[i][j] + m.arr[i][j] ;
        return temp;
    }
};

int main()
{
    Matrix m[2];
    for(int i = 0 ; i < 2 ; i++)
    {
        std::cout << "Enter array-" << i+1 << " details\n";
        m[i].input();
    }
    Matrix add = m[0] + m[1];
    add.print();

}
