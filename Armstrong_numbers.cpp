#include <iostream>
#include <cmath>
using namespace std;

int get_rank(int a)
{
    int i = 0;
    while (a >= 1)
    {
        a = a/10;
        i++;

    }
    return i;
}
int sum (int a)
{
    int summ = 0;
    int curr = a;
   // int rang = get_rank(a);
    for (int i = 1; i <= get_rank(a); i++)
    {
        summ = summ + pow(curr%10,get_rank(a));
        curr = curr/10;
    }
    return summ;
}
int main()
{
    int a,b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if(sum(i) == i)
            cout << i << "\n";
    }


    
}
