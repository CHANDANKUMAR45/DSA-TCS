#include <bits/stdc++.h>
using namespace std;

int main()
{

    int rows, cols;

    cin >> rows>>cols;

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }

    int maxRow = -1;
    int maxCount = 0;

    for (int i = 0; i < rows; i++)
    {
        int count = 0;

        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 1)
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxRow = i;
        }
    }
    if (maxRow != -1)
        maxRow++;

    cout << "Answer : "<<maxRow<<endl;;
}