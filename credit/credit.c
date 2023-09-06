#include <cs50.h>
#include <stdio.h>

long get_id(void);
int caculate_sum(long id);

int main(void)
{
    // enter
    long id;
    id = get_id();

    // caculate sum
    int total_sum = caculate_sum(id);

    int valid = total_sum % 10;


    int length=0;
    long check_master = id/ 100000000000000;
    long check_amex = id  / 10000000000000;
    long check_visa = id  / 100000000000;
        while ( id > 0 )
            {
                id /= 10;
                length++;
            }
if ( valid != 0 )
            {
                printf("INVALID\n");
            }
else    if (valid==0)
    {
        if (length == 15 && (check_amex == 34 ||check_amex == 37))
            {
                printf("AMEX\n");
                return 0;
            }
        else if (length == 16 && (check_master >= 51 && check_master <= 55 ))
            {
                printf("MASTERCARD\n");
                return 0;
            }
        else if ((length == 13 || length == 16) && (check_master/10 == 4 || check_visa/10 == 4))
            {
                printf("VISA\n");
                return 0;
            }
        else
            printf("INVALID\n");
    }




}

long get_id(void)
    {
        long id;
        do
        {
            id = get_long("Enter id card: ");
        }
        while(id < 0);

        return id;
    }

int caculate_sum(long id)
    {
        int id1 = ((( id%100 ) /10 )*2);
        int id2 = ((( id%10000 ) /1000) *2);
        int id3 = ((( id%1000000 ) /100000) *2);
        int id4 = ((( id%100000000 ) /10000000) *2);
        int id5 = ((( id%10000000000 ) /1000000000) *2);
        int id6 = ((( id%1000000000000 ) /100000000000) *2);
        int id7 = ((( id%100000000000000 ) /10000000000000) *2);
        int id8 = ((( id%10000000000000000 ) /1000000000000000) *2);

        id1 = (( id1%100/10 ) +( id1%10 ));
        id2 = (( id2%100/10 ) +( id2%10 ));
        id3 = (( id3%100/10 ) +( id3%10 ));
        id4 = (( id4%100/10 ) +( id4%10 ));
        id5 = (( id5%100/10 ) +( id5%10 ));
        id6 = (( id6%100/10 ) +( id6%10 ));
        id7 = (( id7%100/10 ) +( id7%10 ));
        id8 = (( id8%100/10 ) +( id8%10 ));


        int sum1 = id1+id2+id3+id4+id5+id6+id7+id8;

        int id9 =  (( id%10 ) /1 );                            // 4003600000000014
        int id10 = (( id%1000 ) /100 );
        int id11 = (( id%100000 ) /10000 );
        int id12 = (( id%10000000 ) /1000000 );
        int id13 = (( id%1000000000 ) /100000000 );
        int id14 = (( id%100000000000 ) /10000000000 );
        int id15 = (( id%10000000000000 ) /1000000000000 );
        int id16 = (( id%1000000000000000 ) /100000000000000 );

        int sum2 = id9+id10+id11+id12+id13+id14+id15+id16;

        int total_sum =sum1+sum2;

        return total_sum;
    }

