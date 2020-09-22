#include<stdio.h>
#include<string.h>
/// -- -- - -- -- - -- - - Start Solution (a) --- -- --- - -- --
struct student
{
    char id[10];
    char gender[10]; // 'M' / 'F'
    float ctScore;
    float midScore;
    float finalScore;
    float totalScore;
};
/// -- -- - -- -- - -- - - End Solution (a) --- -- --- - -- --


/// -- -- - -- -- - -- - - Start Solution (c) --- -- --- - -- --
int isFailed(struct student s[], size_t len)
{
    int count = 0;
    for(int i=0;i<len;i++)
    {
        if(s[i].totalScore<60)
        {
            count++;
        }
    }
    return count;
}
/// -- -- - -- -- - -- - - End Solution (c) --- -- --- - -- --




/// -- -- - -- -- - -- - - Start Solution (d) --- -- --- - -- --
char* isHighest(struct student s[], size_t len)
{
    float highestScore=s[0].totalScore;
    int max_index=0;
    for(int i=0;i<len;i++)
    {
        if(s[i].totalScore>highestScore)
        {
            highestScore=s[i].totalScore;
            max_index=i;
        }
    }
    //puts(s[max_index].id);
    return s[max_index].id;
}
/// -- -- - -- -- - -- - - End Solution (d) --- -- --- - -- --


int main()
{

    /// -- -- - -- -- - -- - - Start Solution (b) --- -- --- - -- --
    int n;
    printf("Number Student Info to Insert: ");
    scanf("%d",&n);
    //getchar();
    student s[n];

    int count=1;
    for(int i=0;i<n;i++)
    {
        printf("\nStart Number - %d \n",count);
        printf("----------------\n");

        getchar();
        printf("ID: ");
        gets(s[i].id);

        printf("Gender: ");
        getchar();
        gets(s[i].gender);

        printf("CT Score: ");
        scanf("%f",&s[i].ctScore);

        printf("Mid Score: ");
        scanf("%f",&s[i].midScore);

        printf("Final Score: ");
        scanf("%f",&s[i].finalScore);

        printf("Total Score: ");
        scanf("%f",&s[i].totalScore);

        count++;
    }
    /// -- -- - -- -- - -- - - End Solution (b) --- -- --- - -- --


    printf("-------------------------------------------------------------\n\n\n\n");
    ///Highest Income Function Call for (c) .. .. . .. . .
    int totalFailed =  isFailed(s, sizeof(s) / sizeof(*s));
    printf("Total Failed : ");
    printf("%d\n\n",totalFailed);


    ///Youngest Movie Star age Function Call for (d).. .. . .. .. . .
    char* idTOP =  isHighest(s, sizeof(s) / sizeof(*s));
    printf("ID of student obtaining Highest Mark : ");
    puts(idTOP);

    return 0;
}

