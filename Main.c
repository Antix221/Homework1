#include <stdio.h>
#define N 5
#define M 5
int main()             /*группа 1142 Ермаков Алексей*/
{
	int array[N][M];
	int i, j;
	for (i = 0; i < N; ++i) {
		for (j = 0; j < M; ++j) {
			if (i == 0 || j == 0) {
				array[i][j] = 1;
			}
			else
				array[i][j] = rand() % 2;
			if (i % (N - 1) == 0) {
				array[i][j] = 1;
			}
			else if (j % (M - 1) == 0) {
				array[i][j] = 1;
			}
		}
	}
	int pat = 0;
	for (i = 0; i < N; ++i) {
		for (j = 0; j < M; ++j) {
			printf("%d", array[i][j]);
			printf(" ");
			++pat;
			if (pat == M) {
				printf("\n");
				pat = 0;
			}
		}
	}
}
 
