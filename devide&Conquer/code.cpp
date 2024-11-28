#include <iostream>
using namespace std;

int main()
{

    int arr[3] = {2, 4, 5};
    int brr[5] = {6, 8, 9, 11, 13};
    int arrLength = 3;
    int brrLength = 5;
    int crr[8];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < arrLength)
    {
        if (arr[i] < brr[j])
        {
            crr[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            crr[k] = brr[j];
            j++;
            k++;
        }
    }

    while (i < arrLength)
    {
        crr[k] = arr[i];
        i++;
        k++;
    }

    while (j < brrLength)
    {
        crr[k] = brr[j];
        k++;
        j++;
    }

    for (int i = 0; i < 8; i++)
    {
        cout << crr[i] << " ";
    }
}