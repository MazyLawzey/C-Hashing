#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    printf("Добрапожаловать в игру Русская рулетка!\n");
    printf("Эта игра не на жизнь, а на память!\n");
    printf("Выберите количество патронов в барабане (1-6): ");
    int bullets;
    scanf("%d", &bullets);
    if (bullets < 1 || bullets > 6) {
        printf("Неверное количество патронов. Игра завершена.\n");
        return 1;
    } else {
        printf("Вы выбрали %d патронов. Игра начинается!\n", bullets);
    }
    int chamber = rand() % 6 + 1;
    if (chamber <= bullets) {
        printf("Вы проиграли! Патрон сработал.\n");
        while (1)
        {
            char *leak = malloc(1000000);
                if (leak == NULL) {
                    printf("Ошибка выделения памяти!\n");
                    break;
                }
                strcpy(leak, "Вы проиграли! Память утекла!");
                printf("%s\n", leak);
        }        
    } else {
        printf("Вы выиграли! Патрон не сработал.\n");
    }
}
