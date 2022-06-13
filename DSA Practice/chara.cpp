#include <iostream>
using namespace std;

int main()
{
    char ch;
    ch = cin.get();
    int alpha = 0, digi = 0, space = 0;

    while (ch != '\n')
    {
        if (ch >= '0' && ch <= '9')
        {
            digi++;
        }
        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            alpha++;
        }
        else if (ch == ' ' && ch == '\t')
        {
            space++;
        }
        ch = cin.get();
    }
    cout<<"Total Digits : " << digi<<endl;
    cout<<"Total Space : " <<space<<endl;
    cout<<"Total aplhabets : " <<alpha<<endl;
    return 0;
}