#include<stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;
void push(int x)
{
    if(top==MAX_SIZE -1)
    {
        printf("Error  : Stack overflow\n");
    }
    A[++top]=x;
}
void pop()
{
    if(top == -1)
    {
        printf("Error : No element to pop\n");
    }
    top--;
}
/*int Top()
{
    return A[top];
}*/
void print()
{
    int i;
    printf("Stack : \n");
    for(i=0;i<=top;i++)
    {
        printf("%d",A[i]);
        printf("\n");
    }
}
int main()
{

   push(2);
    print();
    push(5);
    print();
    push(10);
    print();
    pop();
    print();
    push(12);
    print();

}
