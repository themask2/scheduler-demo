#include <stdio.h>

int main() {
  int a[5];
  int n, i, flag;
  int counter[5];

  /* Inicia os contadores */
  for (i = 0; i <= 4; i++) {
  	counter[i] = 1;
  }

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (i=0; i<n; i++) {
  	flag = 1;
    /* Imprime resultado da n-esima iteracao do scheduler */
  	if (counter[0] == a[0]) {
  		printf("0");
  		counter[0] = 1; /*reinicia contador*/
  		flag = 0;
  	} else {
  		counter[0]++;
  	}

  	if (counter[1] == a[1]) {
  		printf("1");
  		counter[1] = 1; /*reinicia contador*/
  		flag = 0;
  	} else {
  		counter[1]++;
  	}

  	if (counter[2] == a[2]) {
  		printf("2");
  		counter[2] = 1; /*reinicia contador*/
  		flag = 0;
  	} else {
  		counter[2]++;
  	}

  	if (counter[3] == a[3]) {
  		printf("3");
  		counter[3] = 1; /*reinicia contador*/
  		flag = 0;
  	} else {
  		counter[3]++;
  	}

  	if (counter[4] == a[4]) {
  		printf("4");
  		counter[4] = 1; /*reinicia contador*/
  		flag = 0;
  	} else {
  		counter[4]++;
  	}

  	if (flag) {
  		printf("-");
  	}
  	printf("\n");
  }

  return 0;
}
