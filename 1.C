/*Convert the below if-else to conditional operator

if (first_check)
{
"access denied";
}
else
{
if (second_check)
{
"access denied";
}
else
{
"access granted";
}
}*/

#include <stdio.h>
int main()
{
    int first_check = 0, second_check = 0;
    printf("%s", first_check ? "access denied" : second_check ? "access denied" : "access granted");
    return 0;
}