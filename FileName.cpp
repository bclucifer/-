#include <stdio.h>
#include <string.h>
int main()
{
	double price[5] = { 0 };
	char name[6] = { '0' };
	int channl = 0;
	int quantity[5] = { 0 };
	int i = 0;
	for (i = 0; i <= 5; i++) {
		scanf_s("%d ", &channl);
		scanf_s("%c ", &name[channl - 1]);
		scanf_s("%lf ", &price[channl - 1]);
		scanf_s("%d", &quantity[channl - 1]);
		printf("货物%c摆放在%d通道，单价为%lf，数量为%d个", name[channl - 1], channl, price[channl - 1], quantity[channl - 1]);
	}
	int number = 0;
	scanf_s("%d %c %d", &channl, &name[channl - 1], &number);
	int total_price = price[channl - 1] * number;
	quantity[channl - 1] -= number;

	char end[4] = { 'e','n','d',0 };
	char back[5] = { 'b','a','c','k',0 };
	char select[10];
	int total = 0;
	int num = 0;
	int amount;

begin:

	while (strcmp(select, end) != 0) {
		printf("please choose the product");
		scanf_s("%s", select);
		if (strcmp(select, back) == 0 && num <= 2) {
			quantity[channl - 1] += amount;
			total -= price[channl - 1];
			num++;
			printf("please succeed");
		}
		else if (num > 2 && strcmp(back, select) = {
		   printf("sorry,the num of returns are exceeded");
			}
		else if (strcmp(end, select) == 0{
			break}
		else {
			printf("please select the commodity\n");
			scanf_s("%d %d", channl, amount);
			if quantity[channl - 1] > amount{
			printf("please continue");
			quantity[channl - 1] -= amount
				total += amount * price[channl - 1];
				scanf_s("%d %d", name[channl - 1], amount);
			}
			else {
				printf("the commodity is insufficient");
			}
		}
	}

