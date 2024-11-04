
/*
@ Project: B+ tree(Enhancement) A.Narendra JNTU.
1)It can be capable of holding one million elements
2)It max 100 accesses to fetch an element
3)develop queries for =,<,> and for Updatations
4)Use Multiprocessing or threading
5)Using Linux and g++.
*/

/********************************************* B+ Tree program*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<conio.h>
#define MAX 4
#define MIN 2
#define Bool int
#define TRUE  1
#define FALSE  0


typedef int key_type;
enum flag_type {KEY_DATA,KEY_ONLY} ;

int ncount=0;
int ele_find;
char data_str[100];

typedef struct Node_tag
{
enum flag_type flag;//This flag tells whether the node is having data or key only
int count;
key_type key[MAX+1];
struct Node_tag *branch[MAX+1];
}Node;

Node * root;

/*  1   */  	Node* Search(key_type ,Node *,int *);
/*  2   */  	Bool  Search_node(key_type,Node *,int *);

/******************************************************************** insertion routines*/

/*  3   */	Node * Insert(key_type ,Node *);
/*  4   */	Bool Pushdown(key_type ,Node *,key_type *,Node**);
/*  5   */	void Pushin(key_type ,Node *,Node *,int );
/*  6   */	void Split(key_type ,Node *,Node *,int ,key_type *,Node **);

/********************************************************************Display routine*/

/*  7   */	void Display(Node *);
/*  8   */  void Bplus_Display(Node*);

/**********************************************************Deletion routines*/

/*  9   */	Node *Del_node(key_type ,Node *);
/*  10   */	Bool Rec_delete(key_type ,Node *);
/*  11   */	void Remove(Node*,int );
/*  12   */	void Successor(Node *,int );

/*  13   */	void Restore(Node *,int );
/*  14   */	void Move_right(Node *,int);
/*  15   */	void Move_left(Node *,int );
/*  16   */	void Combine(Node *,int );

// B+ Tree versions ************************

/*  17   */	void Bpls_Restore(Node *,int );
/*  18   */	void Bpls_Move_right(Node *,int);
/*  19   */	void Bpls_Move_left(Node *,int );
/*  20   */	void Bpls_Combine(Node *,int );

// Queries********************************

/*  21   */	void Less_than(key_type);
/*  22   */	void Equal_to(key_type);
/*  23   */	void Greater_than(key_type);
/*  24   */ void Update(key_type);

/************************************************searching in the tree*/
Node * start_ptr;//for Greater than query

Node *Search(key_type target,Node *rt,int *targetpos)
{
if(rt==NULL)
return NULL;
else if (Search_node(target,root,targetpos))
return rt;
else
{
if(rt->flag==KEY_ONLY)
{
return Search(target,rt->branch[*targetpos],targetpos);
}
else
{
	 start_ptr=rt;
	 return NULL;//for KEY_DATA
}
}
}

/**************************searching in the current node*/

Bool Search_node(key_type target,Node *p,int* k){
	if(target<p->key[1]){
		*k=0;
		return FALSE;
		}
		else{

			*k=p->count;

			while((target<p->key[*k]) && (*k)>1)
			(*k)--;


		return (target==p->key[*k] && p->flag==KEY_DATA);
					//We need to check FOR NODE WITH DATA
		}
	}
	/**********************Inserting into Tree *******/
	Node *Insert(key_type newkey,Node *root)
	{
	key_type x;
	Node *xr,*p;
	Bool pushup;
	pushup=Pushdown(newkey,root,&x,&xr);
	if(pushup)
	{
	p=(Node*)calloc(1,sizeof(Node));
	ncount++;
	p->count=1;

	p->flag= (root==NULL) ?KEY_DATA:KEY_ONLY; //!!!!!Type of NODE

	p->key[1]=x;
	p->branch[0]=root;
	p->branch[1]=xr;
	return p;
	}
	return root;
	}
	/*************************** Recursive Pushing into sublevels of Tree*/

	Bool Pushdown(key_type newkey,Node *p,key_type *x,Node**xr)
	{
	int k;
	static Node * temp;
	if(p==NULL)
	{
	*x=newkey;
	//!!!!  *xr=NULL;
	*xr=(Node*)malloc(strlen(data_str)+1);
	strcpy((char *)(*xr),data_str);
	return TRUE;
	}
	else{
	if(Search_node(newkey,p,&k))
	{
	printf("\nError:Duplicate key!");
	}
	  if(p->flag==KEY_DATA)
			 temp=NULL;
		else
		temp=p->branch[k];

	if(Pushdown(newkey,temp,x,xr))

	if(p->count<MAX)
	{
	Pushin(*x,*xr,p,k);
	return FALSE;
	}
	else
	{
	Split(*x,*xr,p,k,x,xr);
	return TRUE;
	}

	return FALSE;
	}
	}
	/****************************inserting into the current node*/
	void Pushin(key_type x,Node *xr,Node *p,int k){
	int i;
	for(i=p->count ; i>k ; i--){
	p->key[i+1]=p->key[i];
	p->branch[i+1]=p->branch[i];
	}
	p->key[k+1]=x;
	p->branch[k+1]=xr;
	p->count++;
	}
