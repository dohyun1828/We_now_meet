#include <stdio.h>

int arr[1000];
int user[3][6];

int main() {
	int n = 0;		//몇명
	scanf("%d", &n);
	int h = 0;
	scanf("%d", &h);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d %d", &user[i][0],& user[i][1], &user[i][2], &user[i][3], &user[i][4]);		//일단 5개 받아서 겹치는지만 보여주기 몇개받을지만 정해주면 됨
	}
	for (int i = 0; i < n; i++)																			//유저별 스케쥴 통합, 누가 안되는지 보려면 배열1차원 추가
	{
		for (int j = 0; j < 5; j++)
		{
			arr[user[i][j]]++;																				
		}
	}
	for (int i = 0; i < 5; i++)																			//24시간으로 할거면 24로 
	{
		int j = 0;

		for (j = 0; j < h; j++)																			//h시간만큼 모두가 가능해야 됨
		{
			if (arr[i + j] != 0)																		//i시간부터 j시간만큼 불가능하면 다른 i시간 탐색
			{
				break;
			}
		}
		if(j==h)																				//break에서 안빠지면 j가 h만큼 증가. 모두가 되는 시간, i시간부터 시작해서 h만큼 모두가 가능
		{
			printf("%d\n", i);
		}
	}
}