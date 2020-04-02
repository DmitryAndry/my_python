#include <stdio.h>

int main() {
    for (int i = 0;i<13;i++){
        for(int j = 0;j<49;j++){
            if(i>0&&i<7&&j>-1&&j<8){
                printf("*");
            }
            else{
                printf("_");
            }
        }
        printf("\n");
    }
    return 0;
}
