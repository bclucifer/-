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
	int num = 0;
	int amount = 0;

begin:

	while (strcmp(select, end) != 0) {
		printf("please choose the product");
		scanf_s("%s", select);
		if (strcmp(select, back) == 0 && num <= 2) {
			quantity[channl - 1] += amount;
			total_price -= price[channl - 1];
			num++;
			printf("please succeed");
		}
		else if (num > 2 && strcmp(back, select) == 0) {
			printf("sorry,the num of returns are exceeded");
		}
		else if (strcmp(end, select) == 0) {
			break;
		}
		else {
			printf("please select the commodity\n");
			scanf_s("%d %d", channl, amount);
			if (quantity[channl - 1] > amount) {
				printf("please continue");
				quantity[channl - 1] -= amount;
				total_price += amount * price[channl - 1];
				scanf_s("%d %d", name[channl - 1], amount);
			}
			else {
				printf("the commodity is insufficient");
			}
		}
	}

	int input = 0;
	int pay = 0;
	scanf_s("%d", input);
	while (pay < total_price) {
		printf("please continue");
		scanf_s("%d", input);
		if (input != 1 && input != 2 && input != 5) {
			printf("please cheak your par value\n");
		}
		else {
			pay += input;
		}
		if (pay > total_price)
			break;
	}

	int change = 0;
	change = pay - total_price;
	printf("here is your change %d ", change);

	int choose = 0;
	scanf_s("%d", choose);
	if (choose == 1) {
		total_price = 0;
		select[0] = '0';
		num = 0;
		goto begin;
	}
	else {
		printf("thanks!");
	}

	return 0;
}



