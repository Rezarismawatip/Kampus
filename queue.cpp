#include"queue.h"

void createlist(list &Q){
    head(Q) = NULL;
    tail(Q) = NULL;
}
void add(list &Q, infotype X){
    address R;
    R = new elmlist;
    info(R) = X;
    next(R) = NULL;
    if(head(Q) == NULL && tail(Q) == NULL){
        head(Q) = R;
        tail(Q) = R;
    } else {
        next(tail(Q)) = R;
        tail(Q) = R;
    }
}
void del(list &Q){
    address R;
    if(head(Q) == NULL && tail(Q) == NULL){
        head(Q) = NULL;
        tail(Q) = NULL;
    } else {
        R = head(Q);
        head(Q) = next(R);
        next(R) = NULL;
    }
}
void printinfo(list Q){
    address R;
    R = head(Q);
    while(R != NULL){
        cout<<info(R)<<"  ";
        R = next(R);
    }
    cout<<endl;
}
