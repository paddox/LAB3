#include <iostream>
/** \mainpage
* Программа, реализующая очередь.
**/
using namespace std;
/**
* Создание структуры для очереди
**/
struct queue
{
    int a;
    queue *pnext;
};
/**
* Функция печати очереди в консоль.
* @param b
*   Указатель на начало очереди.
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
* Функция добавления элемента очереди в конец.
* @param p
*   Указатель на конец очереди.
* @param i
*   Значение добавляемого элемента.
**/
void addend(queue **p, int i)
{
    (*p)->pnext = new queue;
    (*p)->a = i;
    (*p)->pnext = NULL;
}

/**
* Функция удаления элемента очереди из начала.
* @param b
*   Указатель на начало очереди.
**/
void delfirst(queue **b)
{
    (*b) = (*b)->pnext;
}
/**
* Функция получения первого элемента очереди.
* @param b
*   Указатель на начало очереди.
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
