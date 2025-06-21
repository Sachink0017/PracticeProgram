#include <bits/stdc++.h>
using namespace std;

void pattern1(int rows)
{
    //square matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int rows)
{
    //right angled triangle
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int rows)
{
    //inverted right-angle triangle
    for(int i=0;i<rows;i++)
    {
        for(int j=i;j<rows;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern4(int rows)
{
    //pyramid
    for(int i=0;i<rows;i++)
    {
        for(int j=i+1;j<rows;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int j=i+1;j<rows;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int rows)
{
    //inverted pyramid
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<rows-i;j++)
        {
            cout<<"* ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout << "enter number of rows";
    cin >> n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    return 0;
}