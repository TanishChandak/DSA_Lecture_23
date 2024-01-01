#include <iostream>
using namespace std;
// Creating an function to calculate the largest row sum:
int findLargestRowSum(int arr[3][4], int row, int col)
{
    int maxi = INT32_MIN;
    int rowIndex = 0;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum = sum + arr[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The largest row sum is: " << maxi << endl;
    return rowIndex;
}
// Creating an function to check the element is present or not:
bool isPresent(int arr[3][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
// Creating an function to sum of row one-by-one:
void printSumRow(int arr[3][4], int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << "The sum of " << row << " row is: " << sum << endl;
    }
}
// Creating an function to sum of column one-by-one:
void printSumCol(int arr[3][4], int row, int col)
{
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum = sum + arr[row][col];
        }
        cout << "The sum of " << col << " column is: " << sum << endl;
    }
}
int main()
{
    // Creating 2D array:
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};  // We can create this type also:
    int arr2[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 15, 16}};  // We can create this type also:
    cout << "The 2D array of arr is: " << endl;
    // This is for the arr, Giving output:
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The 2D array of arr is: " << endl;
    // This is for the arr2, Giving output:
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // Creating the array which can take the input:
    int arr1[3][4];
    // This is for the arr1, Taking input to the user:
    cout << "Enter the number: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "The 2D array of arr1 is: " << endl;
    // This is for the array1, Giving output:
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    // Finding the key which is present or not in the arr1:
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    // Checking the the element is present or not:
    if (isPresent(arr1, target, 3, 4))
    {
        cout << "Element is Found " << endl;
    }
    else
    {
        cout << "Element is not Found " << endl;
    }
    // Calling the printSum function for print the sum of all rows:
    printSumRow(arr1, 3, 4);
    printSumCol(arr1, 3, 4);
    int ans = findLargestRowSum(arr1, 3, 4);
    cout << "The index of largest sum is: " << ans << endl;
}