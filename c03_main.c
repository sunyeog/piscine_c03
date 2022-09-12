
#include <stdio.h>
#include <string.h>
//#include "./ex00/ft_strcmp.c" 
//#include "./ex01/ft_strncmp.c"
//#include "./ex02/ft_strcat.c"
#include "./ex03/ft_strncat.c"
/*#include "./ex04/ft_strstr.c"
#include "./ex05/ft_strlcat.c"
*/

int main()
{
	char str[20] = "HELLO";
	char str_[20] = "HELLO";
	char str2[20] = "WORLD";
	char a[20] = "HI";
	char b[20] = "HI";
	char *c = "SANGHYUN";
	char s1[200] = "42seoul ";
	char s2[200] = "42seoul ";
	char *d, *e;
	int i = 0, i2 = 0;
	char *result, *result2;
	unsigned int n = 0, n2 = 0;
	printf("\n<0>\n");////////////////////////
	/*i = strcmp(str, str_);
	i2 = ft_strcmp(str, str_);
	printf("%d : %d\n", i, i2);
	i = strcmp(str, str2);
	i2 = ft_strcmp(str, str2);
	printf("%d : %d\n", i, i2);
	i = strcmp(str, "");
	i2 = ft_strcmp(str, "");
	printf("%d : %d\n", i, i2);
	printf("\n<1>\n");///////////////////////
	i = strncmp(str, str_, 3);
    i2 = ft_strncmp(str, str_, 3);
    printf("%d : %d\n", i, i2);
    i = strncmp(str, str2, 3);
    i2 = ft_strncmp(str, str2, 3);
    printf("%d : %d\n", i, i2);
    i = strncmp(str, "", 3);
    i2 = ft_strncmp(str, "", 3);
    printf("%d : %d\n", i, i2);
	printf("\n<2>\n");//////////////////////
	result = strcat(str, "BYE");
    result2 = ft_strcat(str, "BYE");
    printf("%s : %s\n", result, result2);
	printf("\n<3>\n");////////////////////
	*/result = strncat(a, "BYE", 3);
    result2 = ft_strncat(b, "BYE", 3);
    printf("%s : %s\n", result, result2);
	printf("\n<4>\n");//////////////////////
	/*d = strstr(c, "H");
	e = strstr(c, "H");
	printf("%s : %s\n", d, e);
	printf("\n<5>\n");//////////////////////
	n = strlcat(s1, "Fighting", 10);
    n2 = ft_strlcat(s2, "Fighting", 10);
    printf("%d : %d\n", n, n2);
	*/return 0;
}
