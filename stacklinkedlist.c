

void create(stack1 *s){

s->top='\0';
s-sizes=0;
}
void push(elemententry e,stack1 *s){ // why e not pointer??

node *pe=(node*)malloc(sizeof(node));
s->sizes++;
pe->elemententry=e;
s->top=pe;
pe->next=s->top;
}

void pop(elemententry *e,stack1 *s){ //return void beacuse i will return by reference
    s->sizes--;
    node *pe=s->top;
    *e=s->top->elemententry;
    s->top=s->top->next;
    free(pe);

}

bool isempty(stack1 *s){
return(s->sizes==0);
}
bool isfull(stack1 *s){
return 0;
}
void reteriver(stack1 *s,void(*pf)(elemententry e)){
     node *pe=s->top;
for(int i=0;i<s->sizes;i++){
    (*pf)(pe->elemententry);
    pe=pe->next;

}
}



void clearr(stack1 *s){
  node *pe=s->top;
  node *pf=s->top;

for(int i=0;i<s->sizes;i++){
    pf=pf->next;

   free(pe);    // when do that pe will remove and next instruction will not do thing i want to save pe in another pointer
    pe=pf;


}
}
void Copy(StackType *s1 , StackType *s2){   //will copy stack s2 in s1 and maybe can do by create and push and pop function

    node *pe=s1->top;
    node *pf=s2->top;
for(i=0;i<s->sizes;i++){

pe->elemententry=pf->elemententry;
pe=pe->next;
pf=pf->next;
}

}


int Size(stack1 *s){
return s-sizes;
}




