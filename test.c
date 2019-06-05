#include<stdio.h>
#include<string.h>


int main()
{
	struct my_struct{
		char name[10];
	}struct_var_1;


	strcpy(struct_var_1.name, "Aswin");
	printf("%s\n", struct_var_1.name);
	return 0;
}
