#include <iostream>

using namespace std;

/**
* �������� ��������� ��� �����
**/
struct stek
{
    int a;
    stek *pnext;
};

/**
* ������� ������ ����� � �������.
* @param b
*   ��������� �� ������ �����.
**/
void print(stek *b)
{
    stek *p;
    p = b;
    int i = 0;
    while(p)
    {
        cout <<"\n" << i << " -> " << p->a;
        p = p->pnext;
        i++;
    }
}
/**
* ������� ���������� �������� � ������� �����.
* @param **b
*   ��������� �� ��������� �� ������ �����.
* @param a
*   �������� ������������ ��������.
**/
void add(stek **b,int a)
{
    stek *p = new stek;
    p->a = a;
    p->pnext = (*b);
    (*b) = p;
}
/**
* ������� �������� �������� �� ������� �����.
* @param **b
*   ��������� �� ��������� �� ������ �����.

**/
void del(stek **b)
{
    (*b) = (*b)->pnext;
}
int main()
{
    int N, n;
    stek *p, *pfirst=0;
    cout << "Kolichestvo elementov -> ";
    cin >> N;
    cout << "0 -> ";
    pfirst = new stek;
    cin >> pfirst->a;
    pfirst->pnext = 0;
    p = pfirst;
    for( int i=1; i<N; i++)
    {
        p->pnext = new stek;
        p = p->pnext;
        cout << i << " -> ";
        cin >> p->a;
        p->pnext = 0;
    }
    print(pfirst);
    add(pfirst, 54);
    print(pfirst);
    return 0;
}
