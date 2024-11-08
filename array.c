#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,ele,ch,i,pos;
    printf("enter number of elements to create an array:\t");
    scanf("%d",&n);
    p=malloc(n * sizeof(int));
    printf("Dynamic array created.\n");
    printf("Enter %d elements \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);

    }
    while(1)
    {
        printf("\n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit \n Enter your choice:\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n Enter elements and pos (0 to %d) to insert:\t",n-1);
            scanf("%d%d",&ele,&pos);
            realloc(p,(n+1)*sizeof(int));
            n=n+1;
            for(i=n-1;i>=pos;i--)
            {
                p[i]=p[i=1];
                
            }
            p[pos]=ele;
            break;
            
            case2:
            printf("Enter position(o to %d) to delete:\t",n-1);
            scanf("%d",&pos);
            for(i=pos+1;i<n;i++)
            {
                p[i]=p[i];
            }
            n=n-1;
            break;

                case 3:
                printf("\n array elements are: \n");
                for(i=0;i<n;i++)
                {
                    printf("%d \t",p[i]);
                }
                break;

                case 4:
                exit(0);
        }
    }
        return 0;
}