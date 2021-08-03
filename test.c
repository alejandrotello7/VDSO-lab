#include <stdio.h>

int main(void){
	int oldValue = 2;
	int newValue = user_input(oldValue);
	printf("Old Value: %d\n",oldValue);
	printf("New Value after vDSO call: %d\n",newValue);
	return 0; 
}
