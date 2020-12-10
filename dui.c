#include "dui.h"


//初始化
void initLink(Link *q) {
	q->front = (node*)malloc(sizeof(node));
	q->rear = q->front;
}

//判断是否为空
int empty(Link *q) {
	return q->front == q->rear;
}

//x进列
void push(Link *q, datatype x) {
	node *t = (node*)malloc(sizeof(node));
	t->data =x;
	t->next =NULL;
	q->rear->next = t;
	q->rear = t;
}

//出列
void pop(Link *q) {
	if (empty(q)) exit(1);
	node *p = q->front->next;
	q->front->next = p->next;
	free(p);
}

//取头值
datatype front(Link *q) {
	return q->front->next->data;
}

//取尾值
datatype back(Link *q) {
	return q->rear->data;
}

//求个数
int size(Link *q) {
	node *p = q->front->next;
	int k = 0;
	while (p) {
		k++;
		p = p->next;
	}
	return k;
}

//创建双端
De* createDe() {
	De *head;
	head = (De*)malloc(sizeof(De));
	head->left = head -> right = head;
	return head;
}

//求个数
void length(De *dq) {
	Node *p = dq->right;
	int k = 0;
	while (p != dq) {
		k++;
		p = p->right ;
	}
	return k;
}

//判断是否为空
int dempty(De *dq) {
	return dq-> right == dq;
}

//取头值
datatype Front(De *dq) {
	if (dempty(dq)) exit(1);
	return dq->right->data;
}

//取尾值
datatype Back(De *dq) {
	if (dempty(dq)) exit(1);
	return dq->left->data;
}

//头插x
void push_Front(De *dq,datatype x) {
	Node *s = (Node*)malloc(sizeof(Node));
	s->data = x;
	s->left = dq;
	s->right = dq->right;
	dq->right->left = s;
	dq->right = s;
}

//尾插x
void push_Back(De *dq, datatype x) {
	Node *s = (Node*)malloc(sizeof(Node));
	s->data = x;
	s->left = dq->left;
	s->right = dq;
	dq->left->right = s;
	dq->left = s;
}

//删头元素
void pop_Front(De *dq) {
	if (dempty(dq)) exit(1);
	Node *p = dq->right;
	p->right->left = dq;
	dq->right = p->right;
	free(p);
}

//删尾元素
void pop_Back(De *dq) {
	if (dempty(dq)) exit(1);
	Node *p = dq ->left;
	p->left->right = dq;
	dq->left = p->left;
	free(p);
}

//清空队列
void clear(De *dq) {
	Node *p, *q;
	p = dq->right;
	while (p != dq) {
		q = p;
		p = p->right;
		free(q);
	}
	dq->left = dq->right = dq;
}

//输出元素
void zyl(De *dq) {
	Node *p = dq->right;
	while (p != dq) {
		printf("%d ",p->data);
		p = p->right;
	}
	printf("\n");
}


