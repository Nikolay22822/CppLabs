# включить  " iostream "
# включить  " cmath "
использование  пространства имен  std ;
int  main ()
{
	double a, b, c, x;
	cout << " введите a, a! = 0 " << endl;
	cin >> a >> b >> c;
	если (a == 0 )
		cout << " error: a = 0 " << endl;
	еще
	{
		double D = (b * b) - ( 4 * (a * c));
		если (D < 0 )
		cout << " Без корней " << endl;
		еще
		{
			double X1 = (-b + sqrt (D)) / ( 2 * a);
			double X2 = (-b - sqrt (D)) / ( 2 * a);
			если (X1 == X2)
				cout << " X = " << X1 << endl;
			еще
				cout << " X1 = " << X1 << endl;
			cout << " X2 = " << X2 << endl;
		}

	}
	
	return  0 ;

}
