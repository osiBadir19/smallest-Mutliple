#include <stdio.h>

int divide(int n) { 
    int i;
    for (i = 1; i <= 20; i++){
        if (n%i == 0){
            continue;
        }
        else
            return 1;
    }
    return 0;
}

int main() {
    int flag = 0, min = 20;
    while (flag != 1){
        if (divide(min) == 0){
            break;
        }
        else
            min++;
    }
    printf("%d\n", min);

}

