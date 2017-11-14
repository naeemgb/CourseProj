//**
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define pi 3.14192
int main()
{
float a;//we want to support floating point number
while(1)
{

printf("what do you want to draw\n0 for exit\n1for draw pacman\n2 for draw schedule\n");
    scanf("%f",&a);
    if(a==0)
        break;

    else if(a==1)
    {

    float r,deg;
    char ch;
	int k;
            printf("enter the packman radius(4 - 20):");
        scanf("%f",&r);
       while(r<4 || r>20){
        printf("please enter between (4 - 20):");
        scanf("%f",&r);
        }

        printf("enter the packmans mouth degree(0, 60, 90, 120):");
        scanf("%f",&deg);
        while(deg!=0 && deg!=60 && deg!=90 && deg!=120){
        printf("please enter (0, 60, 90, 120):");
        scanf("%f",&deg);
        }

         printf("enter the packmans direction(u,d,l,r)");
        ch=getchar();
       while(ch!='u'&& ch!='d' && ch!='l' && ch!='r'){
        printf("please enter (u,d,l,r)");
        ch=getchar();
        }
    switch (ch)
    {
    case 'r':
    {
     float u;
     u=deg*pi/360;
    for(int i=r;i>-r;i--){
    printf("         ");
        for(int j=-r+1;j<r;j++){
               if(j*j+5*i*i<=(int)r*(int)r && j!=(int)r )
                { if(i>-tan(u)*j/2.1 && i<tan(u)*j/2.1)
                   printf(" ");
                   else
                   printf("#");
                   }
                else
                            printf(" ");}
                //end of second for
                printf("\n");}//end of first for*/
                break;
    }//case r
        case 'l':
        {
             float u;
     u=tan(deg*pi/360);
    for(int i=r;i>-r;i--){
    printf("         ");
        for(int j=-r+1;j<r;j++){
                 if(j*j+5*i*i<=(int)r*(int)r && j!=(int)r )
                {  if(i<-u*j/2.1 && i>u*j/2.1)
                   printf(" ");
                   else
                   printf("#");
                   }
                else
                            printf(" ");}
                //end of second for
                printf("\n");}
                break;
        }
        case 'u':
        {
              float u;
     u=(deg*pi/360);
			 if(deg==0)
						k=1000000000;
					else
						k=0;
    for(int i=r;i>=-r;i--){
    printf("         ");
        for(int j=-r+1;j<r;j++){
                if(j*j+5*i*i<=(int)r*(int)r && j!=(int)r )
                    {
						if(i>(int)(tan(pi/2-u)*j/2) && i>-(int)(tan(pi/2-u)*j/2+k))
                            printf(" ");
                   else
                            printf("#");
                   }
                else
                            printf(" ");}
                //end of second for
                        printf("\n");}
                break;
        }
        case 'd':
        {
          float u;
     u=(deg*pi/360);
				if(deg==0)
						k=100000000;//for ...
					else
						k=0;
    for(int i=r-1;i>-r;i--){
    printf("         ");
        for(int j=-r+1;j<r;j++){
                if(j*j+5*i*i<=(int)r*(int)r && j!=(int)r )
                {

                  if(i<-tan(pi/2-u)*j/2-k && i<tan(pi/2-u)*j/2)
                   printf(" ");
                   else
                   printf("#");
                   }
                else
                            printf(" ");}
                //end of second for
                printf("\n");}
                break;

        }
        default:
            {
            printf("bebin3 ta adad bishtar nis khodayee?");
            break;
            }
        }//end of case u
    }//end of switch


    else if(a==2)
        {
            int radif,tool,soton;
	printf("enter number of radif, tool,number of soton:\n");
	scanf("%d %d %d",&radif,&tool,&soton);
	for(int i=0;i<=tool*(radif);i++){
		if(i%tool==0){
			for(int j=0;j<=2*tool*soton;j++)
				printf("-");}
		//end of if
		else
		{
			for(int j=0;j<=2*tool*soton;j++)
				{
					if(j%(tool*2)==0)
						printf("|");
					else
						printf(" ");
			}
		}//end of else

		printf("\n");

	}
        }//end of else if
        else{
                printf("please enter num between (0-2)\n");
        continue;}}
                   return 0;
}
