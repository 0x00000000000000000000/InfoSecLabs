#include <stdio.h>
#include <string.h>

void not_called()
{
	printf("Shell created");
}

void vulnerable_function(char* string) 
{
	char buffer[100];
	strcpy(buffer, string);
}

int main(int argc, char** argv) 
{
	vulnerable_function(argv[1]);
	return 0;
}
