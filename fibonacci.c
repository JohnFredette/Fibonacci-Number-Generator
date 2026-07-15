#include <stdio.h>
#include <stdlib.h>

int *fibonacci_generator(int index);
void Specific_Index(void);
void Up_to_Index(void);
void All_Possible(void);

int main(void){
	int choice;
	do{
		printf("0. Exit\n");
		printf("1. Specific Index\n");
		printf("2. Up to an Index\n");
		printf("3. All possible with type int\n");
		scanf("%d", &choice);
		switch(choice){
			case 0:
				break;
			case 1:
				Specific_Index();
				break;
			case 2:
				Up_to_Index();
				break;
			case 3:
				All_Possible();
				break;
			default:
				printf("Not a valid choice\n\n");
				break;
		}
	}while(choice != 0);
	return 0;
}

int *fibonacci_generator(int index){
	int *fibonacci_sequence = malloc(index * sizeof(int));
	if(fibonacci_sequence == NULL){
		printf("Error in memeory allocation\n");
		return NULL;
	}
	if(index != 1 && index != 2){
		fibonacci_sequence[0] = 0;
		fibonacci_sequence[1] = 1;
		for(int i = 2; i < index; i++){
			fibonacci_sequence[i] = fibonacci_sequence[i-1] + fibonacci_sequence[i-2];
		}
	}
	else if(index == 2){
		fibonacci_sequence[0] = 0;
		fibonacci_sequence[1] = 1;
	}
	else{
		fibonacci_sequence[0] = 0;
	}
	return fibonacci_sequence;
}

void Specific_Index(void){
	int index;
	printf("Which index of the Fibbonacci sequence do you want? ");
	scanf("%d", &index);
	if(index > 47){
		printf("Too large\n\n");
	}
	else if(index <= 0){
		printf("Too small\n\n");
	}
	else{
		int *fibonacci_sequence = fibonacci_generator(index);
		printf("%d\n\n", fibonacci_sequence[index - 1]);
		free(fibonacci_sequence);
	}
}

void Up_to_Index(void){
	int index;
	printf("Up to what index of the Fibbonacci sequence do you want? ");
	scanf("%d", &index);
	if(index > 47){
		printf("Too large\n\n");
	}
	else if(index <= 0){
		printf("Too small\n\n");
	}
	else{
		int *fibonacci_sequence = fibonacci_generator(index);
		for(int i = 0; i < index; i++){
			printf("%d\n", fibonacci_sequence[i]);
		}
		free(fibonacci_sequence);
	}
}

void All_Possible(void){
	printf("\n");
	int *fibonacci_sequence = fibonacci_generator(47);
	for(int i = 0; i < 47; i++){
		printf("%d\n", fibonacci_sequence[i]);
	}
	free(fibonacci_sequence);
}
