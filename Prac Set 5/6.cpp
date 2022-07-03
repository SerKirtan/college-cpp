#include<iostream>
class Matrix
{
private:
    int arr[10][10] , rows , cols;
public:
    Matrix()
    {
        for(int i = 0 ; i < 10 ; i++)
            for( int j = 0 ; j < 10 ; j++)
                arr[i][j] = 0;
    }
    void input (int &rr , int &cc)
    {
        rows = rr;
        cols = cc;
        for(int i = 0 ; i < rows ; i++)
            for(int j = 0 ; j < cols ; j++)
                std::cin >> arr[i][j] ;
    }
    void print ()
    {
        for(int i = 0 ; i < rows ; i++)
            for(int j = 0 ; j < cols ; j++)
                std::cout << arr[i][j] << " ";
        std::cout << "\n";
    }
    Matrix add(const Matrix &m)
    {
        Matrix temp;
        temp.rows = rows;
        temp.cols = cols;
        for(int i = 0 ; i < rows ; i++)
            for(int j = 0 ; j < cols ; j++)
                temp.arr[i][j] = arr[i][j] + m.arr[i][j] ;
        return temp;
    }
    Matrix sub(const Matrix &m)
    {
        Matrix temp;
        temp.rows = rows;
        temp.cols = cols;
        for(int i = 0 ; i < rows ; i++)
            for(int j = 0 ; j < cols ; j++)
                temp.arr[i][j] = arr[i][j] - m.arr[i][j] ;
        return temp;
    }
    Matrix mul(const Matrix &m)
    {
        Matrix temp;
        temp.rows = rows;
        temp.cols = cols;
        for(int i = 0 ; i < rows ; i++)
            for(int j = 0 ; j < cols ; j++)
                for(int k = 0 ; k < rows ; k++)
                    temp.arr[i][j] += arr[i][k] * m.arr[k][j];
        return temp;
    }
};
int main()
{
    int size , rows , cols , check , x , y;
    std::cout << "Enter how many matrix you want : ";
    std::cin >> size;
    std::cout << "Enter rows and cols of matrix : ";
    std::cin >> rows >> cols ;
    Matrix m[size];
    Matrix result;
    for ( int i = 0 ; i < size ; i++)
    {
        std::cout << "Enter Matrix-" << i+1 << " elements : ";
        m[i].input(rows , cols);
    }
    std::cout << "Which two matrix do you want to do operations with : ";
    std::cin >> x >> y;
    std::cout << "1] Addition\n2] Subtraction\n3] Multiplication\n4] Exit \n";
    while(check != 4)
    {
        std::cout << "Enter your choice : ";
        std::cin >> check;
        switch(check)
        {
        case 1: result = m[x-1].add(m[y-1]);
            result.print();
            break;
        case 2: result = m[x-1].sub(m[y-1]);
            result.print();
            break;
        case 3: result = m[x-1].mul(m[y-1]);
            result.print();
            break;
        case 4: break;
        default:
            std::cout << "Invalid Input";
        }
    }
}