#include <stdio.h>
#include <string.h>

int isCharRepet(char *string, int leng);

void main() {
	
	int ret = 0, leng = 0;
	char string1[] = "abcdefghijklmnopqrsabcdefgtuvwxyz";

	leng = strlen(string1);
	printf("Length %d\n", leng);

	
	ret = isCharRepet(string1, leng);

	
	if ( ret == 0 ) {
		printf ("No Character repeted\n");
	}
	else {
		printf ("Character is repeted\n");
	}
}	
	

int isCharRepet(char *string1, int leng) {

        int i =0, no = 0, temp = 0;
        int table[256] = { 0 };

        for (i =0; i < leng; i++) {
                temp = 0;
                printf("String char srtring[%d] : %c\n", i, string1[i]);
                temp = (int)string1[i];
                printf("String int %d\n", temp);
                table[temp] = table[temp] + 1;
                if (table[temp] > 1 ) {
                        printf ("Character %c is repeted\n", string1[i]);
                }
        }

        for (i = 0; i < 256 ; i++) {
                if (table[i] > 1 ) {
                        no = no + 1;
                }
        }

	return no;
}



