

//Sorted Array

#include<iostream>
using namespace std;

void read(int &, int[]);
void display(int, int[]);
void sort(int, int[]);
void swap(int &, int &);

int main()
{
    int s, arr2[10];

    read(s, arr2);

    cout << "\nThe unsorted array is:" << endl;
    display(s, arr2);

    sort(s, arr2);

    cout << "\nThe sorted array is:" << endl;
    display(s, arr2);

    return 0;
}

void read(int &m, int arr[])
{
    cout << "Enter size of array: " << endl;
    cin >> m;

    cout << "Enter array: ";
    for(int i=0; i<m; i++)
        cin >> arr[i];
}

void display(int m, int arr[])
{
    for(int i=0; i<m; i++)
        cout << arr[i] << " ";
}

void sort(int m, int arr[])
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<(m-1); j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
