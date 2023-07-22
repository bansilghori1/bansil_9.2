/*Q.2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
For example,
Input:
Enter your email: admin@gmail.com
Enter your password: 123456

Output:
Login Successful...

-----------------------------------------

For example,
Input:
Enter your email: xyz@gmail.com
Enter your password: 123456

Output:
Login Failed. Invalid Credentials.*/

#include<stdio.h>
#include<string.h>

void main (){

char b[100],c[100];

printf("Enter your email :");
gets(b);
printf("Enter your password :");
gets(c);

if(strcmp(c,"123456")==0 && strcmp(b,"admin@gmail.com")==0){
    printf("Login Sucessfuly........");
}else{
    printf("Login failed........");   
}
}