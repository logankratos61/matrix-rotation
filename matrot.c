#include<stdio.h>


void array(int n,int m,int mat[m][n])
 {

 int pre,cur,row=0 ,col=0,i;
 while( row<m && col<n )
 {

 pre=mat[row+1][col];

 for(i=col;i<n;i++)
 {

 cur=mat[row][i];
 mat[row][i]=pre;
 pre=cur;

 }
 row++;

 for(i=row;i<m;i++)
 {

 cur=mat[i][n-1];
 mat[i][n-1]=pre;
 pre=cur;

 } 
n--;

 for(i=n;i>col;i--)
 {
  cur=mat[m-1][i];
  mat[m-1][i]=pre;
  pre=cur;

}  
m--;

 for(i=m;i>col;i--)
 {
 cur=mat[i][col];
 mat[i][col]=pre;
 pre=cur;
 }
 col++;

 


}

}

int main()
 
 {
 int i,j,cur,prv,row=0,col=0,n=4,m=4;
 int mat[4][4];
 printf("enter matrix elements");
  for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 {
 printf("enter value of mat[%d][%d]",i,j);
 scanf(" %d",&mat[i][j]);
 }
 }

 printf("your given no.s are: \n");
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 {
 printf("%d ",mat[i][j]);
 }
 printf("\n");
 }

  
 array(4,4,mat);
printf(" \n rotated matrix is \n");
 

for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 {
 printf("%d ",mat[i][j]);
 }
 printf("\n");
 }

  return 0;
 }


