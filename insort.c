void insort(int s[], int n)
{
    int i , j;
    for(i = 2; i< = n ; i++)
    {
        s[0] = s[i];
        j = i - 1;
        while(s[0] < s[j])
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = s[0];
    }
}
