#include <stdio.h>

void TrimSpace(char *str)
{
	char *p = str;				
	
	while (*str != '\0') {		// 当該文字列の末尾に到達しない間、処理を続ける
		if (*str != ' ') {	// 着目している文字が空白でなければ
			*p = *str;			// その文字を答えに格納する
			p++;				// 答えのポインターを１つ進める
		}
		str++;					// 当該文字列用のポインターは、とにかく１つ進める
	}
	*p = '\0';					// 答えの文字列を終端させる
}

int main(void)
{
	char str[]  = " 1 
	23 4 5";
	
	printf("空白を詰める前：\"%s\"\n", str);
	TrimSpace(str);
	printf("空白を詰めた後：\"%s\"\n", str);
	return 0;
}