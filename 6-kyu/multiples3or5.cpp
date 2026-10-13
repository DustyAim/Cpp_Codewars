int solution(int number)
{
    if (number < 0) return 0;

    int sum = 0;
    while(number > 1){
        if (((number-1)%3==0)&&((number-1)%5==0))
            sum += number-1;
        if (((number-1)%3==0)&&((number-1)%5!=0))
            sum += number-1;
        if (((number-1)%3!=0)&&((number-1)%5==0))
            sum += number-1;
        number--;
    }
    return sum;
}