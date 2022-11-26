#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int recursion(const char *s, int l, int r, int c){
    c++;
    if(l >= r) return printf("%d %d\n", 1, c); //계속 반복한 배열이 결국 같게되면 1을 반환
    else if(s[l] != s[r]) return printf("%d %d\n", 0, c); // 같지않다면 0반환
    else return recursion(s, l+1, r-1, c); // 한칸씩 앞,뒤로 옮겨서 다시 비교
}

int isPalindrome(const char *s){
    int c=0;
    return recursion(s, 0, strlen(s)-1, c); // 문자열 s[0]~(strlen(s)-1)
}

int main(){

    int T; // test case의 개수
    char *s = malloc(sizeof(char) * 1001); //문자 배열
    scanf("%d", &T);

    for(int i = 0; i<T ; i++)
    {
        scanf("%s", s);
        isPalindrome(s);
    }
    free(s);
	return 0;
}
