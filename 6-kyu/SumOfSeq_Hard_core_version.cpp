long long int sequence_sum(long long int begin_number, long long int end_number, long long step){
    if ((end_number - begin_number) * step < 0) return 0;
    if (begin_number == end_number) return begin_number;

    long long n = (end_number - begin_number) / step + 1;      // сколько членов
    return n * (2 * begin_number + (n - 1) * step) / 2; // сумма прогрессии
}