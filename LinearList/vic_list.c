#include<stdio.h>
#include<malloc.h>

//定义一个节点
typedef struct node
{
	int data;
	struct node *next;
}Node, *pNode;

//声明function
pNode initNode();
pNode H_LinkCreate(int x);
pNode T_LinkCreate(int x);
pNode F_LinkCreate();
pNode Find(Node *, int);
//开辟首节点并初始化
pNode initNode()
{
	Node *p;
	p = (Node *) malloc(sizeof(Node));//开辟节点
	if(p == NULL)
	{
		printf("memory error!");
	}
	p -> next =NULL;//若成功，next域置null
	return p;
}

//头插法建立单链表
pNode H_LinkCreate(x)
{
	Node *pc;
	pc = initNode();//开辟首节点
	while(x > 0)
	{
		Node *pn;
		pn = (Node *)malloc(sizeof(Node));//开辟新的节点
		if(pn == NULL)
		{
			printf("memory error!");
		}
		else
		{
			pn -> data = x;//给数据域放值
			pn -> next = pc -> next;//新开辟的节点指向首节点
			//pn -> next = NULL;
			pc -> next = pn;
		}
		x--;
	}
	return pc;
}

//尾插法建立链表
pNode T_LinkCreate(x)
{
	Node *r, *s, *h;//h用于返回尾插法的头指针，若直接返回s，切记s指向链表的尾部，s->next将会越界
	h = r = initNode();
	while(x > 0)
	{
			s = (Node *)malloc(sizeof(Node));
			s -> data = x; 
			r -> next = s;
			r = s;
			x--;
	}
	return h;
}

pNode F_LinkCreate()
{
	Node *r, *s, *h;
	h = r = initNode();
	int flag = 1;
	char c;
	while(flag)
	{
		c = getchar();
		if(c!='$')
		{
			s = (Node *)malloc(sizeof(Node));
			s -> data = c;
			r -> next = s;
			r = s;
		}
		else
		{
			flag = 0;
			r -> next = NULL;
		}
	}
	return h;
}

//按序号查找
pNode Find(Node *L, int i)
{
	int j;
	Node *p;
	if(i<0)
	{
		return NULL;	
	}
	p = L;
	j = 0;
	while((p -> next != NULL) && (j < i))
	{
		p = p -> next;
		j++;
	}
	if(i == j)
		return p;
	else 
		return NULL;
}

void main()
{
	int i;
	pNode list, start, list_find;
	printf("please input number of node, and push Enter: ");
	scanf("%d",&i);
	//list = H_LinkCreate(i);
	//list = T_LinkCreate(i);
	list = F_LinkCreate();
//	for(start = list -> next; start != NULL; start = start -> next)
//		printf("%d", start -> data);
	start =  list -> next;
	list_find = Find(list, i);
//	printf("%d\n", start -> next);
	while(start)
	{
		printf("%c", start -> data);
		start = start -> next;
//		printf("while");
	//	i--;
		
	}
	printf("%d\n",list);
	printf("%d\n",list -> data);
	printf("%d\n",*start);
	printf("%d\n",*list);
	printf("99\n");
	printf("%d\n",list_find -> data);
//while	printf("main");
}
