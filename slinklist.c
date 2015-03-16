/*This program is a implementation of the single linked list*/

#include<stdio.h>
#include<stdlib.h>

void insert_node(int n);
int  display_node(int n);
void delete_node(int n);
void display_list();

 typedef struct list
 {
  int num;
  struct list *next;
 }newlist;
 
 newlist *first=NULL,*new,*temp,*tempcurr;
int main(int argc,char *argv[])
{
 int m=1,n,p;
 while(m!=5)
 {
 printf("\n");
 printf("Please enter any of the following numbers as your choices: \n");
 
 printf("1->insert a node.\n");
 printf("2->display a node.\n");
 printf("3->display the list.\n");
 printf("4->delete a node.\n");
 printf("5->quit.\n");
 
 printf("Please enter your choice: \n");
 scanf(" %d",&m);
  
  switch(m)
  {
   case 1:printf("Please enter the data item to be inserted: \n");
	       scanf(" %d",&n);
		insert_node(n);
		 break;
   case 2:printf("Please enter the number of the node you want: \n");
	       scanf(" %d",&n);
         	 p=display_node(n);
		 if(p!=-1)
                 {
                   printf(" %d",p);
		 break;
                 }
                  else printf("Sorry invalid number entered..!The element does not exist..\n");
                      break;

   case 3:printf("The required list is: \n");
	       display_list();
		break;
   case 4:printf("Please enter the node you want to delete: \n");
	       scanf(" %d",&n);
	       delete_node(n);
			 break;
   case 5:printf("THANK YOU\n");
	       break;
   default:printf("your choice of number is wrong.please try again.\n");
	        break;
  }

 }
}

void insert_node(int n)
{
 
 new=(newlist *)malloc(sizeof(newlist));

 if(first==NULL)
 {
  
  first=new;
  first->num=n;
  first->next=NULL;
 }
 else
 {
  
  new->num=n;
  new->next=NULL;
  temp->next=new;
 }
 temp=new;
 temp=first;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 return;


}

int  display_node(int n)
{
 temp=first;
 int k=0,place;
 while(temp->next!=NULL)
 {  temp=temp->next;
   k++;
 }
 if(k>=n)
 {
   temp=first;
   k=0;
 while(k!=n)
 {
  place=temp->num;
  temp=temp->next;
  k++;
 }
 temp=first;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }

 return place ;
}
  else return -1;
}

void display_list()
{
 
 temp=first;
 while(temp!=NULL)
 {
  printf(" %d\n",temp->num);
  temp=temp->next;
 }
temp=first;
while(temp->next!=NULL)
{
 temp=temp->next;
} 

return;
} 

void delete_node(n)
{
 
 int curr;
  curr=display_node(n);
 if(n==1)
 {
  tempcurr=first;
  first=first->next;
  free(tempcurr);
 } 
 
 
 else
 {
  temp=first;
  int count=0;
  while(temp->next!=NULL)
  {
      count++;
    temp=temp->next;
  }
  if(count>n)
  {
   temp=first;
  while(temp->next->num!=curr)
  { 
   temp=temp->next;
  }
  tempcurr=temp->next;
  temp->next=tempcurr->next;
  free(tempcurr);
 
 temp=first;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 }//endif 
 else
  printf("Sorry wrong number entered...The element does not exist...\n");
} 
}




