#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
    system("chcp 65001");
    int apples[10];
    int i;
    int taotao_height;
    int max_reach;
    int count = 0;
    srand((unsigned int)time(NULL));
    printf("[测试数据生成]十个苹果的高度:\n");
    for (i = 0;i<10;i++) {
        apples[i] = rand() % 101 + 100;
        printf("%d", apples[i]);
    }
    printf("\n");
    printf("请输入陶陶的身高\n");
    scanf_s("%d", &taotao_height);
    max_reach = taotao_height + 30;
    for (i = 0;i < 10;i++) {
        if (apples[i] <= max_reach) {
            count++;
        }
    }
    printf("陶陶可以摘到%d个苹果\n", count);
    return 0;
}
