#include"queue.h"

using namespace std;

int main()
{
    list Q;
    address R;
    createlist(Q);
    add(Q, 5);
    add(Q, 2);
    add(Q, 7);
    printinfo(Q);
    del(Q);
    del(Q);
    printinfo(Q);
    add(Q, 4);
    printinfo(Q);
    del(Q);
    printinfo(Q);
    add(Q, 9);
    add(Q, 4);
    printinfo(Q);
    return 0;
}
