#include "stackarray.h"


void create(stack1 *s){

s->top=0;
}
void push(ElementType *e,stack1 *s){

s->arr[s->top]=*e;
s->top++;

}

void pop(ElementType *e,stack1 *s){
s->top--;
*e=s->arr[s->top];
}
int sizestack(Stacktype *s){
return s->top;
}
bool isempty(Stacktype *s){
return (s->top==0);
}

bool isfull(Stacktype *s){
return (s->top==maxstack);
}
void reterive(Stacktype *s,void(*pf)(elmenttype e)){
for(int i=0;i<maxstack;i++){

    (*pf)(s->arr[i]);
}

}
