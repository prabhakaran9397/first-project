#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(void)
{
	int t=10,semester,i,n[10],c[10];
	char s[10];
	float store,pr,sum=0.0;
	printf("\t\t\t\tCGPA Calculator\n\t\t\t\t===============\n");
	printf("Enter your semester(eg. 2): ");
	scanf("%d",&semester);
	printf("\nPlease enter grades in capital!!!\n\n");
	switch(semester){
		case 1:
			printf("Enter your English 1 grade: ");
			scanf("%s",&s[0]);
			printf("Enter your Maths 1 grade: ");
			scanf("%s",&s[1]);
			printf("Enter your Eng.phy  grade: ");
			scanf("%s",&s[2]);
			printf("Enter your  Eng.Chemistry grade: ");
			scanf("%s",&s[3]);
			printf("Enter your Computing Techniques grade: ");
			scanf("%s",&s[4]);
			printf("Enter your EG grade: ");
			scanf("%s",&s[5]);
			printf("Enter your Physics lab grade: ");
			scanf("%s",&s[6]);
			printf("Enter your Chemistry lab grade: ");
			scanf("%s",&s[7]);
			printf("Enter your Computer lab grade: ");
			scanf("%s",&s[8]);
			printf("Enter your Eng.Practice lab grade: ");
			scanf("%s",&s[9]);
			for(i=0;i<10;i++){
				if(s[i]=='A') n[i]=9;
				if(s[i]=='B') n[i]=8;
				if(s[i]=='C') n[i]=7;
				if(s[i]=='D') n[i]=6;
				if(s[i]=='E') n[i]=5;
				if(s[i]=='S') n[i]=10;
			}
			c[0]=4;c[1]=4;c[2]=3;c[3]=3;c[4]=3;c[5]=4;c[6]=1;c[7]=1;c[8]=2;c[9]=2;
			for(i=0;i<10;i++){
				sum+=n[i]*c[i];
			}
			store=sum/27.0;
			break;
		case 2:
			printf("Enter your English 2 grade: ");
			scanf("%s",&s[0]);
			printf("Enter your Math 2 grade: ");
			scanf("%s",&s[1]);
			printf("Enter your Physics grade: ");
			scanf("%s",&s[2]);
			printf("Enter your DPSD grade: ");
			scanf("%s",&s[3]);
			printf("Enter your POC grade: ");
			scanf("%s",&s[4]);
			printf("Enter your c++ grade: ");
			scanf("%s",&s[5]);
			printf("Enter your Digital lab grade: ");
			scanf("%s",&s[6]);
			printf("Enter your Programming lab grade: ");
			scanf("%s",&s[7]);
			printf("Enter your previous GPA: ");
			scanf("%f",&pr);
			pr*=27.0;
			for(i=0;i<8;i++){
				if(s[i]=='A') n[i]=9;
				if(s[i]=='B') n[i]=8;
				if(s[i]=='C') n[i]=7;
				if(s[i]=='D') n[i]=6;
				if(s[i]=='E') n[i]=5;
				if(s[i]=='S') n[i]=10;
			}
			c[0]=4;c[1]=4;c[2]=3;c[3]=3;c[4]=3;c[5]=3;c[6]=2;c[7]=2;
			for(i=0;i<8;i++){
				sum+=n[i]*c[i];
			}
			store=(sum+pr)/51.0;
			break;
		case 3:
			printf("Enter your Algebra and number theory  grade: ");
			scanf("%s",&s[0]);
			printf("Enter your Environmental science grade: ");
			scanf("%s",&s[1]);
			printf("Enter your Computer architecture grade: ");
			scanf("%s",&s[2]);
			printf("Enter your Data Structures grade: ");
			scanf("%s",&s[3]);
			printf("Enter your DBMS grade: ");
			scanf("%s",&s[4]);
			printf("Enter your Electronic  grade: ");
			scanf("%s",&s[5]);
			printf("Enter your Data structures lab grade: ");
			scanf("%s",&s[6]);
			printf("Enter your DBMS lab grade: ");
			scanf("%s",&s[7]);
			printf("Enter your previous CGPA: ");
			scanf("%f",&pr);
			pr*=51.0;
			for(i=0;i<8;i++){
				if(s[i]=='A') n[i]=9;
				if(s[i]=='B') n[i]=8;
				if(s[i]=='C') n[i]=7;
				if(s[i]=='D') n[i]=6;
				if(s[i]=='E') n[i]=5;
				if(s[i]=='S') n[i]=10;
			}
			c[0]=4;c[1]=3;c[2]=4;c[3]=3;c[4]=3;c[5]=3;c[6]=2;c[7]=2;
			for(i=0;i<8;i++){
				sum+=n[i]*c[i];
			}
			store=(sum+pr)/75.0;
			break;
		case 4:
			printf("Enter your Probability grade: ");
			scanf("%s",&s[0]);
			printf("Enter your design and analysis of algorithms grade: ");
			scanf("%s",&s[1]);
			printf("Enter your Java grade: ");
			scanf("%s",&s[2]);
			printf("Enter your OS grade: ");
			scanf("%s",&s[3]);
			printf("Enter your SE grade: ");
			scanf("%s",&s[4]);
			printf("Enter your Electrical engineering grade: ");
			scanf("%s",&s[5]);
			printf("Enter your Java lab grade: ");
			scanf("%s",&s[6]);
			printf("Enter your OS lab grade: ");
			scanf("%s",&s[7]);
			printf("Enter your previous CGPA: ");
			scanf("%f",&pr);
			pr*=75.0;
			for(i=0;i<8;i++){
				if(s[i]=='A') n[i]=9;
				if(s[i]=='B') n[i]=8;
				if(s[i]=='C') n[i]=7;
				if(s[i]=='D') n[i]=6;
				if(s[i]=='E') n[i]=5;
				if(s[i]=='S') n[i]=10;
			}
			c[0]=4;c[1]=4;c[2]=4;c[3]=3;c[4]=3;c[5]=3;c[6]=2;c[7]=2;
			for(i=0;i<8;i++){
				sum+=n[i]*c[i];
			}
			store=(sum+pr)/100.0;
			break;
		case 5:
			printf("Enter your Data Comm. and computer net. grade: ");
			scanf("%s",&s[0]);
			printf("Enter your Micropro. and Mic.Controllers grade: ");
			scanf("%s",&s[1]);
			printf("Enter your System Software Internals grade: ");
			scanf("%s",&s[2]);
			printf("Enter your Theory of computation grade: ");
			scanf("%s",&s[3]);
			printf("Enter your OOPD grade: ");
			scanf("%s",&s[4]);
			printf("Enter your Employability Skills grade: ");
			scanf("%s",&s[5]);
			printf("Enter your Case Tolls Lab grade: ");
			scanf("%s",&s[6]);
			printf("Enter your Communication lab grade: ");
			scanf("%s",&s[7]);
			printf("Enter your Micro processors lab grade: ");
			scanf("%s",&s[8]);
			printf("Enter your previous CGPA: ");
			scanf("%f",&pr);
			pr*=100.0;
			for(i=0;i<9;i++){
				if(s[i]=='A') n[i]=9;
				if(s[i]=='B') n[i]=8;
				if(s[i]=='C') n[i]=7;
				if(s[i]=='D') n[i]=6;
				if(s[i]=='E') n[i]=5;
				if(s[i]=='S') n[i]=10;
			}
			c[0]=4;c[1]=3;c[2]=3;c[3]=3;c[4]=3;c[5]=1;c[6]=2;c[7]=2;c[8]=2;
			for(i=0;i<9;i++){
				sum+=n[i]*c[i];
			}
			store=(sum+pr)/123.0;
			break;
		case 6:
			printf("Enter your AI grade: ");
			scanf("%s",&s[0]);
			printf("Enter your Compiler Design grade: ");
			scanf("%s",&s[1]);
			printf("Enter your Computer graphics and multimedia grade: ");
			scanf("%s",&s[2]);
			printf("Enter your Programming paradgims grade: ");
			scanf("%s",&s[3]);
			printf("Enter your DSP grade: ");
			scanf("%s",&s[4]);
			printf("Enter your Elective 1 grade: ");
			scanf("%s",&s[5]);
			printf("Enter your Computer Graphics lab grade: ");
			scanf("%s",&s[6]);
			printf("Enter your Project lab grade: ");
			scanf("%s",&s[7]);
			printf("Enter your previous CGPA: ");
			scanf("%f",&pr);
			pr*=123.0;
			for(i=0;i<8;i++){
				if(s[i]=='A') n[i]=9;
				if(s[i]=='B') n[i]=8;
				if(s[i]=='C') n[i]=7;
				if(s[i]=='D') n[i]=6;
				if(s[i]=='E') n[i]=5;
				if(s[i]=='S') n[i]=10;
			}
			c[0]=3;c[1]=4;c[2]=3;c[3]=3;c[4]=3;c[5]=3;c[6]=2;c[7]=2;
			for(i=0;i<8;i++){
				sum+=n[i]*c[i];
			}
			store=(sum+pr)/146.0;
			break;
		case 7:
			printf("Enter your Management grade: ");
			scanf("%s",&s[0]);
			printf("Enter your Mobile and pervasive Com. grade: ");
			scanf("%s",&s[1]);
			printf("Enter your Parallel Programming grade: ");
			scanf("%s",&s[2]);
			printf("Enter your Security in computing grade: ");
			scanf("%s",&s[3]);
			printf("Enter your Elective 1 grade: ");
			scanf("%s",&s[4]);
			printf("Enter your Elective 2 grade: ");
			scanf("%s",&s[5]);
			printf("Enter your Moblie App Development lab grade: ");
			scanf("%s",&s[6]);
			printf("Enter your Software Development  lab grade: ");
			scanf("%s",&s[7]);
			printf("Enter your previous CGPA: ");
			scanf("%f",&pr);
			pr*=146.0;
			for(i=0;i<8;i++){
				if(s[i]=='A') n[i]=9;
				if(s[i]=='B') n[i]=8;
				if(s[i]=='C') n[i]=7;
				if(s[i]=='D') n[i]=6;
				if(s[i]=='E') n[i]=5;
				if(s[i]=='S') n[i]=10;
			}
			c[0]=3;c[1]=3;c[2]=3;c[3]=3;c[4]=3;c[5]=3;c[6]=2;c[7]=2;
			for(i=0;i<8;i++){
				sum+=n[i]*c[i];
			}
			store=(sum+pr)/168.0;
			break;
		case 8:
			printf("Enter your Elective 4 grade: ");
			scanf("%s",&s[0]);
			printf("Enter your Elective 5 grade: ");
			scanf("%s",&s[1]);
			printf("Enter your Project Work grade: ");
			scanf("%s",&s[2]);
			printf("Enter your previous CGPA: ");
			scanf("%f",&pr);
			pr*=168.0;
			for(i=0;i<3;i++){
				if(s[i]=='A') n[i]=9;
				if(s[i]=='B') n[i]=8;
				if(s[i]=='C') n[i]=7;
				if(s[i]=='D') n[i]=6;
				if(s[i]=='E') n[i]=5;
				if(s[i]=='S') n[i]=10;
			}
			c[0]=3;c[1]=3;c[2]=6;
			for(i=0;i<3;i++){
				sum+=n[i]*c[i];
			}
			store=(sum+pr)/180.0;
			break;
		default:
			printf("Please enter your valid semester %c%c%c",1,1,1);
			break;
	}
	printf("Your CGPA is %.4f\n",store);
	while(t--)printf("\n");
	return 0;
}
