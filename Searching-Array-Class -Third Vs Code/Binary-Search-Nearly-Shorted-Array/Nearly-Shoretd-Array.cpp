#include<iostream>
#include<vector>
using namespace std;

int findsearch4eds(vector<int>arr, int size, int target)
{
    int start =0;
    int end = size-1;

    int mid = start +(end-start)/2;

    while(start <= end)
    {
        if(arr[mid] == target)
        {
            return mid;
        }
        else if( mid-1 >=0 && arr[mid-1] == target)
        {
            return mid-1;
        }
        else if(mid+1 <arr.size() && arr[mid+1] == target)
        {
            return mid+1;
        }

        if(target>arr[mid])
        {
            start = mid+2;
        }
        else{
            end = mid-2;
        }
        mid  = start +(end-start) /2;
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
        cout<<"enter the element of the array :";
        cin>>arr[i];
    }

    int target;
    cout<<" Enter the target you find :";
    cin>>target;

    int nearlysearched =findsearch4eds(arr,size ,target);

    cout<<"the number " << target << " Is  find at  " << nearlysearched  << " index"<< endl;
}
