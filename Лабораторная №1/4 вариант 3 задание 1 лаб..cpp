# ��������  " iostream "
�������������  ������������ ����  std ;

int  main ()
{
	int i;
	��� (i = 10 ; i < 100 ; i ++)
	{
		int a, b, c;
		a = i% 10 ;
		b = i / 10 ;
		c = (a + b) + ((a + b) * (a + b));
		���� (c == i)
			cout << i << endl;
	}
	return  0 ;
}