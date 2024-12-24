#include <stdio.h>

void reverse(char s[]) {
	int i, j;
	char temp;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

void itoa(int n, char s[]) {
	int i, sign;
	if ((sign = n) < 0)  // record sign
		n = -n;          // make n positive
	i = 0;
	do {       // generate digits in reverse order
		s[i++] = n % 10 + '0';  // get next digit
	} while ((n /= 10) > 0);    // delete it
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

int main() {
	int num = 12345;
	char str[20];
	itoa(num, str);
	printf("Number: %d\nString: %s\n", num, str);
	return 0;
}
#include <string.h>

void itoa(int n, char s[]) {
	int i, sign;
	if ((sign = n) < 0)  // record sign
		n = -n;          // make n positive
	i = 0;
	do {       // generate digits in reverse order
		s[i++] = n % 10 + '0';  // get next digit
	} while ((n /= 10) > 0);    // delete it
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

int main() {
	int num = 12345;
	char str[20];
	itoa(num, str);
	printf("Number: %d\nString: %s\n", num, str);
	return 0;
}
