#include<stdio.h>
#include<stdlib.h>
int i,top=-1,stack[5],ele;
void push()
  {
      if(top==4)
      printf("Stack is overflow");
      else
      {
          top++;
          printf("enter the number");
          scanf("%d",&ele);
          stack[top]=ele;
      }
  }
  void pop()
  {
      if(top==-1)
      printf("stack is underflow");
      else
      ele=stack[top];
      printf("deleted element is %d\n",ele);
      top--;
      }
  
  void display()
  {
      if(top==-1)
      printf("stack is empty");
      else 
      for(i=top;i>=0;i--)
      printf("%d\n",stack[i]);
  }
  int main()
  {
      int ch;
      while(1)
      {
          printf("1.push 2.pop 3.display \n");
          printf("enter your choice");
          scanf("%d",&ch);
          switch(ch)
          {
              case 1:push();
              break;
              case 2:pop();
              break;
              case 3:display();
              break;
              default:printf("invalid");
              break;
          }
          
      }
      return 0;
  }
