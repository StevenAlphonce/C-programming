#include <stdio.h>
#include <stdlib.h>
#define STUDENT 2
#define COURSE 2
int main(void)
{
    int course[STUDENT][COURSE];
    int row,col;
    FILE *fileptr,*fileptr1;
    fileptr=fopen("D:\\FILEOPERATION\\Allscore.txt","w");
    fileptr1=fopen("D:\\FILEOPERATION\\AvarageScore.txt","w");
    if(fileptr==NULL)
    {
        printf("Error");
        exit(1);
    }else{
    for(row=0;row<STUDENT;row++)
    {
        printf("Enter the 5 course exam score for student %d:\n",row+1);

        for(col=0;col<COURSE;col++)
        {
            printf("Course %d score:",col+1);
            scanf("%d",&course[row][col]);
        }
    }
    fputs("Student Score:\n",fileptr);
    fputs("\n",fileptr);
    for(row=0;row<STUDENT;row++)
    {
    fprintf(fileptr,"S%d ",row+1);
    for(col=0;col<COURSE;col++)
        {
    fprintf(fileptr,"%d\t",course[row][col]);
        }
    fputs("\n",fileptr);
        }
    fputs("Average Course Score:\n",fileptr1);
    for(col=0;col<COURSE;col++)
    {
        int sum=0;
        float average;
        fprintf(fileptr1,"C%d",col+1);
    for(row=0;row<STUDENT;row++)
    {
        sum += course[row][col];
        average=sum/COURSE;
    }
   fprintf(fileptr1,"%d\t",average);
    }
    printf("Your file has been Created and data added seccussfully");
}//if ends here
    fclose(fileptr);
    return 0;
    }