/*********************************** splitting into two	nodes*/
void Split(key_type x,Node *xr,Node *p,int k,key_type *y,Node **yr){
int i;
int median;

median=(k<=MIN)?MIN:MIN+1;

*yr=(Node*)calloc(1,sizeof(Node));
ncount++;
for(i=median+1;i<=MAX;i++)
{
(*yr)->key[i-median]=p->key[i];
(*yr)->branch[i-median]=p->branch[i];
}

(*yr)->count=MAX-median;
p->count=median;

if(k<=MIN)  Pushin(x,xr,p,k);

else Pushin(x,xr,*yr,k-median);

//###Now onwards we have two cases ####

if(p->flag==KEY_DATA)//B+Tree
{
*y= (*yr)->key[1]; //Pushing up the first key of new node
(*yr)->flag=KEY_DATA;
/****Forming linked list****/
(*yr)->branch[0]=p->branch[0];
p->branch[0]=*yr;
/**************************/
}
else //Key B-Tree
{
*y= p->key[p->count]; // Pushing up the last key of old node
(*yr)->flag=KEY_ONLY;
/* For keys We have to maintain B-Tree
So that we need to copy p's last pointer to *yr's 0'th key */
(*yr)->branch[0]=p->branch[p->count];
p->count--;
}
}
/**********************Deletion of node from the tree*/
Node *Del_node(key_type target,Node *root)
{
Node *p;
if(!Rec_delete(target,root))
{
printf("\nError:Target was not in the tree!");
ele_find=-1;

}
else if(root->count==0)
{
p=root;
root=root->branch[0];
free(p);
ncount--;
}
return root;
}
/*******************************Recursive delete and restores */

Bool Rec_delete(key_type target,Node *p)
{int k;
Bool found;
if(p==NULL)
	return FALSE;
else{

if((found=Search_node(target,p,&k)))
	{

		if(p->flag==KEY_ONLY&&p->branch[k-1])
		{
			Successor(p,k);

			if(!(found=Rec_delete(target,p->branch[k])))
				printf("\nError:Element not found!");
		}
		else
		Remove(p,k);

	}
else{
 if(p->flag==KEY_ONLY)
found = Rec_delete(target,p->branch[k]);
else
return FALSE;
}

if(p->flag!=KEY_DATA)//&&p->branch[k]!=NULL)
	if(p->branch[k]->count<MIN)
		if(p->branch[k]->flag==KEY_ONLY)
		Restore(p,k);
		else
		Bpls_Restore(p,k);
	return found;
	}
}
void Remove(Node *p,int k)
{
int i;
for(i=k+1;i<=p->count;i++){
	p->key[i-1]=p->key[i];
	p->branch[i-1]=p->branch[i];
}
p->count--;
}

void Successor(Node *p,int k)
{
Node *q;
for(q=p->branch[k];q->branch[0];q=q->branch[0])
							;
p->key[k]=q->key[2];
}


