#include <iostream>
#include <vector>
using namespace std;

void Display(vector<vector<int>> &Matrix)
{
    for (int i = 0; i < Matrix.size(); i++)
    {
        for (int j = 0; j < Matrix[i].size(); j++)
            cout << Matrix[i][j] << "\t";
        cout << endl;
    }
}

int main()
{
    int Size = 5;
    vector<vector<int>> Matrix(Size);
    for (int i = 0; i < Size; i++)
    {
        Matrix[i].resize(Size);
    }

    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++)
            Matrix[i][j] = INT_MAX;
    }

    // spiral insetion of elements into the matrix
    int row = 0, col = 0, num = 1;
    int row_start = 0, row_end = Size - 1, col_start = 0, col_end = Size - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        // right
        for (col = col_start; col <= col_end; col++)
        {
            system("cls");
            // display
            Display(Matrix);
            cout << "Enter number: " << endl;
            cin >> num;
            Matrix[row_start][col] = num;
        }
        row_start++;

        // down
        for (row = row_start; row <= row_end; row++)
        {
            system("cls");
            // display
            Display(Matrix);
            cout << "Enter number: " << endl;
            cin >> num;
            Matrix[row][col_end] = num;
        }
        col_end--;

        // left
        for (col = col_end; col >= col_start; col--)
        {
            system("cls");
            // display
            Display(Matrix);
            cout << "Enter number: " << endl;
            cin >> num;
            Matrix[row_end][col] = num;
        }
        row_end--;

        // up
        for (row = row_end; row >= row_start; row--)
        {
            system("cls");
            // display
            Display(Matrix);
            cout << "Enter number: " << endl;
            cin >> num;
            Matrix[row][col_start] = num;
        }
        col_start++;
    }
}
