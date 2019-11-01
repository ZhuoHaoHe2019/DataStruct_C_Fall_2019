/*

    struct Node;
    typedef struct Node *PtrToNode; 
    typedef PtrToNode Stack;

    int isEmpty();
    void Pop( Stack S );
    void Push( int X, Stack S );
    void MakeEmpty( Stack S );
    int Top( Stack S );

    #endif

    struct Node{
        int idata;
        PtrToNode NEXT;
    };
    */

#ifndef _Stack_H
    
    struct StackRecord;
    typedef struct StackRecord *Stack;

    Stack CreateStack( int MaxInt );
    int isEmpty( Stack S );
    int isFull( Stack S );
    void MakeEmpty( Stack S );
    void DisposeStack( Stack S );
    void Push( char X, Stack S );
    char Top( Stack S );
    char Pop( Stack S );

#endif 


#define EmptyTOS -1
#define MinStackSize 5

struct StackRecord
{
    int Capacity;
    int TopOfStack;
    char *Array;
};