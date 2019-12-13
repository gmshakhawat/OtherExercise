#include<stdio.h>

void FileC2F(){
    FILE* inputFile;
    FILE* outFile;
    outFile=fopen("/users/M._Shakhawat_Hossain/Desktop/outFile.txt","w");
    if(outFile=!NULL)
    {
        printf("File Created Succesfully");

        fprintf("outFile","Centigrade to Fahrenheit ");
        for(int i=1;i<=200;i++)
        {
            printf("please Enter Temperature In Centigrade : ");
            int c;
            int f[200]
            scanf("%f",&c);
            f=((9*c)/5+32);

        }

       for(int i=;i<=200;i++)
       {
           printf("%.2f Centigrade = %.2f Fahrenheit \n",c,f);
       }
       fclose(outFile);

    }
    else
    {
        printf("File Couldn't be Created");
    }
}


int main()
{
    float f,c;

    printf("please Enter Temperature In Centigrade : ");
    scanf("%f",&c);

    f=((9*c)/5+32);
    printf("%.2f Centigrade = %.2f Fahrenheit ",c,f);

    return 0;

}