/*******************Restoring the condition of the B-Tree*/
void Restore(Node *p,int k)
{
if(k==0)
	if(p->branch[1]->count>MIN)
	Move_left(p,1);
	else
	Combine(p,1);
else if(k==p->count)
	if(p->branch[k-1]->count>MIN)
	Move_right(p,1);
	else
	Combine(p,1);
else if(p->branch[k-1]->count>MIN)
	Move_right(p,1);
else if(p->branch[k+1]->count>MIN)
	Move_left(p,1);
else Combine(p,k);
}
/*******************Restoring the condition of the B+-Tree*/
void Bpls_Restore(Node *p,int k)
{
if(k==0)
	if(p->branch[1]->count>MIN)
	Bpls_Move_left(p,1);
	else
	Bpls_Combine(p,1);
else if(k==p->count)
	if(p->branch[k-1]->count>MIN)
	Bpls_Move_right(p,1);
	else
	Bpls_Combine(p,1);
else if(p->branch[k-1]->count>MIN)
	Bpls_Move_right(p,1);
else if(p->branch[k+1]->count>MIN)
	Bpls_Move_left(p,1);
else Bpls_Combine(p,k);
}
/*****************************Moving a key to left*/
void Move_left(Node *p,int k)
{
int c;
Node *t;
/*************************** Move parent into left*/
t=p->branch[k-1];
t->count++;
t->key[t->count]=p->key[k];
t->branch[t->count]=p->branch[k]->branch[0];
/***************************Right ==>parent*/
t=p->branch[k];//t becomes right
p->key[k]=t->key[1];
t->branch[0]=t->branch[1];

t->count--;

for(c=1;c<=t->count;c++)
{
t->key[c]=t->key[c+1];
t->branch[c]=t->branch[c+1];
}
}
/*****************************Moving a key to left in Last level B+Tree Linked list*/
void Bpls_Move_left(Node *p,int k)
{
int c;
Node *t;
/*************************** Move parent into left*/
t=p->branch[k-1];
t->count++;
t->key[t->count]=p->branch[k]->key[1];
t->branch[t->count]=p->branch[k]->branch[1];

/*************************** Right ==>parent*/
t=p->branch[k];//t becomes right
t->count--;
for(c=1;c<=t->count;c++)
{
t->key[c]=t->key[c+1];
t->branch[c]=t->branch[c+1];
}
/*Left first to parent*/
p->key[k]=t->key[1];
}
/*************************** Moving a key to Right*/

void Move_right(Node *p,int k)
{
int c;
Node *t;
t=p->branch[k];
for(c=t->count;c>0;c--)
{
t->key[c+1]=t->key[c];
t->branch[c+1]=t->branch[c];
}

t->branch[1]=t->branch[0];
t->count++;
t->key[1]=p->key[k];

t=p->branch[k-1];
p->key[k]=t->key[t->count];
p->branch[k]->branch[0]=t->branch[t->count];
t->count--;
}
/*****************************Moving a key to Right In B+Tree Linked list*/

void Bpls_Move_right(Node *p,int k)
{
int c;
Node *t;
t=p->branch[k];
for(c=t->count;c>0;c--)
{
t->key[c+1]=t->key[c];
t->branch[c+1]=t->branch[c];
}

t->count++;

/*Moving lest last to right first*/
t->key[1]=p->branch[k-1]->key[p->branch[k-1]->count];
t->branch[1]=  p->branch[k-1]->branch[p->branch[k-1]->count];
/*Moving left last to parent*/
t=p->branch[k-1];//t is now left node
p->key[k]=t->key[t->count]; //
//Decrimenting lesft node's count ;
t->count--;
}


/*****************************Merging Two nodes in B+Tree Linked list*/

void Bpls_Combine(Node *p,int k)
{
int c;
Node *r,*l;

r=p->branch[k];
l=p->branch[k-1];

for(c=1;c <= r->count;c++)
{
l->count++;
l->key[l->count]=r->key[c];
l->branch[l->count]=r->branch[c];
}

l->branch[0]=r->branch[0];//Adjusting linked list B+ tree

for(c=k; c < p->count ;c++){
p->key[c]=p->key[c+1];
p->branch[c]=p->branch[c+1];
}

p->count--;
free(r);
ncount--;//decrementing node count
}
/*****************************Merging Two nodes */

void Combine(Node *p,int k)
{
int c;
Node *r,*l;

r=p->branch[k];
l=p->branch[k-1];
l->count++;
l->key[l->count]=p->key[k];
l->branch[l->count]=r->branch[0];

for(c=1;c <=r->count;c++)
{
l->count++;
l->key[l->count]=r->key[c];
l->branch[l->count]=r->branch[c];
}

for(c=k; c < p->count ;c++){
p->key[c]=p->key[c+1];
p->branch[c]=p->branch[c+1];
}

p->count--;
free(r);
ncount--;
}

void Display(Node *rt)
{
int i;
if(rt)
{
if(rt->flag==KEY_ONLY)
Display(rt->branch[0]);

for(i=1;i<=rt->count;i++)
	{

	if(rt->flag==KEY_ONLY)
	{
	printf(" %d  ",rt->key[i]);
	Display(rt->branch[i]);
	}
	else
	printf(" %d [%s] ",rt->key[i],(char*)rt->branch[i]);
	}
}
}
/*******************Printing Linked list of nodes in B+Tree*/

