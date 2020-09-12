/*
    Solis, Jose

    September 1, 2020

    CS A250
    Lab 1: A1 Array Duplicates
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H 

// Definition function deleteDuplicates
void deleteDuplicates(int a[], int& numOfElements)
{
for (int i = 0; i < numOfElements; i++)
{
    for (int j = i + 1; j < numOfElements; j++)
    {
        if (a[i] == a[j])
        {
            for (int k = j; k < numOfElements; k++)
            {
                a[k] = a[k + 1];
                numOfElements--;
            }
            j--;
            }
        }
    }
}

// Definition function printArray
void printArray(const int a[], const int numOfElements)
{
    for (int i = 0; i < numOfElements; i++)
        cout << a[i] << " ";
}

#endif /* ifndef FUNCTIONS_H */
