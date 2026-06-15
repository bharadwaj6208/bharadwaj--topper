// #include <stdio.h>
// int main() {
//     int arr[] = {12, 35, 1, 10, 34, 1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int first = -1, second = -1;
//     for(int i=0; i<n; i++) {
//         if(arr[i] > first) 
//         {
//             second = first;
//             first = arr[i];
//         } 
//         else if(arr[i] > second && arr[i] != first) 
//         {
//             second = arr[i];
//         }
//     }
//     printf("Second largest: %d\n", second);
//     return 0;
// }

// #include <stdio.h>
// void rotate(int arr[], int n, int k) {
//     int temp[n];
//     for(int i=0; i<n; i++)
//         temp[(i+k)%n] = arr[i];
//     for(int i=0; i<n; i++)
//         arr[i] = temp[i];
// }
// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int n = (sizeof(arr)/sizeof(arr[0])), k = 4;
//     rotate(arr,n,k);
//     for(int i=0; i<n; i++) printf("%d ", arr[i]);
//     return 0;
// }

// #include <stdio.h>
// void merge(int a[], int n, int b[], int m, int c[]) {
//     int i=0, j=0, k=0;
//     while(i<n && j<m) 
//     {
//         if(a[i] < b[j]) c[k++] = a[i++];
//         else c[k++] = b[j++];
//     }
//     while(i<n) 
//     {
//         c[k++] = a[i++];
//     }
//     while(j<m) 
//     {
//         c[k++] = b[j++];
//     }
// }
// int main() {
//     int a[] = {1,3,5}, b[] = {2,4,6};
//     int c[6];
//     merge(a,3,b,3,c);
//     for(int i=0;i<6;i++) printf("%d ",c[i]);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[] = {1,3,5,7,9}, b[] = {2,4,6,8,10}, c[100], i=0, j=0, k=0, x, y, z;
//     x = sizeof(a)/sizeof(a[0]);
//     y = sizeof(b)/sizeof(b[0]);
//     z = x + y;
//     while(i<x)
//     {
//         c[i] = a[i];
//         i++;
//     }
//     while(j<y)
//     {
//         c[i+j] = b[j];
//         j++;
//     }
//     printf("Final array : \n");
//     for(k=0; k<z; k++)
//     {
//         printf("%d ", c[k]);
//     }
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// const char* determine_color(const char* s) {
//     int num = s[1] - '0';
//     if (s[0] == 'a' || s[0] == 'c' || s[0] == 'e' || s[0] == 'h') {
//         if (num % 2 == 1)
//             return "Black";
//         else
//             return "White";
//     }
//     else if (s[0] == 'b' || s[0] == 'd' || s[0] == 'f' || s[0] == 'h') {
//         if (num % 2 == 1)
//             return "White";
//         else
//             return "Black";
//     }
//     return NULL;
// }

// int main() {
//     char s[256];
//     scanf("%s", s);
//     const char* result = determine_color(s);
//     printf("%s\n", result);
//     return 0;
// }