#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "copy.h"

int main()
{
	char* str1 = "IoT Hello! in Media Labs";
	char* str2 = copy(str1);
	printf("%s\n",str2);
return 0;
}
