#include <stdio.h>

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
	*p = '\0';
    return(*str);			
}

int	main(int argc, char **argv)
{
	char	*string;
    string = argv[1];
	*string = TrimSpace(string);

    printf("%s", string);
	return (0);
}