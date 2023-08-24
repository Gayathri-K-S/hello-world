#include "C:\Users\gayuk\OneDrive\Desktop\gayu C\swap.h"
int main()
{
    int r;
    printf("enter the no of elements");
    scanf("%d",&r);
    int *p=(int*)malloc(r*sizeof(int));
    bubblesort(p,r);
    for(int i=0;i<r;i++)
    {
        printf("%d ",p[i]);
    }


}
void bubblesort(int *p1,int n)
{

    for(int i=0;i<n;i++)
    {
        scanf("%d",&p1[i]);
    }
    for(int j=n-1;j>=1;j--)
    {
     for(int i=n-1;i>=0;i--)
    {
        if(p1[i]>p1[i+1])
        {

            swap(p1,i);

        }
    }

    }

}

