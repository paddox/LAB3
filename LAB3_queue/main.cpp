#include <iostream>
/** \mainpage
* ���������, ����������� �������.
**/
using namespace std;
/**
* �������� ��������� ��� �������
**/
struct queue
{
    int a;
    queue *pnext;
};
/**
* ������� ������ ������� � �������.
* @param b
*   ��������� �� ������ �������.
**/
void print(queue *b)
{
    queue *p;
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
* ������� ���������� �������� ������� � �����.
* @param p
*   ��������� �� ����� �������.
* @param i
*   �������� ������������ ��������.
**/
void addend(queue **p, int i)
{
    (*p)->pnext = new queue;
    (*p)->a = i;
    (*p)->pnext = NULL;
}

/**
* ������� �������� �������� ������� �� ������.
* @param b
*   ��������� �� ������ �������.
**/
void delfirst(queue **b)
{
    (*b) = (*b)->pnext;
}
/**
* ������� ��������� ������� �������� �������.
* @param b
*   ��������� �� ������ �������.
**/
int getfirst(queue *b)
{
    return b->a;
}
int main()
{
   int N, n;
    queue *p, *pfirst=0;
    cout << "Kolichestvo elementov -> ";
    cin >> N;
    cout << "0 -> ";
    pfirst = new queue;
    cin >> pfirst->a;
    pfirst->pnext = 0;
    p = pfirst;
    for( int i=1; i<N; i++)
    {
        p->pnext = new queue;
        p = p->pnext;
        cout << i << " -> ";
        cin >> p->a;
        p->pnext = 0;
    }
    print(pfirst);
    cout << "\nfirst -> " << getfirst(pfirst);
    return 0;
}
