#include <stdio.h>
#include <ctype.h>
int	myatoi(char *str)
{
	int	num;

	num = 0;
	while (*str != '\0')
	{
		if (('0' <= *str) && (*str <= '9'))
		{
			num += *str - 48;
			num *= 10;
			str++;
		}
        else
        {
            return(0);
        }
	}
	num /= 10;
	return (num);
}

char TrimSpace(char *str)
{
	char *p = str;				// 当該文字列の先頭を指すポインターを用意する
	
	while (*str != '\0') {		// 当該文字列の末尾に到達しない間、処理を続ける
		if (*str != ' ') {	// 着目している文字が空白でなければ
			*p = *str;			// その文字を答えに格納する
			p++;				// 答えのポインターを１つ進める
		}
		str++;					// 当該文字列用のポインターは、とにかく１つ進める
	}
	*p = '\0';					// 答えの文字列を終端させる
    return (*str);
}

int	main(int argc, char **argv)
{
	char	string;
    int     number;
	string = TrimSpace(argv[1]);
    number = myatoi(&string);
    printf("%d", number);
	return (0);
}