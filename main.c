#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,pg[30],fr[10];
int C[10],k=0, PF=0, PR=0, d=0, i, j, c, f, x, temp, cur, max, m, cnt, p;
 freopen("input.txt","r",stdin);
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&pg[i]);
 scanf("%d",&f);
 for(i=0;i<f;i++)
 {
 C[i]=0;
 fr[i]=-1;
 }
 for(i=0;i<n;i++)
 {
 x=0;
 temp=pg[i];
 for(j=0;j<f;j++)
 {
 if(temp==fr[j])
 {
 x=1;
 break;
 }
 }
 if((x==0)&&(k<f))
 {
 PF++;
 fr[k]=temp;
 k++;
 }
 else if((x==0)&&(k==f))
 {
 PF++;
 for(cnt=0;cnt<f;cnt++)
 {
 cur=fr[cnt];
 for(c=i;c<n;c++)
 {
 if(cur!=pg[c])
 C[cnt]++;
 else
 break;
 }
 }
 max=0;
 for(m=0;m<f;m++)
 {
 if(C[m]>max)
 {
 max=C[m];
 p=m;
 }
 }
 fr[p]=temp;
 }
 }
 PR= PF-f;
 printf("\n ***********************************************");
 printf("\n Optimal Page Replacement algorithm \n");
 printf(" ***********************************************\n");
 printf("\n 1. Number of page fault is : %d ",PF);
 printf("\n 2. Number of page replacement is : %d \n",PR);
return 0;
}