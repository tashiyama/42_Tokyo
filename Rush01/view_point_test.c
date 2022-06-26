#include <stdlib.h>
#include<stdio.h>

int	myatoi(char *str)
{
	int	num;

	num = 0;
	if ((*str < '1') || (*str > '4'))
		return (0);
	num += *str - 48;
	return (num);
}


void *def_viewpoint(int argc, char **argv, int **r)
{
    int	*sight_number = NULL;
	// int	*s;
	int	sight;
	int	i;
	sight_number = (int*)malloc(sizeof(int) * 16);
	if (sight_number == NULL) {
        printf("配列作成失敗\n");
    }
	sight = 0;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][sight] != '\0')
		{
			if (argv[1][sight] != ' ')
			{
				sight_number[sight / 2] = myatoi(&argv[1][sight]);
			}
			sight++;		
		}
	}
	*r = sight_number;
    return(0);
}