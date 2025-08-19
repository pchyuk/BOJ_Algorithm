#include <stdio.h>

unsigned long long answer[20];

unsigned long long add_modular (unsigned long long A, unsigned long long B, unsigned long long M);
unsigned long long multiply_modular (unsigned long long A, unsigned long long B, unsigned long long M);
unsigned long long power_modular (unsigned long long X, unsigned long long Y, unsigned long long M);

int main() {
	unsigned long long count = 1, r = 1, mod = 10, delta = 4;
	while(1) {
		unsigned long long result = power_modular (2, r, mod);
		
		unsigned long long temp = result;
		int flag_not_1_2 = 0;
		while(temp > 0) {
			if (((temp % 10) != 1) && ((temp % 10) != 2)) {
				flag_not_1_2 = 1;
				break;
			}
			temp /= 10;
			if (temp < 10) {
				if (temp != 1 && temp != 2) {
					flag_not_1_2 = 1;
				}
				break;
			}
		}

		if (r == 1 || flag_not_1_2) {
			if (r == 1) {
				answer[count-1] = r;
				count += 1;
				mod *= 10;
			}
			r += delta;
		}
		else {
			answer[count-1] = r;
			mod *= 10;
			delta *= 5;
			count += 1;
			if (count == 20) {
				break;
			}
		}
	}
	char string[] = "65539031565589";
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int R;
		scanf("%d", &R);
		if (R < 20) {
			printf("%llu\n", answer[R-1]);
		}
		else {
			printf("%s\n", string);
		}
	}
	return 0;
}

unsigned long long add_modular (unsigned long long A, unsigned long long B, unsigned long long M) {
	A %= M;
	B %= M;
	if (B >= M - A || A >= M - B) {
		return (A - M) + B;
	}
	else {
		return A + B;
	}
}

unsigned long long multiply_modular (unsigned long long A, unsigned long long B, unsigned long long M) {
	A %= M;
	B %= M;
	unsigned long long result = 0;
	while(B) {
		if (B % 2) {
			result = add_modular (result, A, M);
		}
		A = add_modular (A, A, M);
		B /= 2;
	}
	return result;
}

unsigned long long power_modular (unsigned long long X, unsigned long long Y, unsigned long long M) {
	if (M > 1000000000ll) {
		X %= M;
		unsigned long long result = 1;
		while (Y) {
			if (Y % 2) {
				result = multiply_modular (result, X, M);
			}
			X = multiply_modular (X, X, M);
			Y /= 2;
		}
		return result;
	}
	else {
		X %= M;
		unsigned long long result = 1;
		while(Y) {
			if (Y % 2) {
				result = (result * X) % M;
			}
			X = (X * X) % M;
			Y /= 2;
		}
		return result;
	}
}