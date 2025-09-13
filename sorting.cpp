#include <iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < 6; i++)
    {
        int mini = i;
        for (int j = i; j < 6; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n;
    cout<< "Enter the size of the array: "<< endl;
    cin>> n;
    vector<int> arr(n);
    for(int i = 0 ;i < n;i++)
    {
        cout<<"enter for"<<i<<"th:"<<endl;
        cin>>arr[i];
    }
    cout << "this is the sorting algorithm:" << endl;
    cout << "selection sort:" << endl;
    selectionSort(arr);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}