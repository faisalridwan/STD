#include "stack_ar.h"

//complete the functions and procedures below
void createStack(stack_array &S){
	S.Top = -1;
}

bool isEmpty(stack_array S){
	return S.Top = -1;
}

bool isFull(stack_array S){
	return S.Top = 100-1;
}

void pushStack(char c, stack_array &S){
	if (isFull(S)){
        cout << "Stack Penuh";
	}else{
        S.Top ++;
        S.info[S.Top]=c;
	}
}

char popStack(stack_array &S){
    char c;
	if ( isEmpty(S)){
        cout << "Stack Kosong";
	}else{
        c = S.info[S.Top];
        S.Top--;
	}
	return c
}

void palindrome(char word[]){

//  Use the previously created functions and procedures.
}
