#include <stdio.h>
#include <stdlib.h>
#define NUM 6
void count(int arr[]);
int main(void)
{ 
 int i,arr[NUM];
 
 for(i=0;i<NUM;i++)
 {
 printf("arr[%d]=",i);
 scanf("%d",&arr[i]);
 }
 count(arr);
 
 system("pause");
 return 0;
}

void count(int arr[])
{
 int a[6],b[6];  
 int i,anum=0,bnum=0;   
 for(i=0;i<NUM;i++)
 {
 if(arr[i]%2==0)
 {
 anum++;
 a[anum-1]=arr[i];
 }
 if(arr[i]%2!=0)
 {
 bnum++;
 b[bnum-1]=arr[i]; 
 }
 }
 printf("���ƭӼƦ�:%d��\n",anum);
 printf("���Ʀ�:");
 for(i=0;i<anum;i++)
 printf(" %d",a[i]);
 printf("\n�_�ƭӼƦ�:%d��\n",bnum);
 printf("�_�Ʀ�:");
 for(i=0;i<bnum;i++)
 printf(" %d",b[i]);
 printf("\n");
}
