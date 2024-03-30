#include<iostream>

using namespace std;

int main()	
{
    int count,even=0,odd=0,pos=0,neg=0;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        int x;
        cin >> x;
        if(x%2==0)
        {
            even++;
        }
        if (x%2==1)
        {
            odd++;
        }
        if (x>0)
        {
            pos++;
        }
        if (x<0)
        {
            neg++;
        }
        cout << x << " ";
        
        
    }
    cout << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    return 0;
    
}