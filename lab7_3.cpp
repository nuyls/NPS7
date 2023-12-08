#include <iostream>
#include <string>
using namespace std;

char before(char x){
if(x =='A')
{
    return 'Z';
}else if(x<='Z'&& x>'A')
{
     return x-1;
}
else
{
    return 48;
}
}
