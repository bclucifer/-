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
		printf("����%c�ڷ���%dͨ��������Ϊ%lf������Ϊ%d��", name[channl - 1], channl, price[channl - 1], quantity[channl - 1]);
	}
	int number = 0;
	scanf_s("%d %c %d", &channl, &name[channl - 1], &number);
	int total_price = price[channl - 1] * number;
	quantity[channl - 1] -= number;

	int insert_coin = 0;
	int coin = 0;
	char s[4];

	while (insert_coin < total_price) {
		if (scanf_s("%d", &coin) == 1) {
			insert_coin += coin;
			scanf_s("%d", &coin);
		}
		else if (scanf_s("%s", s) && strcmp(s, "back") == 0)
			insert_coin -= coin;
	}

	int change = insert_coin - total_price;
	if (change > 0) {
		printf("����%dԪ", change);
	}
	else {
		printf("��������");
	}
}

char name[10];
char n;
int price, quantity, channel, single_price, total_price = 0;
while (scanf("%s", name), strcmp(name, "END") != 0) {

	if (strcmp(name, "back") == 0) quantity = -quantity;
	else {
		printf("please succeed");
		n = name[0];
		scanf("%d %d", &channel, &quantity);
	}
	single_price = price[channl - 1];
	total_price += single_price;
}