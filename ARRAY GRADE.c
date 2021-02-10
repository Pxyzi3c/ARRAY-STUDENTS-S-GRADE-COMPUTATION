#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

/*HARVY JONES PONTILLAS DICT 1-2*/

int main()
{   int genave, mgrade, fgrade, studnum, totalstud=0;
    char subject[35], ans, studFname[25],studLname[25], rmrks[25][10]={"EXCELLENT","VERY GOOD","GOOD","SATISFACTORY","FAIR",
    "PASSED","FAILED"};

    do{
    totalstud=totalstud+1;
    p("\n\t\t\t   STUDENT GRADE CALCULATOR\n");
    p("\n STUDENT NUMBER\t\t: ");
    s("%d", &studnum);
    p(" STUDENT NAME\t\t: ");
    s("%s %s", &studFname, &studLname);
    p(" SUBJECT\t\t: ");
    s("%s", &subject);
    p(" MIDTERM GRADE\t\t: ");
    s("%d", &mgrade);
    p(" FINAL GRADE\t\t: ");
    s("%d", &fgrade);

    genave=(mgrade+fgrade)/2;

    p("\n\tTHE GENERAL AVERAGE IS  : %d\n", genave);
    if(genave>=97 && genave<=100)
    {
        p("\tEQUIVALENT\t\t: 1.00");
        p("\n\tREMARK\t\t\t: %s", rmrks[0]);
    }
    else if(genave>=94 && genave<=96)
    {
        p("\tEQUIVALENT\t\t: 1.25");
        p("\n\tREMARK\t\t\t: %s", rmrks[0]);
    }
    else if(genave>=91 && genave<=93)
    {
        p("\tEQUIVALENT\t\t: 1.50");
        p("\n\tREMARK\t\t\t: %s", rmrks[1]);
    }
    else if(genave>=88 && genave<=90)
    {
        p("\tEQUIVALENT\t\t: 1.75");
        p("\n\tREMARK\t\t\t: %s", rmrks[1]);
    }
    else if(genave>=85 && genave<=87)
    {
        p("\tEQUIVALENT\t\t: 2.00");
        p("\n\tREMARK\t\t\t: %s", rmrks[2]);
    }
    else if(genave>=82 && genave<=84)
    {
        p("\tEQUIVALENT\t\t: 2.25");
        p("\n\tREMARK\t\t\t: %s", rmrks[2]);
    }
    else if(genave>=79 && genave<=81)
    {
        p("\tEQUIVALENT\t\t: 2.50");
        p("\n\tREMARK\t\t\t: %s", rmrks[3]);
    }
    else if(genave>=76 && genave<=78)
    {
        p("\tEQUIVALENT\t\t: 2.75");
        p("\n\tREMARK\t\t\t: %s", rmrks[4]);
    }
    else if(genave==75)
    {
        p("\tEQUIVALENT\t\t: 3");
        p("\n\tREMARK\t\t\t: %s", rmrks[5]);
    }
    else if(genave<75)
    {
        p("\tEQUIVALENT\t\t: 5");
        p("\n\tREMARK\t\t\t: %s", rmrks[6]);
    }
    p("\n\n DO YOU WANT TO CONTINUE?Y/N\t: ");
    s("%s",&ans);
    p("\n\n");

    }while(ans=='Y'||ans=='y');
    p("\n TOTAL NUMBER OF STUDENTS PROCESS: %d", totalstud);
getch();
}
