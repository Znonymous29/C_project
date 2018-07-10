#include<iostream>
#include<cstring>
using namespace std;

class MyString{
	public:
		MyString();
		MyString(const char *const);
		MyString(const MyString&);
		~MyString();
		char & operator[](unsigned short offset);
		char operator[](unsigned short offset) const;
		MyString operator+(const MyString&);
		void operator+=(const MyString&);
		MyString & operator=(const MyString &);
		unsigned short GetLen()const { return itsLen; }
		const char * GetMyString() const { return itsMyString; }
	private:
		MyString(unsigned short);
		char *itsMyString;
		unsigned short itsLen;
}; 

MyString::MyString(){
	itsMyString = new char[1];
	itsMyString[0] = '\0';
	itsLen = 0;
}

MyString::MyString(unsigned short len){
	itsMyString = new char[len+1];
	for (unsigned short i = 0; i <= len; i++)
		itsMyString[i] = '\0';
		itsLen=len;
}

MyString::MyString(const char * const cMyString)
{
	itsLen = strlen(cMyString);
	itsMyString = new char[itsLen+1];
	for (unsigned short i = 0; i<itsLen; i++)
		itsMyString[i] = cMyString[i];
		itsMyString[itsLen]='\0';
}

MyString::MyString (const MyString & rhs){
	itsLen=rhs.GetLen();
	itsMyString = new char[itsLen+1];
	for (unsigned short i = 0; i<itsLen;i++)
		itsMyString[i] = rhs[i];
		itsMyString[itsLen] = '\0';
}

MyString::~MyString (){
	delete [] itsMyString;
	itsLen = 0;
}

MyString& MyString::operator=(const MyString & rhs){
	if (this == &rhs)
		return *this;
	delete [] itsMyString;
	itsLen=rhs.GetLen();
	itsMyString = new char[itsLen+1];
	for (unsigned short i = 0; i<itsLen;i++)
		itsMyString[i] = rhs[i];
		itsMyString[itsLen] = '\0';
	return *this;
}

char & MyString::operator[](unsigned short offset){
if (offset > itsLen)
	return itsMyString[itsLen-1];
else
	return itsMyString[offset];
}

char MyString::operator[](unsigned short offset) const{
if (offset > itsLen)
return itsMyString[itsLen-1];
else
return itsMyString[offset];
}

MyString MyString::operator+(const MyString& rhs){
unsigned short totalLen = itsLen + rhs.GetLen();
MyString temp(totalLen);
for (unsigned short i = 0; i<itsLen; i++){
	temp[i] = itsMyString[i];
	for (unsigned short j = 0; j<rhs.GetLen(); j++, i++)
		temp[i] = rhs[j];
		temp[totalLen]='\0';
	return temp;
}
}

void MyString::operator+=(const MyString& rhs)
{
unsigned short rhsLen = rhs.GetLen();
unsigned short totalLen = itsLen + rhsLen;
MyString temp(totalLen);
for (unsigned short i = 0; i<itsLen; i++){
	temp[i] = itsMyString[i];
	for (unsigned short j = 0; j<rhs.GetLen(); j++, i++)
		temp[i] = rhs[i-itsLen];
		temp[totalLen]='\0';
		*this = temp;
}
}

int main()
{
MyString s1("initial test");
cout << "S1:\t" << s1.GetMyString() << endl;
char * temp = "Hello World";
s1 = temp;
cout << "S1:\t" << s1.GetMyString() << endl;
char tempTwo[20];
strcpy(tempTwo,"; nice to be here!");
s1 += tempTwo;
cout << "tempTwo:\t" << tempTwo << endl;
cout << "S1:\t" << s1.GetMyString() << endl;
cout << "S1[4]:\t" << s1[4] << endl;
s1[4]='x';
cout << "S1:\t" << s1.GetMyString() << endl;
cout << "S1[999]:\t" << s1[999] << endl;
MyString s2(" Another myString");
MyString s3;
s3 = s1+s2;
cout << "S3:\t" << s3.GetMyString() << endl;
MyString s4;
s4 = "Why does this work?";
cout << "S4:\t" << s4.GetMyString() << endl;
return 0;
}



