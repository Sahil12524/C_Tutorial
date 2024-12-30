/*
    2D arrays examples
*/

#include <stdio.h>
int main()
{
    int numbers[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows, columns;
    rows = sizeof(numbers) / sizeof(numbers[0]);
    columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\n", numbers[i][j]);
        }
    }
    return 0;
}

/*
    calculation of rows and columns are as follows:
    int = 4 bytes.

    --Rows--
    if numbers is an array then add all the elements as 4 bytes so here its 4 * 9 = 36 bytes.
    now divide the 36 bytes from the total bytes of row 0 that is 3 * 4 = 12 bytes.
    which will be 36 / 12 = 3 this means that our rows are total 3.

    --Columns--
    to find columns we first divide row 0 which is of 3 * 4 = 12 bytes, by the row 0 index 0 which is 4 bytes.
    so here we will do 12 / 4 = 3.

    so we got:
    3 rows and
    3 columns
*/