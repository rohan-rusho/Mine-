#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int qqq=0;
int value=0;
int temp_pass;
static int i=0;
double taka=100000.00;
struct web
{
    char name[30],pass[30];
} w[99];
int n;
void login(void);
void reg(void);
void checkpass(void);
void det(void);
void Num1(void);
void Num2(void);
void Num3(void);
void Num4(void);
void Num5(void);
void Num6(void);
void Num7(void);


///------------------------------------------------------------------
int main()
{

    do
        {
    int z=0;
    int pass;
    int u;
    system("COLOR FC");
    system("CLS");
    printf("\n\n\n\n\t\t\t\t\t\t========================");
    printf("\n\t\t\t\t\t\tWELCOME TO TRANSFER ZONE");
    printf("\n\t\t\t\t\t\t========================");
    printf("\n\n\n\n\t\t\tPress Enter to proceed...!!");
    if(getch()==13)
        system("CLS");
XY:
    printf("\n\n\n\t\t\t\t\t1. LOGIN\t\t2. REGISTER");
    printf("\n\n\n\t\t\t\t\t\tENTER YOUR CHOICE: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        system("CLS");
        login();
        det();
        printf("\t\t\t\tEnter Here: ");

        break;
    case 2:
        system("CLS");
        reg();
         goto RR;
        break;
    default:
        printf("\n\n\t\t\t\tNO MATCH FOUND");
        printf("\n\n\t\t\tPress Enter to re-Enter the choice");
        if(getch()==13)
            system("CLS");
        goto XY;
    }


    scanf("%d",&u);
    if(u==1)

    {
        Num1();
    }

    if(u==2)

    {
        Num2();
    }
    if(u==3)

    {
        Num3();
    }
    if(u==4)

    {
        Num4();
    }
    if(u==5)

    {
        Num5();
    }
    if(u==6)

    {
        Num6();
    }
    if(u==7)

    {
        Num7();
    }
        }
    while
    (qqq==0);
    RR:
     printf("\n\n\t\t\t\tThanks For being with us! ");
        printf("\n\n\t\t\tMade With Proud, By Rohan.\n\n\n");

return 0;
}
///-----------------------------------------------------------

void Num1()
{
    int n,i,r,x,y,m,p=10;
    printf("\n\t\t\t\tEnter Mobile Number For Send Money: ");
        scanf("%d",&m);
        printf("\n\n\t\t\t\tEnter Ammount: ");
        scanf("%d",&r);
        taka=taka-r;
       while(p!=0)
        {
        checkpass();
        if(value!=0 )
            {
                printf("\n\n\t\t\t\tSend Money Successful . :) \n");
                printf("\n\t\t\t\tYour Current Balance is %.2lf taka.\n",taka);
                p=0;
                printf("\n\t\t\t\tEnter a key to continue\n");
                getch();
            }
            else
            {
                printf("\n\n\t\t\t\tWrong password, try another");
            }
            printf("\n");

}
}


void Num2()
{
    int n,i,r,x,y,m,p=10;
    printf("\n\t\t\t\tEnter Mobile Number For Recharge: ");
        scanf("%d",&m);
        printf("\n\n\t\t\t\tEnter Ammount: ");
        scanf("%d",&r);
        taka=taka-r;
       while(p!=0)
        {
        checkpass();
        if(value!=0 )
            {
                printf("\n\n\t\t\t\tRecharge Successful . :) \n");
                printf("\n\t\t\t\tYour Current Balance is %.2lf taka.\n",taka);
                p=0;
                printf("\n\t\t\t\tEnter a key to continue\n");
                getch();
            }
            else
            {
                printf("\n\n\t\t\t\tWrong password, try another");
            }
            printf("\n");

}
}




