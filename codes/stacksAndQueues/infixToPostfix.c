#include<stdio.h>
#define MAX 101

char stack[MAX];

int top=-1;

void push(char item)
{
	if(top==MAX-1)
	{
		printf("OPERATOR STACK OVERFLOWS!!!!\n");
		return;
	}
	stack[++top]=item;
}

char pop()
{
	if(top==-1)
	{
		printf("OPERATOR STACK UNDERFLOWS!!!!\n");
		return -1;
	}
	return stack[top--];
}
int precedence(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 

int isOperand(char ch)
{
	if((ch>='a' && ch<='z'))
		return 1;
	else return 0;

}

int isStackEmpty()
{
	if(top==-1)
		return 1;
	else return 0;
}

char displayTopOfStack()
{
	if(top!=-1)
		return stack[top];
	else return '\0';
}

void infixToPostfix(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(isOperand(str[i]))
			printf("%c",str[i] );
		else if(str[i]==')')
		{
			while(!isStackEmpty() && displayTopOfStack()!='(')
			{
				printf("%c",pop() );
			}
			pop();
		}
		else
		{
			while(str[i]!='(' && !isStackEmpty() && (precedence(displayTopOfStack())>=precedence(str[i])))
			{
				printf("%c",pop() );
			}
			push(str[i]);
		}

		i++;
	}
	while(!isStackEmpty())
	{
		printf("%c",pop() );
	}

}

int main(){
	char str[MAX];
	scanf("%s",str);
	infixToPostfix(str);
	return 0;
}