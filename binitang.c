#include <stdio.h>

int main(){
    int row;

    printf("nilai : ");
    scanf("%d", &row);

    int tengah = (row + 1) / 2;   

    for(int i = 1; i <= row; i++){
        int bintang;

        if(i <= tengah){
            bintang = i;           
        } else {
            bintang = row - i + 1; 
        }

        for(int s = 0; s < tengah - bintang; s++){
            printf(" ");
        }

        for(int j = 0; j < bintang; j++){
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}