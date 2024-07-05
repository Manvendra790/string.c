// //how to print a triangle of succisive alphabets in c
// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int i,j,n;
//     printf("enter the number of rows\n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("%c",j+64);
//             }
//             printf("\n");
            
//             }
            
// }

// #include <stdio.h>
// // Main function
// int main()  
// {  
//     int arr[10];  // Declare an array of size 10 to store integer values
//     int i;  
//     // Print a message to prompt the user for input
//     printf("\n\nRead and Print elements of an array:\n");
//     printf("-----------------------------------------\n");	
//     // Prompt the user to input 10 elements into the array
//     printf("Input 10 elements in the array :\n");  
//     for(i=0; i<10; i++)  
//     {  
// 	    printf("element - %d : ",i);  // Prompt the user to input the i-th element
//         scanf("%d", &arr[i]);  // Read the input and store it in the array
//     }  
//     // Display the elements in the array
//     printf("\nElements in array are: ");  
//     for(i=0; i<10; i++)  
//     {  
//         printf("%d  ", arr[i]);  // Print each element in the array
//     } 
//     printf("\n");
// 	return 0;	
// }

// #include<stdio.h>
// int main()
// {int arr[10];
// int i;
//     for(i=0;i<=10;i++)
//     {
//         printf("Enter the value %d: ",i);
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<=10;i++)
//     {
//         printf(" %d",arr[i]);
//     }
//     printf("\n");
// return 0;
// }
// #include<stdio.h>
// int main()
// {int arr[10];
// int i,j;
//     for(i=0;i<=10;i++)
//     {
//         printf("Enter the value %d: ",i);
//         scanf("%d",&arr[i]);
//     }
//     for(j=10;j>=0;j--)
//     {
//         printf(" %d",arr[j]);
//     }
//     printf("\n");
// return 0;
// }
// #include<stdio.h>
// int main()
// {int arr1[10];
// int i;
// int arr2[10];
//     for(i=0;i<=10;i++)
//     {
//         printf("Enter the value %d: ",i);
//         scanf("%d",&arr1[i]);
//     }
//     arr1[10]=arr2[10];
//     for(i=0;i<=10;i++)
//     {
//         printf(" %d",arr2[i]);
//     }
//     printf("\n");
// return 0;
// }
// #include<stdio.h>
// int main()
// {
// int arr1[3];
// int i,j,k;
// int arr2[3];
//     for(i=0;i<=3;i++)
//     {
//         printf("Enter the value %d: ",i);
//         scanf("%d",&arr1[i]);

//         printf("Enter the value2 %d: ",j);
//         scanf("%d",&arr2[i]);
//     }   
//     for(j=0;j<=3;j++){
//         for(k=0;k<=3;k++){
//             if(arr1[j]=arr2[k])
//             {printf("the duplicarte number is :%d\n",arr2[k]);
//             }
//         }
//     }
    
//     printf("\n");
// return 0;

// }
#include<stdio.h>
int main()
{char c = 'b';
printf("The ASCII value of '%c' is %d\n", c, c);
return 0;
}




  



