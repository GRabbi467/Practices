#include<stdio.h>
void merge(int arr[],int p,int q,int r)
{
    int n1=q-p+1,n2=r-q;
    int L[n1+1];
    int R[n2+1];
    for(int i=0; i<n1; i++)
    {
        L[i]=arr[p+i];
    }
    for(int j=0; j<n2; j++)
    {
        R[j]=arr[q+j+1];
    }
    L[n1]=99999;
    R[n2]=99999;
    int i=0;
    int j=0;

    for(int k=p; k<=r; k++)
    {
        if(L[i]<=R[j])
        {
            arr[k] = L[ i ];
            i=i+1;
        }
        else
        {
            arr[k]=R[j];
            j=j+1;
        }
    }
}
void mergeSort(int arr[], int p, int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        mergeSort(arr,p,q);
        mergeSort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}
int main ()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("main array:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    mergeSort(arr,0,5-1);

    printf("sorted array:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}



