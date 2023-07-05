#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int count= 0;
    for (int i = 0; i < 4; i++)
    {
        std::cin >> str[i];
        if (i > 0)
        {
            if ((str[i] == '0' && str[i - 1] == '9')||(str[i] - str[i - 1] == 1 ))
                continue;
            else
                count++;
        }
    }
    if (count == 0 || (str[0] == str[1] && str[1] == str[2] && str[2] == str[3]))
    {
        std::cout << "Weak" <<std::endl;
    }
    else
    {
        std::cout << "Strong" <<std::endl;
    }
    return 0;
}
