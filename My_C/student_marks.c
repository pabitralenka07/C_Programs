#include<stdio.h>
int main(){
    char name[50];
    int Rollno;
    float c,math,english;
    float total,percentage;
    // Student ki lena
    printf("Enter your name");
    scanf("%s",name);

    printf("Enter Roll no : ");
    scanf("%d",&Rollno);

    printf("Enter marks of c : ");
    scanf("%f",&c);

    printf("Enter marks of math : ");
    scanf("%f",&math);

    printf("Enter marks of  english : ");
    scanf("%f",&english);

    //total calculate krna
    total = c+math+english;

    //percentage  calculate kkrna
    percentage = total/3;

    //result print  krna
    printf("Name : %s\n",name);
    printf("Roll no : %d\n",Rollno);
    printf("Total marks : %f\n",total);
    printf("Percentage : %.2f%%\n",percentage);



    return 0;

}
