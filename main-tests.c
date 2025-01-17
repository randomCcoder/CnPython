#include <stdio.h>
#include "src/cnpython.h"


void test_input(){
	char c;
	c = getc(stdin);
	char *test = input("Test: ");
	print("%s", test);
}


void test_print(){
	int arr[] = {1, 2};
	char *str = "hello";
	char c = 'c';
	print("%s %c %t", str, c, arr);
}



void test_bin(){
	int num = 10;
	long long binary = bin(10);

	printf("%lld", binary);
}


void test_hex(){
        int num = 10;
        hex(num);
}



void test_oct(){
        int num = 10;
        long octal = oct(10);  

        printf("%ld", octal);  
}



void test_endswith(){
	char *str = "hello world";

	if(endswith(str, 'd') == 0){
		printf("%s ends with 'd'\n", str);
	}
	else{
		printf("lmao no\n");
	}
}


int main(void){
	int ch;
	printf("[1]. test-input\n[2]. test-print\n");
	printf("[3]. test-bin\n");
	printf("[4]. test-endswith\n");

	scanf("%d", &ch);

	switch(ch){
		case 1: test_input(); break;
		case 2: test_print(); break;
		case 3: test_bin(); break;
		case 4: test_endswith(); break;
	}
}
