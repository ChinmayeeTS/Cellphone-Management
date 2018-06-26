#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void singer();
void music();
void movie();
void type();
void musics()
{

    int ch1;
    //printf("******************WELCOME*******************\n\n");
    while(1)
    {   printf("\nInformation about\n");
        printf("\n1.singer\n 2.movie\n 3.music director\n 4.type\n5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch1);
        switch(ch1)
        {
            case 1:singer();
                    break;
            case 2:movie();
                    break;
           case 3:music();
                   break;
            case 4:type();
                    break;
           case 5:exit(0);
            default:printf("\nInvalid choice\n");
        }
    }
}
void singer()
{
    FILE *f2;
    char s1;
    int ch;
    printf("\n1.SPB\n 2.Sounigam \n3.Shreya goshal \n4.Shankar Madhavan \n5.Vijay prakash\n");
    printf("\nEnter your choice:");
    scanf("%d",&ch);

    switch(ch)
        {
            case 1:f2=fopen("spb","r");
                    while((s1=getc(f2))!=EOF)
                    {
                        printf("%c",s1);
                    }
                    fclose(f2);
                    system("clementine /home/exam1/Music/spb.mp3");
                    break;
            case 2:f2=fopen("sonu","r");
                    while((s1=getc(f2))!=EOF)
                    {
                       printf("%c",s1);
                    }
                    fclose(f2);
                   system("clementine /home/exam1/Music/enagali.mp3");
                    break;
            case 3:f2=fopen("shreyaghoshal","r");
                    while((s1=getc(f2))!=EOF)
                    {
                        printf("%c",s1);
                    }
                    fclose(f2);
                    system("clementine /home/exam1/Music/aalochane.mp3");
                    break;

            case 4:f2=fopen("shankarmadhavan","r");
                    while((s1=getc(f2))!=EOF)
                    {
                        printf("%c",s1);
                    }
                    fclose(f2);
                    system("clementine /home/exam1/Music/omd.MP3");
                    break;
             case 5:f2=fopen("vijayprakash","r");
                    while((s1=getc(f2))!=EOF)
                    {
                        printf("%c",s1);
                    }
                    fclose(f2);
                    system("clementine /home/exam1/Music/1HELLO~1.MP3");
                    break;
            default:printf("\nInvalid choice\n");
        }
}
void movie()
{
    FILE *f2;
    char s1;
    int ch;
    printf("\n1.Rangitaranga\n2.Googly\n3.Maanikya\n4.Power\n5.Brundhavana\n");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:f2=fopen("rangitharanga","r");
                while((s1=getc(f2))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f2);
                system("clementine /home/exam1/Music/enagali.mp3");
                break;
        case 2:f2=fopen("googly","r");
                while((s1=getc(f2))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f2);
                system("clementine /home/exam1/Music/enagali.mp3");
                break;
        case 3:f2=fopen("maanikya","r");
                while((s1=getc(f2))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f2);
                break;

        case 4:f2=fopen("power","r");
                while((s1=getc(f2))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f2);
                system("clementine /home/exam1/Music/enagali.mp3");
                break;
         case 5:f2=fopen("brundhavana","r");
                while((s1=getc(f2))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f2);
                system("clementine /home/exam1/Music/enagali.mp3");
                break;
        default:printf("\nInvalid choice\n");
    }
}
void music()
{
    FILE *f1;
    char s1;
    int ch;
    printf("\n1.Arjun Janya\n2.Ilayaraja\n3.hamsalkha\n4.Gurukiran\n5.K kalyan\n");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:f1=fopen("arjun","r");
                while((s1=getc(f1))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f1);
                break;
        case 2:f1=fopen("ilayaraja","r");
                while((s1=getc(f1))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f1);
                break;
        case 3:f1=fopen("hamsalekha","r");
                while((s1=getc(f1))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f1);
                break;

        case 4:f1=fopen("gurukiran","r");
                while((s1=getc(f1))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f1);
                break;
         case 5:f1=fopen("kalyan","r");
                while((s1=getc(f1))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f1);
                break;
        default:printf("\nInvalid choice\n");
    }
}
void type()
{
    FILE *f1;
    char s1;
    int ch;
    printf("\n1.Devotional\n 2.Melody\n3.Patho\n4.Romantic\n");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:f1=fopen("devotional","r");
                while((s1=getc(f1))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f1);
                break;
        case 2:f1=fopen("melodius","r");
                while((s1=getc(f1))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f1);
                break;
       case 3:f1=fopen("pathow","r");
                while((s1=getc(f1))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f1);
                break;
        case 4:f1=fopen("romantic","r");
                while((s1=getc(f1))!=EOF)
                {
                    printf("%c",s1);
                }
                fclose(f1);
                break;
        default:printf("\nDetails not found\n");
                break;
    }
}
