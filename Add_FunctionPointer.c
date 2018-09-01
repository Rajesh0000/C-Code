#include<stdio.h>

float Add(float,float);                         //Declaration Of Add Function
float Sub(float,float);                         //Declaration Of Subtraction Function
float Mul(float,float);                         //Declaration Of Multiplication Function
float Div(float,float);                         //Declaration Of Division Function

int main(){
	int i;                                      //Integer variable declaration for MENU operation
	float a,b,result;                           //Float variables for calculations
	float (*fptr)(float,float);                 //Declaration of Pointer
                                                //'fptr' is function pointer which takes two parameter and return float
                                                //i.e. function pointer
	printf("Enter Two Numbers\n");
	scanf("%f%f",&a,&b);                        //Accepting Two Numbers

	do{                                         //Menu Operation
		printf("1.Addition\n");
		printf("2.Subtraction\n");
		printf("3.Multipltcation\n");
		printf("4.Division\n");
		printf("0.EXIT\n");
		scanf("%d",&i);

		switch(i){
		case 1:
			fptr=Add;                           //Assigning 'Add' Function address to 'fptr' Pointer
			result=(*fptr)(a,b);                //Function call
			printf("Add is = %.2f\n",result);
			break;

		case 2:
			fptr=Sub;                           //Assigning 'Sub' Function address to 'fptr' Pointer
			result=(*fptr)(a,b);
			printf("Sub is = %.2f\n",result);
			break;

		case 3:
			fptr=Mul;                           //Assigning 'Mul' Function address to 'fptr' Pointer
			result=(*fptr)(a,b);
			printf("Mul is = %.2f\n",result);
			break;

		case 4:
			fptr=Div;                           //Assigning 'Div' Function address to 'fptr' Pointer
			result=(*fptr)(a,b);
			printf("Div is = %.2f\n",result);
			break;

		}
	}while(i!=0);
	return 0;
}

float Add(float a,float b){                     // Function Defined
	return a+b;                                 // function name "Add" which takes two float type parameter and return float
}

float Sub(float a,float b){
	return a-b;
}

float Mul(float a,float b){
	return a*b;
}

float Div(float a,float b){
	return a/b;
}
