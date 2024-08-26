#include <stdio.h>
main() {
    char name[30];
    char lastname[20];
    char nickname[10];
    int age;
    int GPA;
    printf("name :");
    scanf("%s",&name);
      printf("lastname :");
    scanf("%s",&lastname);
      printf("nickname :");
    scanf("%s",&nickname);
      printf("age :");
    scanf("%d",&age);
          printf("GPA :");
    scanf("%d",&GPA);
  printf("ROW DATA:\n");
    printf("Name: %s\n", name);
    printf("Lastname: %s\n", lastname);
    printf("Nickname: %s\n", nickname);
    printf("Age: %d\n", age);
    printf("GPA: %d\n", GPA);
}