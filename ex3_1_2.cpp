# include <iostream.h>



void main()

{

	int i, j, m;

	j = 0;

	cout<<"������һ��������"<<endl;

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

	case 1: cout<<"����ֵС��10"<<endl;

			break;

	case 2: cout<<"����ֵ��10~99"<<endl;

			break;

	case 3: cout<<"����ֵ��100~999"<<endl;

			break;

	default: cout<<"����ֵ����1000"<<endl;

	}

}		