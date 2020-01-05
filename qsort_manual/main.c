#include <stdio.h>
#include <stdlib.h>

int n;
int a[1000023];

void QuickSort(int l,int r)
{
    if(l<r){
        int i=l,j=r;
        int tmp = a[(l+r)/2];
        a[(l+r)/2] = a[i];
        a[i] = tmp;
        int x = a[i];
        while(i<j){
            while(i<j && a[j]>=x){
                j--;
            }
            if(i<j) a[i++]=a[j];
            while(i<j && a[i]<=x){
                i++;
            }
            if(i<j) a[j--]=a[i];
        }
        a[i]=x;
        QuickSort(l,i-1);
        QuickSort(i+1,r);
    }
}

int main()
{
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    QuickSort(0,n-1);
    int k;
    for(k=0; k<n-1; k++){
        printf("%d ",a[k]);
    }
    printf("%d\n",a[k]);
    return 0;
}
