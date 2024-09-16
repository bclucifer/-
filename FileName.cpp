#include <stdio.h>
\\将货物摆放在货架上
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
int quantity = 0;
scanf_s("%d %c %d", &channl, &name[channl - 1], % quantity;)
int total_price = 0;
total_price = price[channl - 1] * quantity;
quantity[channl - 1] -= quantity;
 
int insert_coin = 0;
int coin = 0;
char s[4]


while (insert_coin < total_price){
	if (scanf("%d", &coin) == 1) {
		printf("投币不足");
		scanf_s("%d", &coin);
		insert_coin += coin;
	}
	else if{if (scanf("%s", s) && strcmp(s, "back") == 0) {
		insert_money -= coin;
	}
}
    