//24EO0118  原田健司

#include <stdio.h>

int main(void){

	int i;
	int fizz;
	int buzz;
	int fizzbuzz;

	for( i = 1; i <= 100; i++){

		//i が3の倍数
		fizz = i % 3;
		//i が5の倍数
		buzz = i % 5;
		//i が15の倍数
		fizzbuzz = i % 15;

		if(fizzbuzz == 0){
			printf("FizzBuzz\n");
		}else if(fizz == 0){
			printf("Fizz\n");
		}else if(buzz == 0){
			printf("Buzz\n");
		}else{
			printf("%d\n", i);
		}
	}

	return 0;
}
