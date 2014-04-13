#include <iostream>

using namespace std;
/**
* �������� ��������� ��� ������
**/
struct spisok
{
    int a;
    spisok *pnext;
};
/**
* ������� ������ ������ � �������.
* @param b
*   ��������� �� ������ ������.
**/
void print(spisok *b)
{
    spisok *p;
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
* ������� ���������� �������� ������ � ������� i.
* @param b
*   ��������� �� ������ ������.
* @param add
*   ��������� �� ����������� ������ ���������.
* @param i
*   ������ ������ �������� ������.
**/
void add(spisok *b,spisok *add, int i)
{
    spisok *p;
    p = b;
    for(int j=0;j<i;j++)
        p = p->pnext;
    spisok *p1;
    p1 = p->pnext;
    p->pnext = add;
    add->pnext = p1;
}
/**
* �������, ��������� ������� �� ������� i.
* @param b
*   ��������� �� ������ ������.
* @param i
*   ������ ������ �������� ������.
**/
void delet(spisok *b, int i)
{
    spisok *p;
    p = b;
    for(int j=0;j<i;j++)
        p = p->pnext;
    spisok *p1;
    p1 = p->pnext;
    p = p1->pnext;
    delete p1;
}
/**
* ������� ��������� �������� � ������� i.
**/
void get(spisok *b, int i)
{
    spisok *p;
    p = b;
    for(int j=0;j<i;j++)
        p = p->pnext;
    cout << "\n" << i << " -> " << p->a;
}
int main()
{
    int N, n;
    spisok *p, *pfirst=0;
    cout << "Kolichestvo elementov -> ";
    cin >> N;
    cout << "0 -> ";
    pfirst = new spisok;
    cin >> pfirst->a;
    pfirst->pnext = 0;
    p = pfirst;
    for( int i=1; i<N; i++)
    {
        p->pnext = new spisok;
        p = p->pnext;
        cout << i << " -> ";
        cin >> p->a;
        p->pnext = 0;
    }
    print(pfirst);
    return 0;
}
