#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (*dest != '\0' && i < size)
	{
		i++;
		dest++;
	}
	while (*src != '\0' && i + 1 < size)
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	if (i < size)
		*dest = 0;
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}

int ft_strlen(char *str)
{
	int count = 0;
	while (str[count])
		count++;
	return (count);
}

void test()
{
	char a[40] = "concat me plz. ";
	char a2[40] = "concat me plz. ";
	char a3[40] = "concat me plz. ";
	char u[40] = "concat me plz. ";
	char u2[40] = "concat me plz. ";
	char u3[40] = "concat me plz. ";
	char *b = "Okay, here you go!";
	int length = 0;
	int size = 3;
	int size2 = 33;
	int size3 = 35;

	printf("\033[0;32m");
	printf("===TEST OUTPUT===\n");
	printf("\033[0m");
	printf("String a : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", a, ft_strlen(a));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("\nConcatenating to destination of size \033[0;31m%d\033[0m\n", size);
	length = strlcat(a, b, size);
	printf("Output   : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", a, ft_strlen(a));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("Length   : \033[0;33m%d\033[0m\n", length);

	printf("\n");
	printf("\nConcatenating to destination of size \033[0;31m%d\033[0m\n", size2);
	length = strlcat(a2, b, size2);
	printf("Output   : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", a2, ft_strlen(a2));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("Length   : \033[0;33m%d\033[0m\n", length);

	printf("\n");
	printf("\nConcatenating to destination of size \033[0;31m%d\033[0m\n", size3);
	length = strlcat(a3, b, size3);
	printf("Output   : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", a3, ft_strlen(a3));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("Length   : \033[0;33m%d\033[0m\n", length);

	printf("\n\n\n");
	printf("\033[0;32m");
	printf("===USER OUTPUT===\n");
	printf("\033[0m");
	printf("String a : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", u, ft_strlen(u));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("\nConcatenating to destination of size \033[0;31m%d\033[0m\n", size);
	length = ft_strlcat(u, b, size);
	printf("Output   : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", u, ft_strlen(u));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("Length   : \033[0;33m%d\033[0m\n", length);

	printf("\n");
	printf("\nConcatenating to destination of size \033[0;31m%d\033[0m\n", size2);
	length = ft_strlcat(u2, b, size2);
	printf("Output   : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", u2, ft_strlen(u2));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("Length   : \033[0;33m%d\033[0m\n", length);

	printf("\n");
	printf("\nConcatenating to destination of size \033[0;31m%d\033[0m\n", size3);
	length = ft_strlcat(u3, b, size3);
	printf("Output   : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", u3, ft_strlen(u3));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("Length   : \033[0;33m%d\033[0m\n", length);
}

void test2()
{
	char a[40] = "Go there. ";
	char a2[40] = "Go there. ";
	char a3[40] = "Go there. ";
	char u[40] = "Go there. ";
	char u2[40] = "Go there. ";
	char u3[40] = "Go there. ";
	char *b = "Okay!";
	int length = 0;
	int size = 12;
	int size2 = 15;
	int size3 = 35;

	printf("\033[0;32m");
	printf("===TEST OUTPUT===\n");
	printf("\033[0m");
	printf("String a : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", a, ft_strlen(a));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("\nConcatenating to destination of size \033[0;31m%d\033[0m\n", size);
	length = strlcat(a, b, size);
	printf("Output   : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", a, ft_strlen(a));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("Length   : \033[0;33m%d\033[0m\n", length);

	printf("\n");
	printf("\nConcatenating to destination of size \033[0;31m%d\033[0m\n", size2);
	length = strlcat(a2, b, size2);
	printf("Output   : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", a2, ft_strlen(a2));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("Length   : \033[0;33m%d\033[0m\n", length);

	printf("\n");
	printf("\nConcatenating to destination of size \033[0;31m%d\033[0m\n", size3);
	length = strlcat(a3, b, size3);
	printf("Output   : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", a3, ft_strlen(a3));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("Length   : \033[0;33m%d\033[0m\n", length);

	printf("\n\n\n");
	printf("\033[0;32m");
	printf("===USER OUTPUT===\n");
	printf("\033[0m");
	printf("String a : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", u, ft_strlen(u));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("\nConcatenating to destination of size \033[0;31m%d\033[0m\n", size);
	length = ft_strlcat(u, b, size);
	printf("Output   : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", u, ft_strlen(u));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("Length   : \033[0;33m%d\033[0m\n", length);

	printf("\n");
	printf("\nConcatenating to destination of size \033[0;31m%d\033[0m\n", size2);
	length = ft_strlcat(u2, b, size2);
	printf("Output   : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", u2, ft_strlen(u2));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("Length   : \033[0;33m%d\033[0m\n", length);

	printf("\n");
	printf("\nConcatenating to destination of size \033[0;31m%d\033[0m\n", size3);
	length = ft_strlcat(u3, b, size3);
	printf("Output   : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", u3, ft_strlen(u3));
	printf("String b : \033[0;33m%s\033[0m, length = \033[0;33m%d\033[0m\n", b, ft_strlen(b));
	printf("Length   : \033[0;33m%d\033[0m\n", length);
}

int main(void)
{
	test();
	printf("\n\033[0;36mTest #2: Shorter src string\n\033[0m");
	test2();
	return (0);
}
