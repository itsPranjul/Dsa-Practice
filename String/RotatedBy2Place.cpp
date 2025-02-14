#include <iostream>
using namespace std;

string rotateAnticlockwise(string str)
{
    char c = str[0];
    int index = 1;

    while (index < str.size())
    {
        str[index - 1] = str[index];
        index++;
    }
    str[str.size() - 1] = c;
}

string rotateClockwise(string str)
{
    char c = str[str.size() - 1];
    int index = str.size() - 2;

    while (index >= 0)
    {
        str[index - 1] = str[index];
        index--;
    }
    str[0] = c;
}

bool checkString(string s1, string s2)
{
    string clockwise = s1;
    string anticlockwise = s2;

    rotateClockwise(clockwise);
    rotateClockwise(clockwise);

    if (clockwise == s2)
        return 1;

    rotateAnticlockwise(anticlockwise);
    rotateAnticlockwise(anticlockwise);

    if (anticlockwise == s2)
        return 1;

    return 0;
}

int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    cout << checkString(s1, s2);
}