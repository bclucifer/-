#include <stdio.h>
int main(){
	double price[5] = { 0 };
	char name[6] = { '0' };
int channl=0;
int quantity[5] = { 0 };
int i = 0;
for (i = 0; i <= 5; i++) {
	scanf_s("%d ", &channl);
	scanf_s("%c ", &name[channl-1]);
	scanf_s("%lf ", &price[channl-1]);
	scanf_s("%d", &quantity[channl-1]);
	printf("货物%c摆放在%d通道，单价为%lf，数量为%d个", name[channl-1], channl, price[channl-1], quantity[channl-1]);
}
return 0;
}