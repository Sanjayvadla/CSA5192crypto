#include <stdio.h>
#include <math.h>
#include <string.h>

long int p, q, n, t, e, d;

int isPrime(long int);
void generateKeys();
void encryptDecrypt();

int main() {
    printf("ENTER FIRST PRIME NUMBER: ");
    scanf("%ld", &p);
    if (!isPrime(p)) {
        printf("WRONG INPUT\n");
        return 1;
    }

    printf("ENTER ANOTHER PRIME NUMBER: ");
    scanf("%ld", &q);
    if (!isPrime(q) || p == q) {
        printf("WRONG INPUT\n");
        return 1;
    }

    char msg[100];
    printf("ENTER MESSAGE: ");
    fflush(stdin);
    scanf("%s", msg);

    n = p * q;
    t = (p - 1) * (q - 1);
    generateKeys();
    encryptDecrypt(msg);

    return 0;
}

int isPrime(long int pr) {
	long int i;
    if (pr < 2) {
        return 0;
    }
    for (i = 2; i <= sqrt(pr); i++) {
        if (pr % i == 0) {
            return 0;
        }
    }
    return 1;
}

void generateKeys() {
    for (e = 2; e < t; e++) {
        if (t % e != 0 && isPrime(e) && e != p && e != q) {
            d = 1;
            while (((d * e) % t) != 1) {
                d++;
            }
            break;
        }
    }
}

void encryptDecrypt(char msg[]) {
	long int i;

    long int len = strlen(msg);
	long int encrypted[100], decrypted[100];

    for (i = 0; i < len; i++) {
        long int ch = msg[i];
        encrypted[i] = (long int)pow(ch, e) % n;
        decrypted[i] = (long int)pow(encrypted[i], d) % n;
    }

    printf("THE ENCRYPTED MESSAGE IS: ");
    for (i = 0; i < len; i++) {
        printf("%c", encrypted[i]);
    }
    printf("\n");

    printf("THE DECRYPTED MESSAGE IS: ");
    for (i = 0; i < len; i++) {
        printf("%c", decrypted[i]);
    }
    printf("\n");
}

