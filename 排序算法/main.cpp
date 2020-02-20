#include <cstdio>

//ºÚµ•—°‘Ò≈≈–Ú
void selectSort(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int k = i;
        for(int j=i; j<n; j++ )
        {
            if(a[k] > a[j])
                k = j;
        }

        int temp = a[k];
        a[k] = a[i];
        a[i] = temp;
    }
}


//ºÚµ•≤Â»Î≈≈–Ú
void inserSort(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp =a[i];
        int j = i;
        while(j>0 && a[j]<a[j-1])
        {
            a[j] = a[j-1];
            j--;
        }
        a[j] = temp;
    }
}

int main()
{
   int n;
   scanf("%d", &n);
   int a[10]={0};
   for(int i=0; i<n; i++)
   {
       scanf("%d", &a[i]);
   }
 //  printf("\n");

   selectSort(a, n);
   for(int i=0; i<n; i++)
   {
       printf("%d ", a[i]);
   }
   printf("\n");

   inserSort(a, n);
   for(int i=0; i<n; i++)
   {
       printf("%d ", a[i]);
   }
   printf("\n");
    return 0;
}
