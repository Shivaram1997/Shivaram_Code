#include<stdio.h>
#include<stdlib.h>
struct node 
 {
 int data;
 struct node *link;
 };
struct node *head=NULL;
void main()
{
int num,val,i,count=0,n,opt,pos=0,arr[30],*iptr=arr;
printf("SINGLE Linked List\n");
while(1)
 {
printf("Select any Option \n 0.Exit\n 1.Add at Befinning\n 2.Delete at Beginning\n 3.Display\n 4.Count\n 5.Search\n 6.Delete list\n 7.Add at last\n 8.Delete at last\n 9.Delete particular node\n 10.Add before node\n 11.Add after a node\n 12.Create a list\n 13.Reverse the list\n 14.Selection Sort the list\n");
scanf("%d",&opt);
switch(opt)
  {
   case(0):  exit(0);
   case(1):  printf("Enter a number\n");
             scanf("%d",&num);
             add_at_beg(num);
             break;
   case(2):  del_at_beg();
             break;
   case(3):  display();
             break;
   case(4):  count=count_nodes();
             printf("There are %d Nodes in the list\n",count);
             break;
   case(5):  printf("Enter a node to be searched\n");
             scanf("%d",&num);
             pos=search_node(num);
             printf("The Node is at %d Position\n",pos);
             break;
   case(6):  del_list();
             break;
   case(7):  printf("Enter a number\n");
             scanf("%d",&num);
             add_at_last(num);
             break;
   case(8):  del_at_last();
             break;
   case(9):  printf("Enter a node to be deleted\n");
             scanf("%d",&num);
             del_part_node(num);
             break;
   case(10):  printf("Enter a node Searched:Added\n");
             scanf("%d:%d",&num,&val);
             add_bef_node(num,val);
             break;
   case(11):  printf("Enter a node Searched:Added\n");
             scanf("%d:%d",&num,&val);
             add_aft_node(num,val);
             break;
   case(12): printf("enter no. of elements\n");
             scanf("%d",&n);
             for(i=0;i<n;i++)
               {
               scanf("%d",&arr[i]);
               }
             create_list(arr,n);
             break;
   case(13): reverse();
             break;
   case(14): selection_sort();
             break;
   default:  printf("\n\nInvalid Option");
             break;
   }
  }
 }
   
        
