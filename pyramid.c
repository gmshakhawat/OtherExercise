main()
{
    int line;
    printf("Enter Number of Lines:");
    scanf("%d",&line);
    Func_A(line);
}

void Func_A(int total_lines)
{
    int line_count,star,space;

    for(line_count=1;line_count<=total_lines;line_count++)
    {
        for(star=total_lines;star>=line_count;star--)
        {
            printf("*");
        }
        printf("\n");
        for(space=0;space<line_count;space++)
        {
            printf(" ");
        }

    }


}
