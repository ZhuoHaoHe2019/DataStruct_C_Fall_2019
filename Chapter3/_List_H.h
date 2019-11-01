#ifndef _List_H

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;


int isEmpty( List L );
int isLast( Position P, List L );
Position Find( int X, List L );
void Delete( int X,List L );
Position FindPrevious( int X, List L );
void insert ( int X, List L );
void DeleteList( List L );

#endif 


struct Node
{
    /* data */
    int idata;
    Position Next;
};
