//Basic Calculator in C
// #include<stdio.h>
// int main()
// {
//     float a, b, result;
//     char c;
//     printf("Enter 2 numbers : \n");
//     scanf("%f%f", &a, &b);
//     printf("Enter operation (+, -, *, /, %) : \n");
//     scanf(" %c", &c);
//     switch (c)
//     {
//         case '+':
//         result = a + b;
//         printf("The sum of %.2f and %.2f is %.2f", a, b, result);
//         break;

//         case '-':
//         result = a - b;
//         printf("The difference between %.2f and %.2f is %.2f", a, b, result);
//         break;

//         case '*':
//         result = a * b;
//         printf("The product of %.2f and %.2f is %.2f", a, b, result);
//         break;

//         case '/':
//         result = a / b;
//         printf("The quotient of %.2f and %.2f is %.2f", a, b, result);
//         break;

//         case '%':
//         result = int(a) % int(b);
//         printf("The remainder of %.2f and %.2f is %.2f", a, b, result);
//         break;

//         default:
//         printf("Invalid operation");
//         break;
//     }
//     return 0;
// }

//Generating a Fibonacci Sequence in C
// #include<stdio.h>
// int main()
// {
//     int first = 0, second = 1, next, n,  i;
//     printf("Enter the number of terms in the Fibonacci sequence : \n");
//     scanf("%d", &n);
//     printf("The fibonacci sequence is : \n");
//     for (i=0; i<n; i++)
//     {
//         if (i == 0)
//         {
//             printf("%d ", first);
//             continue;
//         }
//         else if (i==1)
//         {
//             printf("%d ", second);
//             continue;
//         }
//         next = first + second;
//         first = second;
//         second = next;
//         printf("%d ", next);
//     }
//     return 0;
// }

//Computing roots of a quadratic equation in C
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float a, b, c, d, r1, r2;
//     printf("Enter the coefficients (a, b, c) of the quadratic equation : \n");
//     scanf("%f%f%f", &a, &b, &c);
//     d = (b*b) - (4*a*c);
//     printf("Your Discriminant is %.2f\n", d);
//     if (d == 0)
//     {
//         r1 = (-b + sqrt(d)) / (2*a);
//         r2 = (-b - sqrt(d)) / (2*a);
//         printf("Your roots are real and equal and they are %.2f and %.2f", r1, r2);
//     }
//     else if (d>0)
//     {
//         r1 = (-b + sqrt(d)) / (2*a);
//         r2 = (-b - sqrt(d)) / (2*a);
//         printf("Your roots are real and distinct and they are %.2f and %.2f", r1, r2);
//     }
//     else
//     {
//         printf("Your roots are imaginary");
//     }
//     return 0;
// }

//Bubble sort in C
// #include<stdio.h>
// int main()
// {
//     int a[100], n, i, j, temp;
//     printf("Enter no. of elements in the array : \n");
//     scanf("%d", &n);
//     printf("Enter %d elements in your array : \n", n);
//     for (i=0; i<n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (j=1; j<n; j++)
//     {
//         for (i=0; i<n-j; i++)
//         {
//             if (a[i]>a[i+1])
//             {
//                 temp = a[i];
//                 a[i] = a[i+1];
//                 a[i+1] = temp;
//             }
//         }
//     }
//     printf("Sorted list in ascending order is : \n");
//     for (i=0; i<n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

//Binary search in C
// #include<stdio.h>
// int main()
// {
//     int a[100], n, i, key, low, mid, high, found = 0;
//     printf("Enter no. of elements in the array : \n");
//     scanf("%d", &n);
//     printf("Enter the elements in ascending order : \n");
//     for (i=0; i<n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the search element : \n");
//     scanf("%d", &key);
//     low = 0; 
//     high = n-1;
//     while(low <= high)
//     {
//         mid = (low+high)/2;
//         if(key == a[mid])
//         {
//             printf("Search element found at index %d\n", mid);
//             found = 1;
//             break;
//         }
//         else if (key > a[mid])
//         {
//             low = mid + 1;
//         }
//         else if (key < a[mid])
//         {
//             high = mid - 1;
//         }
//     }
//     if (found == 0)
//     {
//         printf("Search element not found in the given list \n");
//     }
//     return 0;
// }

//Matrix Multiplication in C
// #include<stdio.h>
// int main()
// {
//     int a[100][100], b[100][100], c[100][100], i, j, k, r1, r2, c1, c2;
//     printf("Enter no of rows and columns in matrix A : \n");
//     scanf("%d%d", &r1, &c1);
//     printf("Enter no of rows and columns in matrix b : \n");
//     scanf("%d%d", &r2, &c2);
//     if (c1 == r2)
//     {
//         printf("Enter %d elements into matrix A : \n", r1*c1);
//         for (i=0; i<r1; i++)
//         {
//             for (j=0; j<c1; j++)
//             {
//                 scanf("%d", &a[i][j]);
//             }
//         }
//         printf("Enter %d elements into matrix B : \n", r2*c2);
//         for (i=0; i<r2; i++)
//         {
//             for (j=0; j<c2; j++)
//             {
//                 scanf("%d", &b[i][j]);
//             }
//         }
//         printf("Matrix A : \n");
//         for (i=0; i<r1; i++)
//         {
//             for (j=0; j<c1; j++)
//             {
//                 printf("%d\t", a[i][j]);
//             }
//             printf("\n");
//         }
//         printf("Matrix B : \n");
//         for (i=0; i<r2; i++)
//         {
//             for (j=0; j<c2; j++)
//             {
//                 printf("%d\t", b[i][j]);
//             }
//             printf("\n");
//         }
//         for (i=0; i<r1; i++)
//         {
//             for (j=0; j<c2; j++)
//             {
//                 c[i][j] = 0;
//                 for (k=0; k<c1; k++)
//                 {
//                     c[i][j] += a[i][k] * b[k][j];
//                 }
//             }
//         }
//         printf("Matrix C : \n");
//         for (i=0; i<r1; i++)
//         {
//             for (j=0; j<c2; j++)
//             {
//                 printf("%d\t", c[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     else
//     {
//         printf("Matrices cannot be multiplied \n");
//     }
//     return 0;
// }

