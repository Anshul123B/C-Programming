#include <stdio.h>
int s[50],i,j,choice = 0,n,top = -1;
void push();
void pop();
void show();
void main(){
    printf("Enter the number of elements in the stack: ");
    scanf("%d", & n);
    while(choice != 4){
        printf(" 1.push \n 2.pop\n 3.show\n 4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", & choice);
    }
    switch (choice){
   case 1:
    push();
    break; 
   
   case 2:
    pop();
       break; 
       
   case 3:
    show();
     break; 
     
   case 4:
    printf("Exit");
     break;
   
   default:
    printf("Invalid choice");
    }
    }
   
   
   void push()
   {
       int val;
       if(top == n-1)
       {printf("Stack is overflow");
   }
   else{
       printf("Enter the element");
       scanf("%d", & val);
       top = top +1;
       s[top] = val;
   }
}

void pop(){
    int x;
    if(top == n-1){
        printf("Stack is empty");
    }
    else{
        x=s[top];
        top = top-1;
        printf("%d",x);
    }
    }
    void show(){
        for(i=top; i>=0; i--){
            printf("%d",s[i]);
        }
        if(top == -1){
            printf("Stack is empty");
        }
    }

