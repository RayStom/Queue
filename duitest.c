#include "dui.h"
int main() {
	Link queque, *q=&queque;
	initLink(q);
	push(q, 80);
	push(q, 90);
	pop(q);
	push(q, 70);
	printf("队列的元素个数为：%d\n",size(q));
	printf("头元素为：%d\n", front(q));
	printf("尾元素为：%d\n", back(q));
	De *dq = createDe();
	push_Back(dq, 180);
	push_Front(dq, 160);
	push_Back(dq, 170);
	push_Front(dq, 190);
	pop_Back(dq);
	zyl(dq);
	return 0;
}
