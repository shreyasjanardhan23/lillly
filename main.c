#include <stdio.h>
#include <string.h>

struct student
{
     int id;
     char name[30];
     float percentage;
};

int main()
{
     int i;
     struct student record1 = {1, "Raju", 90.5};
     struct student *ptr;

     ptr = &record1;

         printf("Records of STUDENT1: \nn");
         printf("  Id is: %d \n",ptr->id);
         printf("  Name is: %s \n",ptr->name );
         //printf("  Percentage is: %f n", *ptr);
         printf("Hello world and I will succees\n");

     return 0;
}
