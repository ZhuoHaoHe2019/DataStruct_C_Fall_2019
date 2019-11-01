#include <stdio.h>
#include "_Stack_H.h"

/*
    int
    isEmpty( Stack s ){
        return s->NEXT == NULL;
    }

    void
    Pop( Stack S ){

        PtrToNode tmp;

        if(isEmpty(S))
            Error("Stack is Empty!!");
        while(!isEmpty(S)){
            tmp = S->NEXT;
            S->NEXT = S->NEXT->NEXT;
            free(tmp);
        }
    }

    void 
    Push( int X, Stack S ){
        
        PtrToNode tmp = malloc( sizeof( struct Node ) );
        if( tmp == NULL )
            Error("Out of Space!!");

        tmp->idata = X;
        tmp->NEXT = S->NEXT;
        S->NEXT = tmp;
    }

    void 
    MakeEmpty( Stack S ){
        if(isEmpty( S ))
            Error("Stack is Empty!!");
        while(!isEmpty( S ))
            Pop( S ); 
    }

    int 
    Top( Stack S ){
        if(isEmpty( S ))
            Error("Stack is Empty!!");
        return S->NEXT->idata;
    }

    Stack 
    CreateStack( void ){
        Stack S;

        S = malloc( sizeof( struct Node ) );
        if(isEmpty( S ))
            Error("Out of Space!!");
        
        S->NEXT = NULL;
        MakeEmpty( S );
        return S;
    }
*/

Stack
CreatStack( int MaxInt ){

    Stack S;

    if( MaxInt<MinStackSize )
        return -1;
    
    S = malloc( sizeof( struct StackRecord ) );
    if( S == NULL)
        return -1;

    S->Array = malloc( sizeof( char ) * MaxInt );
    if( S->Array == NULL)
        return -1;
    S->Capacity = MaxInt;
    MakeEmpty( S );

}

void 
DisposeStack( Stack S ){
    if( S != NULL)
    {
        free( S->Array );
        free( S );
    }
}

int
isEmpty( Stack S ){
    return S->TopOfStack == EmptyTOS;
}

void 
MakeEmpty( Stack S ){
    S->TopOfStack = EmptyTOS;
}

void
Push( char X, Stack S ){
    if( isFull( S ) )
        return -1;
    else
        S->Array[ ++ S->TopOfStack ] = X;
}

char 
Top( Stack S ){
    if( !isEmpty( S ) )
        return S->Array[ S->TopOfStack ];
    else
    {
        return -1;
        return 0;
    }
}

char 
Pop( Stack S ){
    if( isEmpty( S ) )
        return -1; 
    else
    {
        return S->Array[ S->TopOfStack -- ];
    }
    
}