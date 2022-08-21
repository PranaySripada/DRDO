#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct aa
{
	char sci[20];
	int level;
	int salary;
};
struct bb
{
	char name[20];
	char qual[20];
	int age;
	int salaryee;	
};
main()
{
	struct aa s;
	struct bb f;
	int i,ch1,ch,n1,n2,l1,l2,l5,k,sum3=0,sum=0,m,q,n,t,y,sum1=0,sum2=0,total,flag=0,a=0,b=0,c=0,d=0,Total;
	char l[10],l3[10],l4[10];
	FILE *f1,*f4,*f2,*f3;
		printf("\n-------------------------------------------------------------------------------------------------^_^ Welcome ^_^--------------------------------------------------------------------------------------------------\n\n--------------------------------------------------------------------------------Defence Research and develpment Organisation (DRDO)--------------------------------------------------------------------------------\n\n\n");		
	do 
	{
	printf("1.Read\n2.Display\n3.Add\n4.Searching\n5.Total Salary\n6.No.of Employees\n");
	printf("Enter Your Choice:\n");
	scanf("%d",&n);
	switch (n)
	{
		case 1:	
				f1=fopen("scientists.txt","w");
				printf("\nEnter Scientists Details \n\n");
				printf("Enter no.of Scientists---\n");
				scanf("%d",&m);
				printf("\nScientist Name\tLevel\tSalary\n");
				for(i=0;i<m;i++)
				{
	
					fscanf(stdin,"%s%d%d",s.sci,&s.level,&s.salary);
					fprintf(f1,"%s\t%d\t%d\n\n",s.sci,s.level,s.salary);
				}
				fclose(f1);

				f2=fopen("Junior Research Fellow.txt","w");
				printf("\nEnter Junior Resarch Felllow (JRF) details\n\n");
				printf("Enter no.of JRF's---\n");
				scanf("%d",&q);
				printf("Name    Quali    Age   Salary  \n");
				for(i=0;i<q;i++)
				{
					fscanf(stdin,"%s%s%d%d",f.name,f.qual,&f.age,&f.salaryee);
					fprintf(f2,"%s\t%s\t%d\t%d\n",f.name,f.qual,f.age,f.salaryee);
				}
				fclose(f2);
	
				f3=fopen("GASTrainners.txt","w");
				printf("\nEnter Graduate Apprentice ship Trainners Details\n\n");
				printf("Enter no.of Graduate Apprentite ship Trainners---\n");
				scanf("%d",&y);
				printf("Name    Quali    Age    Salary  \n");
				for(i=0;i<y;i++)
				{
					fscanf(stdin,"%s%s%d%d",f.name,f.qual,&f.age,&f.salaryee);
					fprintf(f3,"%s\t%s\t%d\t%d\n",f.name,f.qual,f.age,f.salaryee);
				}
				fclose(f3);
	
				f4=fopen("Multitasking.txt","w");
				printf("\nEnter Multi Tasking Staff Details\n\n");
				printf("Enter no.of Staff--\n");
				scanf("%d",&t);
				printf("Name    Quali    Age    Salary \n");
				for(i=0;i<t;i++)
				{
					fscanf(stdin,"%s%s%d%d",f.name,f.qual,&f.age,&f.salaryee);
					fprintf(f4,"%s\t%s\t%d\t%d\n",f.name,f.qual,f.age,f.salaryee);
				}
				fclose(f4);
			break;
	
	case 2:
			f1=fopen("scientists.txt","r");
			printf("\nScientists Details:\n");
			while(fscanf(f1,"%s%d%d",s.sci,&s.level,&s.salary)!=EOF)
			{
			fprintf(stdout,"Scientist-%s\tLevel-%d\t%d\n\n",s.sci,s.level,s.salary);
			sum=sum+s.salary;
			a++;
			}
    		fclose(f1);

			f2=fopen("Junior Research Fellow.txt","r");
			printf("\nJunior Research Fellow details:\n\n");
			printf("Name\tQuali\tAge\tSalary\n");
			while(fscanf(f2,"%s%s%d%d",f.name,f.qual,&f.age,&f.salaryee)!=EOF)
			{
			fprintf(stdout,"%s\t%s\t%d\t%d\n\n",f.name,f.qual,f.age,f.salaryee);
			sum1=sum1+f.salaryee;
			b++;
			}
			fclose(f2);
	
			f3=fopen("GASTrainners.txt","r");
			printf("\nGraduate Apprentice ship Trainners Details:\n\n");
			printf("Name\tQuali\tAge\tSalary\n");
			while(fscanf(f3,"%s%s%d%d",f.name,f.qual,&f.age,&f.salaryee)!=EOF)
			{
			fprintf(stdout,"%s\t%s\t%d\t%d\n\n",f.name,f.qual,f.age,f.salaryee);
			sum2=sum2+f.salaryee;
			c++;
			}
			fclose(f3);
	
			f4=fopen("Multitasking.txt","r");
			printf("\nMulti Tasking Staff details:\n\n");
			printf("Name\tQuali\tAge\tSalary\n");
    		while(fscanf(f4,"%s%s%d%d",f.name,f.qual,&f.age,&f.salaryee)!=EOF)
			{
			fprintf(stdout,"%s\t%s\t%d\t%d\n\n",f.name,f.qual,f.age,f.salaryee);
			sum3=sum3+f.salaryee;
			d++;
			}
			fclose(f4);
			break;
		
	
	case 3:
			printf("1.Scientist \n2.JRF's \n3.GASTrainners \n4.MultiTasking\n");
			printf("\nEnter your choice:");
			scanf("%d",&n1);
			switch (n1)
			{
				case 1:
					f1=fopen("scientists.txt","a");
				printf("\nEnter Scientists Details \n\n");
				printf("Enter no.of Scientists---\n");
				scanf("%d",&m);
				printf("\nScientist Name\tLevel\tSalary\n");
				for(i=0;i<m;i++)
				{
	
					fscanf(stdin,"%s%d%d",s.sci,&s.level,&s.salary);
					fprintf(f1,"%s\t%d\t%d\n\n",s.sci,s.level,s.salary);
				}
				fclose(f1);
				break;
				case 2:
					f2=fopen("Junior Research Fellow.txt","a");
					printf("\nEnter Junior Resarch Felllow (JRF) details\n\n");
					printf("Enter no.of JRF's---\n");
					scanf("%d",&q);
					printf("Name    Quali    Age   Salary  \n");
					for(i=0;i<q;i++)
						{
							fscanf(stdin,"%s%s%d%d",f.name,f.qual,&f.age,&f.salaryee);
							fprintf(f2,"%s\t%s\t%d\t%d\n",f.name,f.qual,f.age,f.salaryee);
						}
				fclose(f2);
				break;
				case 3:
					f3=fopen("GASTrainners.txt","a");
					printf("\nEnter Graduate Apprentice ship Trainners Details\n\n");
					printf("Enter no.of Graduate Apprentite ship Trainners---\n");
					scanf("%d",&y);
					printf("Name    Quali    Age    Salary  \n");
					for(i=0;i<y;i++)
					{
							fscanf(stdin,"%s%s%d%d",f.name,f.qual,&f.age,&f.salaryee);
							fprintf(f3,"%s\t%s\t%d\t%d\n",f.name,f.qual,f.age,f.salaryee);
					}
				fclose(f3);
				break;
				case 4:
					f4=fopen("Multitasking.txt","a");
					printf("\nEnter Multi Tasking Staff Details\n\n");
					printf("Enter no.of Staff--\n");
					scanf("%d",&t);
					printf("Name    Quali    Age    Salary \n");
					for(i=0;i<t;i++)
					{
							fscanf(stdin,"%s%s%d%d",f.name,f.qual,&f.age,&f.salaryee);
							fprintf(f4,"%s\t%s\t%d\t%d\n",f.name,f.qual,f.age,f.salaryee);
					}
					fclose(f4);
			}
		break;
	case 4:
			printf("1.Scientist \n2.JRF's \n3.GASTrainners \n4.MultiTasking\n");
			printf("\nEnter your choice:");
			scanf("%d",&n2);
			switch (n2)
			{
				case 1:f1=fopen("scientists.txt","r");
						printf("Enter Scientist Level\n");
						scanf("%d",&k);
					   while(fscanf(f1,"%s%d%d",s.sci,&s.level,&s.salary)!=EOF)
					   {
					   		if(k==s.level)
					   		{
					   			printf("%s\t%d\t%d",s.sci,s.level,s.salary);
					   			flag=1;	
							}
					   }
					   if(flag==1)
    					{
       						printf("\n Scientist  found"); ;
    					}
    					else
        					printf("\n Sorry, Scientist not found");
        				fclose(f1);
        			    break;
        			    case 2:f2=fopen("Junior Research Fellow.txt","r");
						printf("Enter JRF Name\n");
						scanf("%s",l);
						 while(fscanf(f2,"%s%s%d%d",f.name,f.qual,&f.age,&f.salaryee)!=EOF)
					   {
					   	l1=strcmp(l,f.name);
					   		if(l1==0)
					   		{
					   			printf("%s\t%s\t%d\t%d",f.name,f.qual,f.age,f.salaryee);
					   			flag=1;	
							}
					   }
					   if(flag==1)
    					{
       						printf("\n JRF  found"); ;
    					}
    					else
        					printf("\n Sorry, JRF not found");
        			    fclose(f2);
						break;
        			    case 3:f3=fopen("GASTrainners.txt","r");
						printf("Enter GASTrainner Name\n");
						scanf("%s",l3);
						 while(fscanf(f3,"%s%s%d%d",f.name,f.qual,&f.age,&f.salaryee)!=EOF)
					   {
					   	l2=strcmp(l3,f.name);
					   		if(l2==0)
					   		{
					   			printf("%s\t%s\t%d\t%d",f.name,f.qual,f.age,f.salaryee);
					   			flag=1;	
							}
					   }
					   if(flag==1)
    					{
       						printf("\n GASTrainner  found"); ;
    					}
    					else
        					printf("\n Sorry, GASTrainner not found");
						fclose(f3);
        			    break;
						case 4:f4=fopen("Multitasking.txt","r");
						printf("Enter Multitasker Name\n");
						scanf("%s",l4);
						 while(fscanf(f4,"%s%s%d%d",f.name,f.qual,&f.age,&f.salaryee)!=EOF)
					   {
					   	l5=strcmp(l4,f.name);
					   		if(l5==0)
					   		{
					   			printf("%s\t%s\t%d\t%d",f.name,f.qual,f.age,f.salaryee);
					   			flag=1;	
							}
					   }
					   if(flag==1)
    					{
       						printf("\n Multitasker  found");
    					}
    					else
        					printf("\n Sorry, Multitasker not found");
						fclose(f4);
        			    break;
			}
			break;
	case 5:
			f1=fopen("scientists.txt","r");
			f2=fopen("Junior Research Fellow.txt","r");
			f3=fopen("GASTrainners.txt","r");
			f4=fopen("Multitasking.txt","r");
			total=sum+sum1+sum2+sum3;
			printf("\nTotal Salaries =%d",total);
			fclose(f1);
			fclose(f2);
			fclose(f3);
			fclose(f4);
			break;
	case 6:
			f1=fopen("scientists.txt","r");
			f2=fopen("Junior Research Fellow.txt","r");
			f3=fopen("GASTrainners.txt","r");
			f4=fopen("Multitasking.txt","r");
			Total=a+b+c+d;
			printf("\nTotal employees =%d",Total);
			fclose(f1);
			fclose(f2);
			fclose(f3);
			fclose(f4);
		break;
		}
	printf("\npress 5 to continue\n");
			    scanf("%d",&ch1);
		}while(ch1==5);
	printf("----------------------------------------------------------------------------------Thank You------------------------------------------------------------------------------------------------------------------------------");
}
