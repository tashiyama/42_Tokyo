#include <stdio.h>

int judgement_int(char *str)
{
    long lomg num = 0;


    while(*str != '\0'){
        if (*str == ' ')
        {
            str++;
        }

        num += *str - 48;
        num *= 10;
        str++;
    }



        num /= 10;

    return num;
}

int    main(int argc, char** argv)
{
    long long number;

    
    number=judgement_int(argv[1]);
    printf("%ld", number);
    
    return (0);
}
