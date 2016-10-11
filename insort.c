void insort(int s[], int n)
{
    int i , j , temp ;
    for(i = 1 ; i<= n; ++i)
    {
        temp = s[i];
        j = i-1;
        while (j>=0 && temp < s[j]) //注意j不能大于等于1
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
}
