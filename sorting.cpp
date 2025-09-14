#include <iostream>
#include<vector>

using namespace std;

//SELECTION SORT 
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

//MERGE SORT
void merge(vector<int> &arr,int low,int high,int mid)
{
    
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while (left  <= mid && right<= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }

}
void mergeSort(vector<int> &arr, int low,int high)
{
    if(low >= high) 
    {
        return;
    }

    int mid=low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,high,mid);
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
    // selectionSort(arr);

    mergeSort(arr,0,n-1);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}