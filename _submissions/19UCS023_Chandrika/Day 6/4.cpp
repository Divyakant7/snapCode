int Solution::solve(string A) {
    long long int no_of_amazing_substr=0;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'||A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u')
        {
            no_of_amazing_substr+=A.length()-i;//A.length()-i gives  the total number of substrings possible with vowel at the ith index as the starting letter
        }
    }
    return no_of_amazing_substr%10003;
}
