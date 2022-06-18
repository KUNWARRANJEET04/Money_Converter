#include<stdio.h>
#include<stdlib.h>
void main()
{
	float ans,ans1,ans2,ru;
	int ch;
	{
		printf("\n\n 1.Rupees TO Doller");
		printf("\n\n 2.Doller TO Ruppes");
		printf("\n\n 3.Rupees TO Euro");
		printf("\n\n 4.Euro TO Ruppes");
		printf("\n\n 5.Rupees TO Dinar");
		printf("\n\n 6.Dinar TO Ruppes");
		printf("\n\n 7.Ruppes TO ALL");
		printf("\n\n 8. Exit");
		printf("\n\nEnter your choice=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\n\nEnter the currency in Rupees=");
				scanf("%f",&ru);
				ans=ru/78;
				printf("\n\nThe currency is doller is= %.2f$",ans);
				break;
			case 2:printf("\n\nEnter the currency in Doller=");
				scanf("%f",&ru);
				ans1=ru*78;
				printf("\n\nThe currency in Ruppes is= %.2f",ans1);
				break;
			case 3:printf("\n\nEnter the currency in Rupees=");
				scanf("%f",&ru);
				ans=ru/82;
				printf("\n\nThe currency is Euro is= %.2f",ans);
				break;
			case 4:printf("\n\nEnter the currency in Euro=");
				scanf("%f",&ru);
				ans1=ru*82;
				printf("\n\nThe currency in Ruppes is= %.2f",ans1);
				break;
			case 5:printf("\n\nEnter the currency in Rupees=");
				scanf("%f",&ru);
				ans=ru/255;
				printf("\n\nThe currency is Dinar is= %.2f",ans);
				break;
			case 6:printf("\n\nEnter the currency in Dinar=");
				scanf("%f",&ru);
				ans1=ru*255;
				printf("\n\nThe currency in Ruppes is= %.2f",ans1);
				break;
			case 7:printf("\n\nEnter amount in Ruppes=");
			    scanf("%f",&ru);
			    ans=ru/78;ans1=ru/82;ans2=ru/255;
			    printf("\n\nThe currency is doller is= %.2f$",ans);
			    printf("\n\nThe currency in Euro is= %.2f",ans1);
			    printf("\n\nThe currency in Dinar is= %.2f",ans2);
			case 8:exit(0);
		}
	}
	getch();

}
