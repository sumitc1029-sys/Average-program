# include <stdio.h>

int main () {
    int marks1;
    printf("Enter marks1 : ");
    scanf("%d" , &marks1);
    int marks2;
    printf("Enter marks2 : ");
    scanf("%d", &marks2);
    int marks3;
    printf("Enter marks3 : ");
    scanf("%d" , &marks3);
    float avg;

    avg = (marks1 + marks2 + marks3) / 3.0;
    printf("Average : %.2f\n " , avg);

    if(avg>=40) {
        printf("Pass\n");
    }
    else{
        printf("Fail");
    }

    return 0;

}