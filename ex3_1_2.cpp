# include <iostream.h>



void main()

{

	int i, j, m;

	j = 0;

	cout<<"请输入一个整数："<<endl;

	cin>>i;

	if (i <= 0)

	{

		j = 1;

	}

	else

	{

		for (m = i; m > 0;)

		{

			m = m / 10;

			j++;

		}

	}



	switch(j)

	{	

	case 1: cout<<"其数值小于10"<<endl;

			break;

	case 2: cout<<"其数值在10~99"<<endl;

			break;

	case 3: cout<<"其数值在100~999"<<endl;

			break;

	default: cout<<"其数值大于1000"<<endl;

	}

}		