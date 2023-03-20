function solution(n)
{
    var ans = 0;
    var distance = n;
    
    while (distance != 0)
        {
            if (distance % 2 == 1)
                {
                    ans += 1;
                    distance -= 1;
                }
            else
                {
                    distance /= 2;
                }
        }

    return ans;
}