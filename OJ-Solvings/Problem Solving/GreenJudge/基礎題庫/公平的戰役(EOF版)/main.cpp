#include <stdio.h>

int main() 
{
	int a,b,x;
	while(scanf("%d%d",&a,&b)==2)		/* scnaf �^�ǭȬO "�޼Ʀ��\ match ���ƥ�"
											: ex:
											: int a1, a2, a3;
											: int ret = scanf("%d%d%d", &a1, &a2, &a3);
											: �p�G�ϥΪ̿�J 10 22 12
											: �^�ǭ� ret = 3
											: �p�G�ȥΪ̿�J 10 22 ss
											: �̫�@�Ӥ޼ƨS�� match ��
											: �^�ǭ� ret 								*/
										/* feof(stdin) �� ferror(stdin)���� 
											��Ū�����ɮ׵�����Ū�����~�ɡA
											���̪��Ǧ^�ȬO true�A
											�A�i�H�� if (feof(stdin)) break; �o�˪��g�k�A
											�O�o�n��b scanf ���U�@��C					*/
	{
		if(a>b)
			printf("A %d\n",a-b);
		else
		{
			if(b>a)
				printf("B %d\n",b-a);
			else
				printf("0\n");
		}
	}
}
