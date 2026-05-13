#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

struct stack{
	int a[SIZE];
	int top;
};

int isFull(struct stack *s)
{
	return s->top == SIZE -1;
}


	int isEmpty(struct stack *s)
	{
		return s->top == -1;
	}
	
	void push(struct stack *s, int item){
		if (!isFull(s))
		{
			s->top=s->top+1;
			s->a[s->top]=item;
			printf("%d has been inserted.\n", item);
		}else
		{
			printf("stack overflow!\n");
			
		}
	}
	
	void pop(struct stack*s){
		if(!isEmpty(s))
		{
			printf("%d has been deleted.\n", s->a[s->top]);
			s->top=s->top-1;
		}else
		{
				printf("stack underflow!\n");
		}
	}
	
	int main() {
		struct stack s;
		s.top = -1;
		
		int choice, value;
		
		while (1){
			printf("\n--- stack menu ---\n");
			
			printf("1.push\n");
			printf("2.pop\n");
			printf("3.exit\n");
			printf("Enter your choice: ");
			scanf("%d",&choice);
			
			switch (choice) {
				case 1:
					printf("Enter value to push: ");
					scanf("%d", &value);
					push(&s, value);
					break;
					case 2:
						pop(&s);
						break;
						case 3:
							printf("Exiting....\n");
							exit(0);
							default:
								printf("Invalid choice! plese try again.\n"	);
								
			}
	}
	return 0;
}

