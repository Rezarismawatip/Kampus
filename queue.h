#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include<iostream>
#define head(Q) Q.head
#define tail(Q) Q.tail
#define info(Q) Q->info
#define next(Q) Q->next

using namespace std;

typedef int infotype;
typedef struct elmlist *address;
struct elmlist{
    infotype info;
    address next;
};
struct list{
    address head;
    address tail;
};

void createlist(list &Q);
void add(list &Q, infotype X);
void del(list &Q);
void printinfo(list Q);

#endif // QUEUE_H_INCLUDED