void Num3()
{
    int n,i,r,x,y,m,p=10;
    printf("\n\t\t\t\tEnter Mobile Number For Payment: ");
        scanf("%d",&m);
        printf("\n\n\t\t\t\tEnter Ammount: ");
        scanf("%d",&r);
        taka=taka-r;
       while(p!=0)
        {
        checkpass();
        if(value!=0 )
            {
                printf("\n\n\t\t\t\tPayment Successful . :) \n");
                printf("\n\t\t\t\tYour Current Balance is %.2lf taka.\n",taka);
                p=0;
                printf("\n\t\t\t\tEnter a key to continue\n");
                getch();
            }
            else
            {
                printf("\n\n\t\t\t\tWrong password, try another");
            }
            printf("\n");

}
}

void Num4()
{
    int n,i,r,x,y,m,p=10;
    printf("\n\t\t\t\tEnter Mobile Number For Cash Out: ");
        scanf("%d",&m);
        printf("\n\n\t\t\t\tEnter Ammount: ");
        scanf("%d",&r);
        taka=taka-r;
       while(p!=0)
        {
        checkpass();
        if(value!=0 )
            {
                printf("\n\n\t\t\t\tCash Out Successful. :) \n");
                printf("\n\t\t\t\tYour Current Balance is %.2lf taka.\n",taka);
                p=0;
                printf("\n\t\t\t\tEnter a key to continue\n");
                getch();
            }
            else
            {
                printf("\n\n\t\t\t\tWrong password, try another");
            }
            printf("\n");

}
}

void Num5()
{
    int n,i,r,x,y,m,p=10;
    printf("\n\t\t\t\tEnter Bill Number For Pay Bill: ");
        scanf("%d",&m);
        printf("\n\n\t\t\t\tEnter Ammount: ");
        scanf("%d",&r);
        taka=taka-r;
       while(p!=0)
        {
        checkpass();
        if(value!=0 )
            {
                printf("\n\n\t\t\t\tPay Bill Successful . :) \n");
                printf("\n\t\t\t\tYour Current Balance is %.2lf taka.\n",taka);
                p=0;
                printf("\n\t\t\t\tEnter a key to continue\n");
                getch();
            }
            else
            {
                printf("\n\n\t\t\t\tWrong password, try another");
            }
            printf("\n");

}
}

void Num6()
{
    int p=10;
    printf("\n\t\t\t\tEnter Username & Password for check your current balace: ");

       while(p!=0)
        {
        checkpass();
        if(value!=0 )
            {

                printf("\n\t\t\t\tYour Current Balance is %.2lf taka.\n",taka);
                p=0;
                printf("\n\t\t\t\tEnter a key to continue\n");
                getch();
            }
            else
            {
                printf("\n\n\t\t\t\tWrong password, try another");
            }
            printf("\n");

}
}

void Num7()
{
    printf("\n\t\t\t\tPress 1 to exit: ");
                    scanf("%d",&qqq);


}



void det()
{
    system("CLS");

    printf("\n\n\t\t\t\tHello! It's an honor to serve you.\n\n\n");
    printf("\n\t\t\tYou Have BDT: %.2lf TAKA\n\n",taka);
    printf("\t\t1.Send Money\n");
    printf("\t\t2.Mobile Recharge\n");
    printf("\t\t3.Payment\n");
    printf("\t\t4.Cash Out\n");
    printf("\t\t5.Pay Bill\n");
    printf("\t\t6.Check Balance\n");
    printf("\t\t7.Exit.\n\n\n");
}


void checkpass()
{
    FILE *fp;
    char c,name[30],pass[30];
    int z=0;
    int p=10;
    int checku,checkp;
    fp=fopen("Money_reg.txt","r");

    for(i=0; i<1000; i++)
    {

        printf("\n\n\t\t\t\t  ENTER PASSWORD: ");
        while((c=getch())!=13)
        {
            pass[z++]=c;
            printf("%c",'*');
        }
        printf("\n\n");
        pass[z]='\0';
        while(!feof(fp))
        {
            fread(&w[i],sizeof(w[i]),1,fp);
            checku=strcmp(name,w[i].name);
            checkp=strcmp(pass,w[i].pass);
            if(checkp==0)
            {
                temp_pass=w[i].pass;
                system("CLS");
                value=value+2;

                break;
            }
            else if(checkp!=0)
            {

               value=0;

            }
             printf("\n");

        }


        break;
    }

}



