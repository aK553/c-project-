#include<stdio.h>
#include<string.h>
struct customer
{
   char name[25];
   char phoneno[10];

};
char cust_items[10][100];
enum item {wheat=10,rice=20,tomato=30,flowers=20,pen=5,brush=10};
int main(){
   struct customer s;
   FILE *fp=fopen("bill.txt","w+");
   int i;
   int n;
   int cn;
   int k;
   printf("enter no of customer:\n");
   scanf("%d",&cn);
   for(k=0;k<cn;k++){
      printf("enter the customer name:\n");
      scanf("%s",s.name);
      printf("enter the customer phone no:\n");
      scanf("%s",s.phoneno);
      printf("enter no of items\n");
      scanf("%d",&n);
      fprintf(fp,"customer name: %s\n",s.name);
      fprintf(fp,"customer phone no: %s\n",s.phoneno);
      printf("Items in market are\n1)wheat\n2)rice\n3)tomato\n4)flowers\n5)pen\n6)brush\n");
      printf("Add items to the list\n");
      for(i=0;i<n;i++){
         scanf("%s",cust_items[i]);
      }
      int sum=0;
      for(i=0;i<n;i++){
         if(strcmp(cust_items[i],"wheat")==0){
            fprintf(fp,"Wheat-------->%d\n",wheat);
            sum+=wheat;
         }
         else if(strcmp(cust_items[i],"rice")==0){
            fprintf(fp,"Rice--------->%d\n",rice);
            sum+=rice;
         }
         else if(strcmp(cust_items[i],"tomato")==0){
            fprintf(fp,"Tomato--------->%d\n",tomato);
	    sum+=tomato;
	 }
         else if(strcmp(cust_items[i],"flowers")==0){
            fprintf(fp,"Flowers--------->%d\n",flowers);
	    sum+=flowers;
	 }
	 else if(strcmp(cust_items[i],"pen")==0){
            fprintf(fp,"Pen---------->%d\n",rice);
	    sum+=pen;
	 }
         else if(strcmp(cust_items[i],"brush")==0){
            fprintf(fp,"Brush--------->%d\n",brush);
	    sum+=brush;
	 }
	 

	 else {
	    sum+=0;
         }
      }
   fprintf(fp,"\n---------------------------------\n");
   fprintf(fp,"Total---------->%d\n",sum);
   fprintf(fp,"----------------------------------");
}
return 0;


}
