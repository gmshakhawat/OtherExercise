#include<stdio.h>

struct node
{
    int INFO;
    struct node *NEXT;
};
struct node *FRIST=NULL;
struct node *LAST=NULL;

void insert(int);
void deletee (int);
void print();

int main()
{
    int num1, num2,choice;
    struct node*location;
    while(1)
    {
        printf("1.Insert\n2.Delete\n3.Print");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter Value For Insert : ");
            scanf("%d",&num1);
            insert(num1);
            printf("Successfully Inserted ");
            break;
        case 2:
            printf("Enter the value to be deleted : ");
            scanf("%d",&num1);
            num2=deletee(num1);
            if(num2==-9999)
            {
                printf("\nt\t%d is not available to this linked list",num1);
            }
            else
            {
                printf("\nElement Successfully Deleted \n");
            }
            break;
        case 3:
            print();
            break;
        case 4:
            exit(1);
            break;
        default :
            printf("Wrong Input !!! ");
        }
    }
}

void insert(int value)
{
    struct node *PTR=(struct node*)malloc(sizeof(struct node));

    PTR->INFO=value;
    if(FRIST==NULL)
    {
        FRIST=LAST=PTR;
        PTR->NEXT=NULL;
    }
    else
    {
        LAST->NEXT=PTR;
        PTR->NEXT=NULL;
        LAST=PTR;
    }


}
int deletee(int value)
{
    struct node *LOC , *TEMP;
    int i;
    i=value;

    LOC=search(i);
    if(LOC==NULL)
    {
        return (-9999);
    }

    if(LOC==FRIST)
    {
        if(FRIST==LAST)
        {
            FRIST=LAST=NULL;
        }
        else
        {
            FRIST=FRIST->NEXT;
            return (value);
        }
        for(TEMP=FRIST;TEMP->NEXT!=LOC;TEMP=TEMP->NEXT)
            ;
        TEMP->NEXT=LOC->NEXT;
        if(LOC==LAST)
        {
            LAST=TEMP;
            return (LOC->INFO);
        }
    }
}

void print()
{
    struct node *PTR;
    if(FRIST==NULL)
    {
        printf("\nEmpty !!!");

    }
    printf("\nLinked List Elements : \n");

    if(FRIST==LAST)
    {
        printf("\n %d",FRIST->INFO);

    }
    for(PTR=FRIST;PTR!=LAST;PTR=PTR->NEXT)
    {
        printf("\t %d ",PTR->INFO);
        printf("\t %d",LAST->INFO);
    }
}
