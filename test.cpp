#include<bits/stdc++.h>
using namespace std;
void test()
{
    static int i = 0;
    if(i==10) return;
    i++;
    cout << i <<" ";
    test();
}
int main()
{
    test();
}