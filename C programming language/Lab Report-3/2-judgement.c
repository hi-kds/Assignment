#include<stdio.h>
int main()
{
    int score;
    int temp;

    scanf("%d",&score);
    if(score<0 || score>100) {printf("N/A\n"); return 0;}

    printf("solution 1\n");// if
    if(score>=90) printf("A\n");
    if(score>=80 && score<90) printf("B\n");
    if(score>=70 && score<80) printf("C\n");
    if(score>=60 && score<70) printf("D\n");
    if(score<60) printf("E\n");

    printf("solution 2\n");// if-else
    if (score>=90) printf("A\n");
    else if(score>=80) printf("B\n");
    else if(score>=70) printf("C\n");
    else if(score>=60) printf("D\n");
    else printf("E\n");

     printf("solution 3\n");// case
     temp=score/10;
     switch (temp)
     {
     case 10:
     case 9:
        printf("A\n");
        break;
     case 8:
        printf("B\n");
        break;
     case 7:
        printf("C\n");
        break;
     case 6:
        printf("D\n");
        break;
     default:
        printf("E\n");
        break;
     }
     return 0;
}