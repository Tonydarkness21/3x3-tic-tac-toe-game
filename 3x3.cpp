#include <iostream>
#include <cmath>
using namespace std;

int checkngang(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int demX = 0;
        int demO = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 1)
            {
                demX = demX + 1;
                if (demX == 3)
                {
                    return 1;
                }
            }
            if (a[i][j] == 0)
            {
                demO = demO + 1;
                if (demO == 3)
                {
                    return 3;
                }
            }
        }
    }
    return 0;
}

int checkdoc(int a[3][3])
{
    for (int j = 0; j < 3; j++)
    {
        int demX = 0;
        int demO = 0;
        for (int i = 0; i < 3; i++)
        {
            if (a[i][j] == 1)
            {
                demX = demX + 1;
                if (demX == 3)
                {
                    return 1;
                }
            }
            if (a[i][j] == 0)
            {
                demO = demO + 1;
                if (demO == 3)
                {
                    return 3;
                }
            }
        }
    }
    return 0;
}

int checkcheotrai(int a[3][3])
{
    int demX = 0;
    int demO = 0;
    for (int j = 0; j < 3; j++)
    {
        int i = j;
        if (a[i][j] == 1)
        {
            demX = demX + 1;
            if (demX == 3)
            {
                return 1;
            }
        }
        if (a[i][j] == 0)
        {
            demO = demO + 1;
            if (demO == 3)
            {
                return 3;
            }
        }
    }
    return 0;
}

int checkcheophai(int a[3][3])
{
    int demX = 0;
    int demO = 0;
    for (int j = 2; j >= 0; j--)
    {
        int i = j;
        if (a[i][j] == 1)
            demX = demX + 1;
        if (a[i][j] == 0)
            demO = demO + 1;
        if (demX == 3)
        {
            return 1;
        }
        if (demO == 3)
        {
            return 3;
        }
    }
    return 0;
}

void Nhap(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    }
}

void Xuat(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int a[3][3];
    cout << "Nhap bang caro: ";
    Nhap(a);
    checkngang(a);
    Xuat(a);
    checkdoc(a);
    checkcheophai(a);
    checkcheotrai(a);
    if (checkdoc(a) == 1 || checkngang(a) == 1 || checkcheophai(a) == 1 || checkcheotrai(a) == 1)
        cout << "X chien thang";
    if (checkdoc(a) == 3 || checkngang(a) == 3 || checkcheophai(a) == 3 || checkcheotrai(a) == 3)
        cout << "O chien thang";
    if (checkdoc(a) == 0 && checkngang(a) == 0 && checkcheophai(a) == 0 && checkcheotrai(a) == 0)
        cout << "Ca hai ben hoa";
    return 0;
}