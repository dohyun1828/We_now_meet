#include <stdio.h>

int arr[1000];
int user[3][6];

int main() {
	int n = 0;		//���
	scanf("%d", &n);
	int h = 0;
	scanf("%d", &h);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d %d", &user[i][0],& user[i][1], &user[i][2], &user[i][3], &user[i][4]);		//�ϴ� 5�� �޾Ƽ� ��ġ������ �����ֱ� ��������� �����ָ� ��
	}
	for (int i = 0; i < n; i++)																			//������ ������ ����, ���� �ȵǴ��� ������ �迭1���� �߰�
	{
		for (int j = 0; j < 5; j++)
		{
			arr[user[i][j]]++;																				
		}
	}
	for (int i = 0; i < 5; i++)																			//24�ð����� �ҰŸ� 24�� 
	{
		int j = 0;

		for (j = 0; j < h; j++)																			//h�ð���ŭ ��ΰ� �����ؾ� ��
		{
			if (arr[i + j] != 0)																		//i�ð����� j�ð���ŭ �Ұ����ϸ� �ٸ� i�ð� Ž��
			{
				break;
			}
		}
		if(j==h)																				//break���� �Ⱥ����� j�� h��ŭ ����. ��ΰ� �Ǵ� �ð�, i�ð����� �����ؼ� h��ŭ ��ΰ� ����
		{
			printf("%d\n", i);
		}
	}
}