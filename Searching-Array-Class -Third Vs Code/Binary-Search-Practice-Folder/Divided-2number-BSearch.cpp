#include<iostream>
using namespace std;

int finddivisor(int div, int d)
{
    int start =0; 
    int end = div;

    int ans =0;

    int mid = start +(end-start) /2;

    while(start <= end)
    {
        if(mid*d== div)
        {
            return mid;
        }
        else if(mid*d >div)
        {
            end = mid-1;
        }
        else
        {
            ans = mid;
            start = mid+1;
        }

        mid= start +(end-start)/2;
    }
    return ans;
}

int main()
{
    int div;

    cout<<" Enter the number to de divided:";
    cin>>div;

    int d;
    cout<<" Enter the number to be divisor:";
    cin>>d;

    int dividend = finddivisor(div, d);

    cout<<" Ans Of " << div << " is: " << dividend << endl;
}