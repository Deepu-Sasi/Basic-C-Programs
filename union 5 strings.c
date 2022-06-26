/*Deepu Sasi
  Roll No : 25
  Branch  : AI&DS */
#include <stdio.h>
#include <string.h>
#define C_SIZE 100
union Address{
        char name[C_SIZE];
        char hname[C_SIZE];
        char cityname[C_SIZE];
        char state[C_SIZE];

}record1;

int main()
{
    printf("Enter name:");
    scanf("%s",record1.name);
    printf("Enter house name:");
    scanf("%s",record1.hname);
    printf("Enter city name:");
    scanf("%s",record1.cityname);
    printf("Enter state name:");
    scanf("%s",record1.state);


    printf("Address entered");
    printf("Name: %s \n", record1.name);
    printf("House Name : %s \n", record1.hname);
    printf("City Name : %s \n", record1.cityname);
    printf("State name : %s \n", record1.state);

    return 0;
 }
