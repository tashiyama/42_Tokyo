#include<stdio.h>
void def_viewpoint(int argc, char **argv, int *sight_number);

int	main(int argc, char **argv)
{
	int i;
    int sight_number[16];
    i = 0;
    def_viewpoint(argc, argv, sight_number);
	while (i < 16)
	{
		printf("%d", sight_number[i]);
		i++;
	}
	
	return (0);	
}