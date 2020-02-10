//Add at Beginning
void add_at_beg(int num)
 {
  struct node *ptr=(struct node*)malloc(1*sizeof(struct node));
  ptr->data=num;
  ptr->link=head;
  head=ptr;
 }
//Delete at beginning
void del_at_beg()
 {
  if(head==NULL)
   {
   printf("list is empty\n");
   return;
   }
  struct node *temp=head;
  head=head->link;
  free(temp);
 }
//Display
void display()
 {
 if(head==NULL)
   {
   printf("list is empty\n");
   return;
   }
  struct node *temp=head;
  while(temp!=NULL)
    {
    printf("%d\n",temp->data);
    temp=temp->link;
    }
  }
//Count Nodes
int count_nodes()
 {
  int c;
  if(head==NULL)
   {
   printf("list is empty\n");
   return 0;
   }
  struct node *temp=head;
  while(temp!=NULL)
    {
    c++;
    temp=temp->link;
    }
  return c;
  }
//Search
int search_node(int num)
 {
  int p;
  if(head==NULL)
   {
   printf("list is empty\n");
   return 0;
   }
  struct node *temp=head;
  while(temp!=NULL)
    {
    p++;
    if(temp->data==num)
    return p;
    temp=temp->link;
    }
  printf("\nelement not found\n");
  }
//Delete list
void del_list()
 {
    if(head==NULL)
   {
   printf("list is empty\n");
   return;
   }
struct node *temp;
 while(head!=NULL)
  {
   temp=head;
   head=head->link;
   free(temp);
  }
 }
//Add at Last
void add_at_last(int num)
 {
  if(head==NULL)
   {
   printf("list is empty\n");
   return;
   }
 struct node *ptr=(struct node*)malloc(1*sizeof(struct node));
 struct node *temp=head;
 ptr->data=num;
 ptr->link=NULL;
 while(temp->link!=NULL)
  {
  temp=temp->link;
  }
 temp->link=ptr;
 } 
//Delete at Last
void del_at_last()
 {
  if(head==NULL)
   {
   printf("list is empty\n");
   return;
   }
 if(head->link==NULL)
   {
   free(head);
   head=NULL;
   return;
   }
 struct node *prev,*cur=head;
 while(cur->link!=NULL)
   {
   prev=cur;
   cur=cur->link;
   }
 prev->link=NULL;
 free(cur);
 }
//Delete Particular Node
void del_part_node(int num)
 {
 if(head==NULL)
   {
   printf("list is empty\n");
   return;
   }   
 struct node *prev=NULL,*cur=head;
  while(cur!=NULL)
   {
   if(cur->data==num)
   return;
   prev=cur;
   cur=cur->link;
   }
  if(cur==head)
   { 
    head=cur->link;
    free(cur);
    return;
   }
 if(cur==NULL)
  {
 printf("element not found\n");
 return; 
  }
 prev->link=cur->link; 
 free(cur);
 }
//Add Before a Node
void add_bef_node(int num,int val)
 {
  if(head==NULL)
   {
   printf("list is empty\n");
   return;
   }  
struct node *ptr,*trav;
ptr=(struct node *)malloc(1*sizeof(struct node));
ptr->data=val;
trav=head;
while(trav->link!=NULL)
 {
 if(trav->data==num)
 break; 
 trav=trav->link;
 }
if(trav==NULL)
 {
  printf("element not found\n");
 free(ptr);
 return; 
 }
ptr->link=trav->link;
trav->link=ptr;
 }
//Add After a node
void add_aft_node(int num,int val)
 {
  if(head==NULL)
   {
   printf("list is empty\n");
   return;
   }  
struct node *ptr,*trav,*prev;
ptr=(struct node *)malloc(1*sizeof(struct node));
ptr->data=val;
trav=head;
if(head->data==num)
 {
  ptr->link=head;
  head=ptr;
  return;
 }
while(trav->link!=NULL)
 {
 if(trav->data==num)
 break; 
prev=trav;
 trav=trav->link;
 }
if(trav==NULL)
 {
  printf("element not found\n");
 free(ptr);
 return; 
 }
ptr->link=prev->link;
prev->link=ptr;
 }
//Reverse the list
void reverse()
{
 if(head==NULL)
   {
   printf("list is empty\n");
   return;
   }  
struct node *cur,*prev=NULL,*next;
while(cur!=NULL)
 {
  cur=cur->link;
  cur->link=prev;
  prev=cur;
cur=next;
 }
head=prev;
}
//Create the List
void create_list(int *iptr,int n)
{
 int i;
 struct node *cnode,*prev,*temp,*start=NULL;
 for(i=0;i<n;i++)
  {
  struct node *cnode=(struct node*)malloc(1*sizeof(struct node));
   cnode->data=iptr[i];
   cnode->link=NULL;
  }
   if(start!=NULL)
    {
     prev->link=cnode;
     start=start->link;
    }
   if(start==NULL)
    {
    start=cnode;
    prev=cnode;
    }
   if(head==NULL)
    {
    head=start;
    return;
     }
  temp=head;
  while(temp->link!=NULL)
   {
   temp=temp->link;
   }
temp->link=start;
}
//Selection sort
void selection_sort()
 {
  struct node *r,*p,*s,*q,*temp;
  for(r=p=head;p!=NULL;r=p,p=p->link)
   {
   for(s=q=head;s!=NULL;s=q,q=q->link)
    {
     if(p->data>q->data)
         {
           temp=p->link;
           p->link=q->link;
           q->link=temp;
          if(p!=head)
             {
              r->link=q;
              s->link=p;
             }
          if(p==head)
            head=q;
           temp=p;
           p=q;
           q=temp;
           }
      }
   }
 }
