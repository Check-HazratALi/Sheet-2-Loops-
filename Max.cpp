#include<iostream>

using namespace std;

int main()	
{
    int count,mx=0;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        int n;
        cin >> n;
        if(n>mx)
        {
            mx=max(mx,n);
        }
    }
    cout << mx << endl;
    return 0;
    
}