void reg()
{
    FILE *fp;
    char c,checker[30];
    int z=0;
    fp=fopen("Money_reg.txt","ab+");
    printf("\n\n\t\t\t\t\t\t========================");
    printf("\n\t\t\t\t\t\tWELCOME TO REGISTER ZONE");
    printf("\n\t\t\t\t\t\t========================");
    for(i=0; i<100; i++)
    {
        printf("\n\n\t\t\t\t  ENTER USERNAME: ");
        scanf("%s",checker);
        while(!feof(fp))
        {
            fread(&w[i],sizeof(w[i]),1,fp);
            if(strcmp(checker,w[i].name)==0)
            {
                printf("\n\n\t\t\tUSERNAME ALREDY EXISTS");
                system("CLS");
                reg();
            }
            else
            {
                strcpy(w[i].name,checker);
                break;
            }
        }
        printf("\n\n\t\t\t\t  DESIRED PASSWORD: ");
        while((c=getch())!=13)
        {
            w[i].pass[z++]=c;
            printf("%c",'*');
        }
        fwrite(&w[i],sizeof(w[i]),1,fp);
        fclose(fp);
        printf("\n\n\tPress enter if you agree with Username and Password");
        if((c=getch())==13)
        {
            system("CLS");
            printf("\n\n\t\tYou are successfully registered");
            printf("\n\n\t\tTry login your account??\n\n\t\t  ");
            printf("> PRESS 1 FOR YES\n\n\t\t  > PRESS 2 FOR NO\n\n\t\t\t\t");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                system("CLS");
                login();
                break;
            case 2:
                system("CLS");
                printf("\n\n\n\t\t\t\t\tTHANK YOU FOR REGISTERING");
                qqq++;
                break;
            }
        }
        break;
    }
    getch();
}
void login()
{


    FILE *fp;
    char c,name[30],pass[30];
    int z=0;
    int checku,checkp;
    fp=fopen("Money_reg.txt","rb");
PQ:
    printf("\n\n\t\t\t\t\t\t======================");
    printf("\n\t\t\t\t\t\tWELCOME TO LOG IN ZONE");
    printf("\n\t\t\t\t\t\t======================");

    for(i=0; i<1000; i++)
    {
        printf("\n\n\t\t\t\t  ENTER USERNAME: ");
        scanf("%s",name);
        printf("\n\n\t\t\t\t  ENTER PASSWORD: ");
        while((c=getch())!=13)
        {
            pass[z++]=c;
            printf("%c",'*');
        }
        pass[z]='\0';
        while(!feof(fp))
        {
            fread(&w[i],sizeof(w[i]),1,fp);
            checku=strcmp(name,w[i].name);
            checkp=strcmp(pass,w[i].pass);
            if(checku==0&&checkp==0)
            {
                temp_pass=w[i].pass;
                system("CLS");
                printf("\n\n\n\t\t\tHi %s ,YOU HAVE LOGGED IN SUCCESSFULLY!!",name);
                printf("\n\n\n\t\t\t\tWELCOME \n\n\t\t\t\tpress any key to continue");
                break;
            }
            else if(checku==0&&checkp!=0)
            {
                printf("\n\n\n\t\t\tWRONG PASSWORD!! Not %s??",name);
                printf("\n\n\t\t\t\t  (Press 'Y' to re-login)");
                if(getch()=='y'||getch()=='Y')
                    //login();
                    goto PQ;
            }
            else if(checku!=0)
            {
                printf("\n\n\n\t\t\tYou are not a Registered User\n \t\t\tPress enter to register yourself");
                if(getch()==13)
                    system("CLS");
                reg();
            }
        }
        break;
    }
    getch();
}
 