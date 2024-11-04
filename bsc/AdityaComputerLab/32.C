#include<stdio.h>
main()
{
	float s1,s2,s3;
	clrscr();
	printf("Enter side1 of triangle :");
	scanf("%f",&s1);
	printf("Enter side2 of triangle :");
	scanf("%f",&s2);
	printf("Enter side3 of triangle :");
	scanf("%f",&s3);
	if((s3*s3)==(s1*s1)+(s2*s2) || (s1*s1)==(s2*s2)+(s3*s3) || (s2*s2)==(s1*s1)+(s3*s3))
		printf("Right angled Triangle");
	if(s1==s2 && s2==s3)
		printf("Equilateral Traingle ");
	if(s1==s2 || s2==s3 || s3==s1)
		printf("Isoceles Triangle    ");
	if(s1!=s2 && s2!=s2 && s3!=s1)
		printf("Scalen Triangle");
	getch();
}

