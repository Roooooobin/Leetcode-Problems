#include <cstdio>
#include <cstdlib>

int n;

void QuickSort(int a[],int l,int r)
{
    int k;
    if(l<r){
        //swap(a[l],a[(l+r)/2]);
        int i=l,j=r,x=a[i];
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
        QuickSort(a,l,i-1);
        QuickSort(a,i+1,r);
    }
}

int main()
{
    scanf("%d",&n);
    printf("%d\n", n);
    int i;
    int a[1000000];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    QuickSort(a,0,n-1);
    for(i=0; i<n-1; i++){
        printf("%d ", a[i]);
    }
    printf("%d\n", a[n-1]);
    return 0;
}
