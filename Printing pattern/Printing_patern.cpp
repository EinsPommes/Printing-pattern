#include <cstdio>
int main(){
    int i, j, rows;
    int stars, spaces;
printf("Enter rows to print: ");
scanf("%d", &rows);
    stars = 1;
    spaces = rows - 1;
    for(i=1; i<rows*2; i++){
        for(j=1; j<=spaces; j++)
            printf(" ");
    for(j=1; j<stars*2; j++)
            printf("*");
    printf("\n");
    if(i<rows){
    spaces--;
    stars++;
    }
    else{
    spaces++;
    stars--;
    }
    }
return 0;
}




//
// Created by E̸i̸n̸s̸P̸o̸m̸m̸e̸s̸#0001 on 02.12.2022.
//
