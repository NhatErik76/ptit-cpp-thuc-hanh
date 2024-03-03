
#include <bits/stdc++.h>
using namespace std;
// how to change work into number
int check1(string s1, string s2)
{

    for (int i = 1; i < s1.size(); i++)

        if (s1[i] - s1[i - 1] != 1)
            return 0;
    for (int i = 1; i < s2.size(); i++)

        if (s2[i] - s2[i - 1] != 1)
            return 0;
    return 1;
}
int check2(string s1, string s2)
{
    s1 = s1 + s2;
    for (int i = 1; i < s1.size(); i++)
        if (s1[i] != s1[i - 1])
            return 0;
    return 1;
}
int check3(string s1, string s2)
{
    for (int i = 1; i < s1.size(); i++)
        if (s1[i] != s1[i - 1])
            return 0;
    for (int i = 1; i < s2.size(); i++)
        if (s2[i] != s2[i - 1])
            return 0;
    return 1;
}
int check4(string s1, string s2)
{
    s1 = s1 + s2;
    for (int i = 0; i < s1.size(); i++)
        if (s1[i] != '6' && s1[i] != '8')
            return 0;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string num1 = s.substr(5, 3);
        string num2 = s.substr(9, 2);
        if (check1(num1, num2) || check2(num1, num2) || check3(num1, num2) || check4(num1, num2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}