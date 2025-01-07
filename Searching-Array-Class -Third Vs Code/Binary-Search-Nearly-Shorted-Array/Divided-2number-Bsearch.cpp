// // positive number 
// #include<iostream>
// using namespace std;

// int finddivide(int divided, int divisor)
// {
//     int ans =-0;
//     int start =0;
//     int end= divided;

//     int mid= start +(end-start) /2;

//     while(start <= end)
//     {
//         if(mid*divisor == divided)
//         {
//             return mid;
//         }
//         else if( mid*divisor> divided)
//         {
//             end = mid-1;
//         }
//         else
//         {
//             ans = mid;
//             start = mid+1;
//         }

//         mid = start +(end-start)/2;
//     }
//     return ans;
// }

// int main()
// {
//     int divided;
//     cout<<" Enter the number  to be divided :";
//     cin>>divided;

//     int divisor;
//     cout<<"Enter the number to be divisor:";
//     cin>>divisor;

//     int divide = finddivide(divided, divisor);

//     cout<< " Ans Is : " << divide  << endl;
// }





// negative number 
#include<iostream>
using namespace std;

int finddivide(int divided, int divisor)
{
    int ans = 0;
    int start =0;
    int end= abs(divided);

    int mid= start +(end-start) /2;

    while(start <= end)
    {
        if(abs(mid*divisor) == abs(divided))
        {
            ans = mid;
            break;
        }
        else if( abs(mid*divisor)> abs(divided))
        {
            end = mid-1;
        }
        else
        {
            ans = mid;
            start = mid+1;
        }

        mid = start +(end-start)/2;
    }
    if((divisor<0 && divided<0) || (divisor>0 && divided>0))
    return ans;
    else{
        return -ans;
    }
}

int main()
{
    int divided;
    cout<<" Enter the number  to be divided :";
    cin>>divided;

    int divisor;
    cout<<"Enter the number to be divisor:";
    cin>>divisor;

    int divide = finddivide(divided, divisor);

    cout<< " Ans Is : " << divide  << endl;

    int precision;
    cout<<" Enter the number of the digits of precision :";
    cin>>precision;

    double step = 0.1;
    double finalans = divide;

    for( int i=0; i<precision; i++)
    {
        for( double j=0; j<divisor; j= j+step)
        {
            finalans = j;
        }
        step = step/10;
    }

    cout<<"The Final Ans Is : " << finalans << endl;

}