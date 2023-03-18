#include <stdio.h>

#define sqrt(x) ((x)*(x))

int main()
{

    int test_case = 0;
    scanf("%d", &test_case);

    int answer = 0;
    for (int i = 0; i < test_case; i++)
    {
        answer = 0;
        int arrival_info[4];
        int planetary_system_count = 0;
        scanf("%d%d%d%d", &arrival_info[0], &arrival_info[1], &arrival_info[2], &arrival_info[3]);
        scanf("%d", &planetary_system_count);

        int temp[3];
        int check_start = 0,check_end = 0, dis_start = 0, dis_end = 0;
        for (int i = 0; i < planetary_system_count; i++)
        {
            scanf("%d%d%d", &temp[0], &temp[1], &temp[2]);            
            dis_start = sqrt(arrival_info[0] - temp[0]) + sqrt(arrival_info[1] - temp[1]);
            if (dis_start < sqrt(temp[2])) {check_start = 0;}
            else {check_start = 1;}
            dis_end = sqrt(arrival_info[2] - temp[0]) + sqrt(arrival_info[3] - temp[1]);
            if (dis_end < sqrt(temp[2])) {check_end = 0;}
            else {check_end = 1;}
            if (check_start != check_end) {answer += 1;}
        }
        
        printf("%d\n", answer);

    }
    

}
