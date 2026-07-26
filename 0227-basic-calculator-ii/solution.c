int calculate(char* s) {
    int x = 0;
    int result = 0;
    int num = 0;
    int i;
    char op = '+';
    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            num = num * 10 + (s[i]-'0');
        }
        if(((s[i]<'0' || s[i]>'9') &&              s[i] !=' ')|| s[i+1]=='\0')
        {
            if(op == '+')
            {
                result+=x;
                x = num;
            }
            else if(op == '-')
            {
                result+=x;
                x = -num;
            }
            else if(op == '*')
            {
                x = x * num;
            }
            else if(op == '/')
            {
               x = x / num;
            }
            op = s[i];
            num = 0;
        }
    }
    return result + x;
}
