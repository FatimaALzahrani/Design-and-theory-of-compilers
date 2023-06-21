#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
//#include <cstddef>

struct stack{//struct تسمح لي اعرف متغيرات باسماء من عندي
    int no;
    struct stack *next;
}
*start=nullptr;
typedef struct stack st;//typedef //تخلينا نسدعي struct stack بس بالاسم الجديد وهو st
void push();
int pop();
void display();
int main(){
    char ch;
    int choice, item;
    do {
//        clrscr();
        printf("\n1:push");
        printf("\n2:pop");
        printf("\n3:display");
        printf("\n enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:push();
                break;
            case 2:item=pop();
                printf("the delete element in %d",item);
                break;
            case 3:display();
                break;
            default:printf("\nwrong choice! ");
        };
        printf("\n do you want to continue(y/n) : ");
        fflush(stdin);
        scanf("%c",&ch);
    }
    while(ch=='y'||ch=='Y');//لو قال واي يعني باقي يبغا يكمل فاقعد دور
}
void push(){
    st *node;
    node=(st*)malloc(sizeof(st));//حجز مكان للنود اللي انشأتها
    printf("\n enter the number to be insert : ");
    scanf("%d",&node->no);
    node->next=start;//ستارت بوينتر يشير لاعلى شي بالاستاك //ربط بوينتر النكست بالاستارت
    start=node;
}
int pop(){
    st *temp;
    temp=start;
    if(start==nullptr){
    printf("stack is already empty");
    getchar();
    exit(1);
}
else{
    start=start->next;
    free(temp);
}
return(temp->no);
}
void display(){
    st*temp;
    temp=start;
    while(temp->next!=nullptr){
        printf("\nno= %d",temp->no);
        temp=temp->next;
    }
    printf("\nno= %d",temp->no);
}