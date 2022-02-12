#ifndef STACKARRAY_H_INCLUDED
#define STACKARRAY_H_INCLUDED

#define maxstack 10
typedef int ElementType;

typedef struct Stack{

    int *top;
   // int sizes; top is size
    ElementType arr[maxstack];

}stack1;

void create(stack1 *s);
void push(ElementType *e,stack1 *s);
void pop(ElementType *e,stack1 *s);
int sizestack(Stacktype *s);
bool isempty(Stacktype *s);
bool isfull(Stacktype *s);
void reterive(Stacktype *s,void(*pf)(elmenttype e));



#endif // STACKARRAY_H_INCLUDED
