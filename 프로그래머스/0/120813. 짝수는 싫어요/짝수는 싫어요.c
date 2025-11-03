#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int count = (n + 1) / 2;
    int* answer = (int*)malloc(sizeof(int)*count);
    
    for (int i = 0, num = 1; num <= n; num += 2, i++) {
        answer[i] = num;
    }
    return answer;
}