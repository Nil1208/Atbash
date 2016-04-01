#include <iostream>
#include <string>
#include <locale>
#define n 26

using namespace std;



int main(int argc,char* argv[])
{
setlocale(LC_ALL,"");
locale loc;
cout << "Enter string > ";

string str;
unsigned int chrs[n] = {0};
for (int i = 0; i<n; i++)
	chrs[i] = (n-i)+(unsigned int)'A'-1;

getline(cin, str);

for (unsigned int i = 0; i<str.length(); i++)
{
	str[i] = toupper(str[i],loc);
	if (str[i]>='A' && str[i]<='Z')
	str[i] = (char)chrs[((unsigned int)str[i]-(unsigned int)'A')];
}
cout << "Atbashed: " << str << endl;


return 0;
}
