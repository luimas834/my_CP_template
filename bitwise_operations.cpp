#include<bits/stdc++.h>
using namespace std;

/* check power of two
   check even number
   divide and multiply with two to the power n
   check,toggle,set and unset bit of any positon
*/


int multiply_with_two_powN(int x,int n)
{
    return x<<n;
}
int divide_with_two_powN(int x,int n)
{
    return x>>n;
}
bool check_even_number(int x)
{
    int k=x&1;//1 if odd ,k=0 if even
    if(k) return false;
    //AND operation with 1 will result 1 if number is odd
    else return true;
    //with even number AND will give 0 so k is 0 and return true since even
}
bool check_power_of_two(int n)
{
    int x=n & (n-1);
    /*suppose 8 then 1000,8-1=7 is 0111 and makes all 0,if
    its a power of two*/
    if(x==0) return true;
    else return false;
}
int main()
{
    int Abit =5,k=2;

    //set k th bit
    Abit |(1<<k);

    //unset the k th bit
    Abit & ~(1<<k);

    //toggle k th bit
    Abit ^ (1<<k);

    //check k th bit is set
    Abit & (1<<k);

    bool iseven =check_even_number(6);
    cout<<iseven<<"\n";

    bool pow_of_two=check_power_of_two(8);
    cout<<pow_of_two<<"\n";

    int x=multiply_with_two_powN(3,2);
    cout<<x<<"\n";

    int y=divide_with_two_powN(12,2);
    cout<<y<<"\n";
}