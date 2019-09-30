#include<stdio.h>

int main(){
    
    // Organizing data !! :)

    // structure helps to oragnize data for some problem in one unit
    // structure is a storage container containing lot of storage containers
    // Customer Structure has 3 attributes : name, age and email
    struct Customer{
        // Attributes in a Structure
        char name[100];
        int age;
        char email[100];
    } c1, c2, c3;

    /*
    union Customer{
        // Attributes in a Structure
        char name[100];
        int age;
        char email[100];
    } c1, c2, c3;
    */

    // Create Structure Objects i.e. Storage Containers which contains data
    //struct Customer c1, c2, c3;

    // Write Data in struct object
    printf(">> Enter Customer Name:\n");
    scanf("%s",&c1.name);

    printf(">> Enter Customer Age:\n");
    scanf("%d",&c1.age);

    printf(">> Enter Customer Email:\n");
    scanf("%s",&c1.email);


     printf(">> Enter Customer Name:\n");
    scanf("%s",&c2.name);

    printf(">> Enter Customer Age:\n");
    scanf("%d",&c2.age);

    printf(">> Enter Customer Email:\n");
    scanf("%s",&c2.email);

    // Update Data
    c1.age++;

    // Reading Data
    printf("Customer Details\n");
    printf("%s \t %d \t %s \n",c1.name, c1.age, c1.email);
    printf("%s \t %d \t %s \n",c2.name, c2.age, c2.email);

    printf("Size of c1 is: %d\n",sizeof(c1));
    printf("Size of c2 is: %d\n",sizeof(c2));
    printf("Size of c3 is: %d\n",sizeof(c3));

    return 0;
}
