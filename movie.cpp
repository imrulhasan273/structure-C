#include<stdio.h>
#include<string.h>
/// -- -- - -- -- - -- - - Start Solution (a) --- -- --- - -- --
struct movieStar
{
    char name[32];
    int age;
    float income;
    char gender[10]; // 'M' / 'F'
};
/// -- -- - -- -- - -- - - End Solution (a) --- -- --- - -- --


/// -- -- - -- -- - -- - - Start Solution (c) --- -- --- - -- --
float highest_earning(struct movieStar s[], size_t len)
{
    float max_income=s[0].income;
    int max_index=0;
    for(int i=0;i<len;i++)
    {
        if(s[i].income>max_income)
        {
            max_income=s[i].income;
            max_index=i;
        }
    }
    return s[max_index].income;
}
/// -- -- - -- -- - -- - - End Solution (c) --- -- --- - -- --




/// -- -- - -- -- - -- - - Start Solution (d) --- -- --- - -- --
int youngest_movieStar(struct movieStar s[], size_t len)
{
    int youngest=s[0].age;
    int min_index=0;
    for(int i=0;i<len;i++)
    {
        if(s[i].age<youngest)
        {
            youngest=s[i].age;
            min_index=i;
        }
    }
    return s[min_index].age;
}
/// -- -- - -- -- - -- - - End Solution (d) --- -- --- - -- --


int main()
{

    /// -- -- - -- -- - -- - - Start Solution (b) --- -- --- - -- --
    int n;
    printf("Number of Movie Star to Insert: ");
    scanf("%d",&n);
    getchar();
    movieStar s[n];

    int count=1;
    for(int i=0;i<n;i++)
    {
        printf("\nStart Number - %d \n",count);
        printf("----------------\n");
        printf("Name: ");
        gets(s[i].name);

        printf("Annual Income: ");
        //gets(s[i].income);
        scanf("%f",&s[i].income);

        printf("Age: ");
        scanf("%d",&s[i].age);

        printf("Gender: ");
        getchar();
        gets(s[i].gender);

        count++;
    }
    /// -- -- - -- -- - -- - - End Solution (b) --- -- --- - -- --


    printf("-------------------------------------------------------------\n\n\n\n");
    ///Highest Income Function Call for (c) .. .. . .. . .
    float annual_income =  highest_earning(s, sizeof(s) / sizeof(*s));
    printf("Highest Annual Income : ");
    printf("%.2f\n\n",annual_income);


    ///Youngest Movie Star age Function Call for (d).. .. . .. .. . .
    int youngest_age =  youngest_movieStar(s, sizeof(s) / sizeof(*s));
    printf("Youngest Movie Star : ");
    printf("%d\n\n",youngest_age);

    return 0;
}