void Bplus_Display(Node *t)
{
int i;
if(!t) {
printf("\nTree Empty!\n");
return;
}

while(t->flag!=KEY_DATA)
{
t=t->branch[0];
}
do
{
for(i=1;i<=t->count;i++)
{
printf("%d [%s] \n",t->key[i],(char*)t->branch[i]);
}
t=t->branch[0];
printf("--------\n");

}while(t);
printf("NULL");
}
/*******************Less than Query in B+Tree*/
void Less_than(key_type target)
{
int i;
Node *t=root;
if(!t) {
printf("\nTree Empty!\n");
return;
}
printf("\nQuery:Lesser==> %d :\n\n",target);
while(t->flag!=KEY_DATA)
{
t=t->branch[0];
}
do
{
for(i=1;i<=t->count;i++)
{
if(t->key[i]>=target)
return;
printf("%d -->( %s )\n",t->key[i],(char*)t->branch[i]);
}
t=t->branch[0];
//printf("-----\n");

}while(t);
}
/*******************Equal Query in B+Tree*/
void Equal_to(key_type target)
{
int pos;
Node *t=root;
if(!t) {
printf("\nTree Empty!\n");
return;
}
printf("\nQuery:Equal==> %d :\n\n",target);

t=Search(target,root,&pos);
if(!t)
{
printf("\nElement not found!\n");
return;
}
printf("%d -->( %s )\n",t->key[pos],(char*)t->branch[pos]);
}
/*******************Greater than Query in B+Tree*/

void Greater_than(key_type target)
{
int pos,i;
Node *t=root;
if(!t) {
printf("\nTree Empty!n");
return;
}
printf("\nQuery:Greater==> %d :\n\n",target);

t=Search(target,root,&pos);

if(t==NULL)
	{
	 t=start_ptr;
	}

if(pos==t->count)
{
i=1;
t=t->branch[0];
}
else
{
i=pos+1;
}
while(t)
{
do
{
printf("%d -->( %s )\n",t->key[i],(char*)t->branch[i]);
i++;
}
while(i<=t->count);
i=1;
t=t->branch[0];
//printf("-----\n");
}

}
/*******************Update Query in B+Tree*/
void Update(key_type target)
{
int pos;
Node *t=root;
char new_str[100]; 
if(!t) {
printf("\nTree Empty!\n");
return;
}
printf("\nQuery:Update==> %d :\n\n",target);

t=Search(target,root,&pos);
if(!t)
{
printf("\nElement not found!\n");
return;
}

printf("\nEnter new data: ");
scanf("%s",new_str);
free((char*)t->branch[pos]);
(char*)t->branch[pos]=(char*)malloc(strlen(new_str+1));
strcpy((char*)t->branch[pos],new_str);
printf("\nData successfully Updated!!!");
}
/*------------------------------------------------------------------------*/
/************************|    MAIN     |***********************************/
/*------------------------------------------------------------------------*/
int main()
{
	int opt;
	key_type key;
	while(TRUE)
	{
	//clrscr();
	printf("\nMENU\n----\n1-Insert\n2-Delete\n3-Display\n4-Bplus Display\n5-Less than\n6-Equal\n7-Greater than\n8-Update\n9-Node count\n10-Exit\nEnter ur choice: ");
	fflush(stdin);
	scanf("%d",&opt);
	if(opt<=8&&opt>=1)
	printf("\n###---------------<Processing...>----------------###\n");

	if(!root && opt!=1) {
				printf("\nTree Empty!\n");
					}
	else {
	switch(opt)
	{
	case 1: printf("\nEnter key:");
			  scanf("%d",&key);
			 printf("\nEnter data:");
			 fflush(stdin);
			 scanf("%s",data_str);
			 root=Insert(key,root);
			 printf("\nElement inserted successfully!\n");
			  break;

	case 2:  printf("\nEnter element which is to be deleted:");
			 scanf("%d",&key);
			 root=Del_node(key,root);
			 if(ele_find!=-1)
			 printf("\nElement deleted successfully!\n");
			 else
			 ele_find=0;
			 break;

	case 3: printf("\nElemnts in the B-Tree:\n");
				  printf("#---------------------#\n");
			  Display(root);
			  break;

	 case 4: printf("\nElemnts in the B-Tree:\n");
				  printf("#---------------------#\n");
				 Bplus_Display(root);
			  break;

	case 5:printf("\nEnter target value:");
			scanf("%d",&key);
			Less_than(key);
			break;

	case 6:printf("\nEnter target value:");
			scanf("%d",&key);
			Equal_to(key);
			break;

	case 7:printf("\nEnter target value:");
			scanf("%d",&key);
			Greater_than(key);
			break;

case 8:printf("\nEnter target value:");
			scanf("%d",&key);
			Update(key);
			break;
	case 9:printf("\nNode count :%d\n",ncount);
			 break;
	default: printf("\nProcess Exited!\n");
						  exit(EXIT_SUCCESS);
	}
	}
	if(opt<=8&&opt>=1)
	printf("\n###---------------<Stopped...!!>-----------------###\n");
	//getch();
}
}