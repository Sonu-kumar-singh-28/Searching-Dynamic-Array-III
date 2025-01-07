#include<iostream>
#include<vector>
using namespace std;

int findoccuring(vector<int>arr, int size)
{
    int start =0;
    int end= size-1;

    int mid= start+(end-start)/2;

    while(start <= end)
    {
        if(start == end)
        {
            return start;
        }

        if(mid % 2 == 0)
        {
            if(arr[mid]== arr[mid+1])
            {
                start = mid+2;
            }
            else{
               end = mid;
            }
        }
        else
        {
            if(arr[mid] == arr[mid-1])
            {
                start = mid+1;
            }
            else{
                end = mid-1;
            }
             
        }
        mid = start +(end-start) /2;
    }
    return -1;
}

int main()
{
    int size;
    cout<<" Enter the size of the array :";
    cin>>size;

    vector<int>arr(size);
    for( int i=0; i<arr.size(); i++)
    {
        cout<<" Enter the element of the array :";
        cin>>arr[i];
    }

    int oddoccuring = findoccuring (arr,size);

    cout<<" The Odd Occurance index  is :" << oddoccuring << endl;
    cout<<" tHE odd occurance Value is :" << arr[oddoccuring] <<endl;

}