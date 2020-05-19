#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1;
	int num2;

	printf("Find the GCD of the Following, Input:\n");
	scanf("%i", &num1);
	scanf("%i", &num2);
		
	abs(num1); //Searched on how to get the absolute value of a certain integer
	abs(num2);	
			
	while(num1!=num2){
        if(num1 > num2){
		
            num1 -= num2;
            printf("%i\n", num1); // Added to visualize the repeated subtraction.
    	}
		else
            num2 -= num1;
            printf("%i\n", num2);
	}
	
	printf("The GDC is %i", num1);
	
	return 0;
}
