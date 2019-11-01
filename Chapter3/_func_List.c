#include <stdio.h>
#include "_List_H.h"

//Return true if empty
int
Empty(List L){
    return L->Next == NULL; 
}

//Return true if P is Last in L.
//List L is unused.
int
isLast(Position P,List L){
    return P->Next == NULL;
}

//Return X's Position if found X in L
Position
Find( int X, List L ){
    Position P = L->Next;
    
    while( P!=NULL&&P->idata!=X ){
        P = P->Next;
    }

    return P;
}

//Delete first occurence of X from a list;
//Assume use of a header node
void
Delete( int X, List L ){
    Position P ;
    
    P = FindPrevious(X,L);

    if( !isLast(P,L) )
    {
        Position Tmp = P->Next;
        P ->Next = Tmp->Next;
        free(Tmp);
    }
        
}

//Insert (after legal position P)
void
Insert( int X, List L, Position P ){
    Position TmpCell = malloc( sizeof(PtrToNode) );
    if(TmpCell == NULL)
        Error("Out of Space!");
    else
    {
        TmpCell->idata = X;
        TmpCell->Next = P->Next;
        P->Next = TmpCell;
    }
}

//If X is not found , then the last Position will return .
Position
FindPrevious( int X, List L ){
    Position P = L;
    while( P->Next!=NULL&&P->Next->idata!=X )
        P = P->Next;
    return P;
}

void DeleteList( List L ){
    Position P,tmp;
    
        P = L->Next;
    
    while( P!=NULL )
    {
        tmp = P->Next;
        free(P);
        P = tmp;
    }

}