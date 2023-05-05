// Slip-21

/*Write a program to accept names of ‘n’ cities. Find the name of the city 
having maximum characters.*/
#include <stdio.h>
#include <string.h>

int main()
{
    int i,n,len;
    printf("Enter limit: ");
    scanf("%d", &n);
    
    char cities[n][50]; 
    char max_city[50]; 
    int max_len = 0;

    printf("Enter n city names: ");
    for (i=0;i<n;i++)
    {
        scanf("%s",&cities[i]);
    }

    for (i = 0; i < n; i++)
    {
        len = strlen(cities[i]); 
        if (len > max_len) 
        {
            max_len = len; 
            strcpy(max_city,cities[i]);
        }
    }

    printf("The city name with maximum characters is: %s\n", max_city);
        
}