string helper(string &str,int lo,int hi)
{
    if(lo>=hi)
    {
        return str;
    }
    char temp=str[hi];
    str[hi]=str[lo];
    str[lo]=temp;
    return helper(str,lo+1,hi-1);
}
string reverseWord(string str)
{
    return helper(str,0,str.size()-1);
}
/*
M1-2 pointer
int lo=0,hi=str.size()-1;
    while(lo<=hi)
    {
        char temp=str[hi];
        str[hi]=str[lo];
        str[lo]=temp;
        lo++;hi--;
    }
    return str;
    
M2- stack
M3- stl reverse.
M4- Recursion
    */