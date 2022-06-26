#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int operations();
int calculator();
int unitconversion();
float bmi();
int main()
{
    FILE *fp;
    char check;
    char uname[255],pwd[255],un[255],pd[255],inus[255],inps[255];

    printf("                               Welcome to Aurus System          \n");
    printf("\n\n");
    printf("Things that aurus provides 1.Encodeing And Decoding, 2. A calcultor, 3. A unit converter, 4. A BMI calculator \n\n");

    printf("Login to use Aurus's full potential and if you are new make sure to login\n\n");

    printf("Enter N for New Registration for accessing the following operations of the program\n");
    printf("\n");
    printf("Enter E  for existing registration ");
    check=getchar();
    if(check=='N'||check=='n')
    {
        getchar();
        fp=fopen("login.txt","w");  
        printf("Enter your new username ");
        scanf("%s",&inus);
        fprintf(fp,"%s ",&inus);
        printf("Enter uour new password ");
        scanf("%s",&inps);
        fprintf(fp,"%s",&inps); 

        printf("You need to run the program again logging in with your user name and password");  
        return 0;
    }    
    else if(check=='E'||check=='e')
    {
        fp=fopen("login.txt","r");
        char uname[255],pwd[255],un[255],pd[255],chk[255];
        fscanf(fp,"%s",&uname);
        fscanf(fp,"%s",&pwd);
        getchar();
        printf("Enter username ");
        gets(un);
        printf("Enter password ");
        gets(pd);
        if((strcmp(uname,un)==0)&&(strcmp(pwd,pd)==0))
        {
        printf("Success\n");
        }
        else{
            printf("Falied");
            return 0;
        }
        
        char c[13];
        char ops[123]="encodeordecode";
        char cps[123]="calculator";
        char ucs[123]="unitconversion";
        char bmic[123]="bmi";

        printf("                                Enter encodeordecode for ecoding as well as decoding\n\n");

        printf("                                 Enter unitconversion for unit converter\n\n");

        printf("                                  Enter calculator for using calculator           \n\n");
        printf("                                  Enter bmi for Bmi calculator                \n\n");
        printf("\n");
        printf("\n");
        scanf("%s",&c);
        if(strcmp(c,ops)==0)
        operations();
        else if(strcmp(c,ucs)==0)
        unitconversion();
        else if(strcmp(c,cps)==0)
        calculator();
       else if(strcmp(c,bmic)==0)
        bmi();
        else
        printf("wrong input");     
        
        }


    //     char chn[255];
    //     printf("enter c for calculator \n");
    //     printf("Enter ed for Encoding/decoding");
    //    scanf("%s",&chn);     
    //    char calc[]="ca";
    //     if(strcmp(chn,calc)==0)
    //     {
    //         calculator();
    //     }
    //     if(chn=='e')
    //     {
    //     operations();
    //     }
    //     if(chn=='u')
    //     {
    //         unitconversion();
    //     }
    //     else
    //     {
    //         printf("Failed");
    //     }
    // }

    
    // else
    // {
    //     printf("Failed");
    // }
    // }
    // else
    // {
    //     printf("Wrong input\n");
    // }

    
    
    fclose(fp);
    
}


int operations()
{
    getchar();
    int ops;
    printf("Enter 1 for encoding ");
    printf("Enter 2 for decoding ");
    //printf("Enter 3 for calculator");
    scanf("%d",&ops);
    switch(ops)
    {
        case 1:      
       
       
        // Encoding 


        getchar();
        char str[100];
    int i=0;

    printf("Enter any string: ");
    gets(str);

    printf("ASCII values of each characters of given string: ");
    while(str[i])
         printf("%d ",str[i++]);
        
   
    return 0;
        break;


        //decoding


        case 2:        
        getchar();
        printf(" Decryption \n"); 
        int length;
        printf("Enter how many numbers are there ");
        scanf("%d",&length);
        int num1[length];
        printf("enter the numbers seperated with spaces ");
        for(int j=0;j<length;j++)
        {
            scanf("%d",&num1[j]);
        }
        printf("Decrypted message is \n");
        for(int j =0;j<length;j++)
        {
            printf("%c",num1[j]);
        }
        printf("\n");
        break;
        return 0;
}
}     
        
    //  UNIT CONVERSION



    int unitconversion()
    {
        printf("Enter ctof for celcius to fahrenhiet ");
        char un[255];
        
        char cmpa[255]="ctof";
        char cmps[255]="cmtofeet";
        scanf("%s",&un);
        if(strcmp(cmpa,un)==0)
        {
            float celcius;
            printf("Enter the celcius ");
            scanf("%.2f",&celcius);
            float convert;
            convert = (celcius*1.8)+32;
            printf("%.2f Fahrenhiet\n",convert);
        }
        else if(strcmp(cmps,un)==0)
        {
            float cm;
            printf("Enter the centimeters ");
            scanf("%.2f",&cm);
            float foot;
            foot=cm/30.48;
            printf("%.2f",foot);
        }
        else
        {
            printf("Wrong deceision");
        }
        

    }



    //CALCULATOR



    int calculator()
    {
        char op;
  double first, second;
  getchar();
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);

  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }
    }
    


float bmi() {

   float weight;
//    float height;
//    printf("Enter your weight \n");
//    scanf("%.2f",&weight);
   
//    printf("Enter your height \n");
//    getchar();
//    scanf("%.2f",&height);

//    float bmi = (weight/height)*2;

float height;
printf("Enter your weight\n");
scanf("%.2f",&weight);
getchar();
getchar();
//getchar();
printf("Enter your height\n");
scanf("%.2f",&height);
float bmi=0;
getchar();
bmi=(weight/height)*2;
getchar();



   printf("Your BMI index is : %.2f ",bmi);
}



//Program MADE AND BUIT BY TRIDIB GHOSH Copyright@20222
        
        
        

