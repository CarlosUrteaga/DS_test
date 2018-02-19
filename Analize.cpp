
#define MAX_LEN 80
#define Column_Len 139349
#define tst 2;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <cmath>
#include <string.h> 
bool boolFnEsta(int array[], int intSize, int intValue);
char* substring(char*, int, int);
int main(int argc, char* argv[])
{
	FILE * fp;
	ssize_t read;
	size_t len = 0;
	char * line = NULL;
	char * line2 = NULL;
	int intCount[10];
	for (int i = 0; i < 10; ++i)
	{
		intCount[i]=0;
	}
	fp = fopen("train.csv", "r");
	char subbuff[5];
	char Vchar[1000];
	//int int
	while ((read = getline(&line, &len, fp)) != -1){
		char *pt;
		pt = strtok (line,",");
		int intPtTimes = 0;
		while (pt != NULL) {
			if (intPtTimes==0){

				switch (atoi(pt)+'0'){
					case '0':
					intCount[0]++;
					break;
					case '1':
					intCount[1]++;
					break;
					case '2':
					intCount[2]++;
					break;
					case '3':
					intCount[3]++;
					break;
					case '4':
					intCount[4]++;
					break;
					case '5':
					intCount[5]++;
					break;
					case '6':
					intCount[6]++;
					break;
					case '7':
					intCount[7]++;
					break;
					case '8':
					intCount[8]++;
					break;
					case '9':
					intCount[9]++;
					break;
					default:
					printf("%s\n", "nada");
				}

			
			}
			pt = strtok (NULL, ",");
			
			intPtTimes ++;

		}
 		//printf("%s\n", line2);
		// Semana
		intPtTimes =0;

	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%i: %i \n",i, intCount[i] );
	}
	return 0;
}

bool boolFnEsta(int array[], int intSize, int intValue){
	int i = 0;
	bool boolEsta = true;
	while(i < intSize && boolEsta){
		if (array[i] == intValue)
			return boolEsta;
	}
	return false;
}

