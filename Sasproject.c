#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void storing_table( int students,float grades[students]){
   int p=0;
    for (int i = 0; i < students; i++)
    {
       printf("enter the grade of student number %d: \n", i+1);
       scanf("%f", &grades[i]);
       if (grades[i]>20 || grades[i]<=0)
       {
        p=1;
        while (p==1)
        {
         if (grades[i]==0)
         {
            printf("error\n");
         }
         
         
            printf("enter the grade of student number %d: \n", i+1);
            scanf("%f", &grades[i]);
            if (grades[i]<=20 || grades[i]>=0)
            {
                p=0;
            }
        }
        }
       
    } 
}
void show_grades( int students,float grades[students]){
    for (int i = 0; i < students; i++)
    {
        printf("%.2f\n", grades[i]);
    }
}
float moyen(int students,float grades[students]){
    float somme=0;
    for (int i = 0; i < students; i++)
    {
        somme = somme + grades[i];
    }
    float moyen =  somme/(float)students;
    printf(" the mean is %.2f\n", moyen);
    for(int j = 0; j<students ; j++){
    
    if (grades[j]<moyen)
    {
        printf("%.2f is below the mean\n", grades[j]);
        
    }
    if (grades[j]>moyen)
    {
        printf("%.2f is above the mean\n", grades[j]);
       
    }
    if (grades[j]==moyen)
    {
        printf("%.2f is equal to the mean\n", grades[j]);
    }
    
    }
    
        int pos = 0;
        for (int i = 0; i < students; i++)
        {
            if (grades[i]>moyen)
            {
             int size= sizeof(grades[i])/sizeof(grades[0]);
             pos=pos + size;
            }
        }
       printf("there are %d numbers above the mean\n", pos);
   
    

}
void lowest_number(int students,float grades[students]){
 int pos = 0;
 float min = grades[0];
 for (int i = 1; i < students; i++)
 {

 if (grades[i]<min)
 {
  
  min = grades[i];
  pos = 1;
 }
 else if (grades[i]==min)
 {
  pos++;
 }
 {

  
 }
 
 }
 
printf("the min is %.2f\n" , min);
printf("the min pos is %d\n" , pos);
 

}
void biggest_number(int students,float grades[students]){
int pos = 0;
 float max = grades[0];
 for (int i = 1; i < students; i++)
 {

 if (grades[i]>max)
 {
  
  max = grades[i];
  pos = 1;
 }
 else if (grades[i]==max)
 {
  pos++;
 }
 {

  
 }
 
 }
 
printf("the max is %.2f\n" , max);
printf("the max pos is %d\n" , pos);
 


}

int main (){
   int students ,choice;
   char option;
    printf("\t press any number to continue ");
    scanf("%d", &choice); 
   float grades[students] ;
    do
    {
     printf("\t Press 1 to enter the grades\n");
        printf("\t Press 2 to display the grades\n");
        printf("\t Press 3 to calculate the mean\n");
        printf("\t Press 4 to display the minimum number\n");
        printf("\t Press 5 to display the maximum number\n");
        printf("\t Press 0 to quit the program\n");
        printf("\t Enter your choice: ");
        fflush(stdin);
    switch (choice)
    {
    case 1:
    printf("enter the number of students: ");
    scanf("%d", &students);
    grades[students];
    printf("please note that any grade above 20 or below 0 would result in an error\n");
    storing_table(students,grades);
    break;
    case 2:
    show_grades(students, grades);
    break;
    case 3:
    moyen(students,grades);
    break;
    case 4:
    lowest_number(students,grades);
    break;
    case 5:
    biggest_number(students,grades);
    break;
    case 0 :
    printf("\tDo you want to continue?y/n\n");
    scanf("%c",&option);
    option=toupper(option);    
      break;
    }
    } 
    while (option='Y');
   
}

