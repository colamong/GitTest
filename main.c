//Make conflict
#include <stdio.h>
#include "myheader.h"

in main(void){
	char name[17] = {0,};
	
	printf("Name: ");
	scanf("%s", name);

	printHello();
	printBye();

	return 0;
}
