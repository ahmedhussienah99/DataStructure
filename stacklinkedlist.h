#ifndef STACKLINKEDLIST_H_INCLUDED
#define STACKLINKEDLIST_H_INCLUDED


typedef int elemententry;


typedef struct Node{

elemententry e;
Node *next; // by name struct
}node;

typedef struct Stack{
node *top;
int sizes;

}stack1

void create(stack1 *s);
void push(elemententry e,stack1 *s);
void pop(elemententry *e,stack1 *s);
bool isempty(stack1 *s);
bool isfull(stack1 *s);
void reteriver(stack1 *s,void(*pf)(elemententry e));
void clearr(stack1 *s);
void Copy(StackType *s1 , StackType *s2);
int Size(stack1 *s);























#endif // STACKLINKEDLIST_H_INCLUDED
