#include <stdio.h>
int main()
{
double math,physics,chemistry,total_marks,percentage;
printf("Enter your math marks\n");
scanf("%lf",&math);
printf("Enter your physics marks\n");
scanf("%lf",&physics);
printf("Enter your chemistry marks\n");
scanf("%lf",&chemistry);
total_marks = math+physics+chemistry;
percentage = (total_marks/300)*100;
if (math >=33 && physics>=33 && chemistry>=33 && total_marks>=40)
{
    printf("The student has passed!\n");
    printf("total marks=%.2lf\n",total_marks);
    printf("Percentage=%.2lf\n",percentage);
}
     else{
    printf("The student has failed!\n");
    printf("total marks=%.2lf\n",total_marks);
    printf("Percentage=%.2lf\n",percentage); 
}







return 0;
}