//String comparision in C
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100], b[100];
//     printf("Enter string A : \n");
//     fgets(a, sizeof(a), stdin);
//     printf("Enter string B : \n");
//     fgets(b, sizeof(b), stdin);
//     a[strcspn(a, "\n")] = 0;
//     b[strcspn(b, "\n")] = 0;
//     if (strcmp(a, b) == 0)
//     {
//         printf("Both strings are the same \n");
//     }
//     else
//     {
//         printf("Both strings are different \n");
//     }
//     return 0;
// }

//Classification of Characters in C
// #include<stdio.h>
// int main()
// {
//     char c;
//     printf("Enter your character : \n");
//     scanf("%c", &c);
//     if(c >= 'A' && c <= 'Z')
//     {
//         printf("Your character is a Capital letter\n");
//     }
//     else if(c >= 'a' && c <= 'z')
//     {
//         printf("Your character is a Small letter\n");
//     }
//     else if(c >= '0' && c <= '9')
//     {
//         printf("Your character is a Digit\n");
//     }
//     else
//     {
//         printf("Your character is a Special character\n");
//     }
//     return 0;
// }

//Employee Salary Calculation in C
// #include<stdio.h>
// struct Employee{
//     char name[100];
//     float basicPay;
//     float da;
//     float hra;
//     float grossSalary;
// };

// void computeSalary(struct Employee* emp)
// {
//     emp->da = 0.80 * emp->basicPay;
//     emp->hra = 0.30 * emp->basicPay;
//     emp->grossSalary = emp->da + emp->hra + emp->basicPay;
// }

// int main()
// {
//     int n, i;
//     printf("Enter no. of employees : \n");
//     scanf("%d", &n);
//     struct Employee employees[n];
//     for (i=0; i<n; i++)
//     {
//         printf("Enter the details of employee %d\n", i+1);
//         printf("Enter the name : \n");
//         fgets(employees[i].name, sizeof(employees[i].name), stdin);
//         printf("Enter the basic pay : \n");
//         scanf("%f", &employees[i].basicPay);
//         computeSalary(&employees[i]);
//     }
//     printf("Employee name          Gross salary\n");
//     for (i=0; i<n; i++)
//     {
//         printf("%s         %.2f\n", employees[i].name, employees[i].grossSalary);
//     }
//     return 0;
// }

//File merging in C
// #include<stdio.h>
// int main()
// {
//     FILE *file1, *file2, *file3;
//     int num;
//     file1 = fopen("DATA1.txt", "r");
//     if (file1 == NULL)
//     {
//         printf("Error opening DATA1.txt\n");
//     }
//     file2 = fopen("DATA2.txt", "r");
//     if (file2 == NULL)
//     {
//         printf("Error opening DATA2.txt\n");
//     }
//     file3 = fopen("DATA3.txt", "w");
//     if (file3 == NULL)
//     {
//         printf("Error opening DATA3.txt\n");
//     }
//     while (fscanf(file1, "%d", &num) != EOF)
//     {
//         fprintf(file3, "%d", num);
//     }
//     while (fscanf(file2, "%d", &num) != EOF)
//     {
//         fprintf(file3, "%d", num);
//     }
//     fclose(file1);
//     fclose(file2);
//     fclose(file3);
//     file3 = fopen("DATA3.txt", "r");
//     if(file3 == NULL)
//     {
//         printf("Error opening DATA3.txt\n");
//     }
//      printf("Contents of DATA3.txt\n");
//     while(fscanf(file3, "%d", &num) != EOF)
//     {
//         printf("%d\n", num);
//     }
//     fclose(file3);
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[] = "madam";
//     int l=0, r=strlen(str)-1, flag=1;
//     while(l<r) {
//         if(str[l] != str[r]) { 
//             flag=0; 
//             break; 
//         }
//         l++;
//         r--;
//     }
//     printf(flag ? "Palindrome\n" : "Not Palindrome\n");
//     return 0;
// }

#include <stdio.h>
int main() {
    int x = 5, y = 10;
    int *a = &x;   // pointer to x
    int *b = &y;   // pointer to y

    int temp = *a; // store value at address a (x)
    *a = *b;       // assign value at address b (y) to x
    *b = temp;     // assign stored value to y

    printf("x=%d y=%d\n", x, y);
    return 0;
}