#include <iostream>
#include <string>

#define n 25

using namespace std;



int main(int argc,char* argv[])
{

cout << "Enter string > ";

string str;
unsigned int chrs[n] = {0};
for (int i = 0; i<n; i++)
	chrs[i] = (n-i)+(unsigned int)'A';

getline(cin, str);

for (unsigned int i = 0; i<str.length(); i++)
	str[i] = (char)chrs[((unsigned int)str[i]-(unsigned int)'A')];

cout << "Atbashed: " << str << endl;


return 0;
}
