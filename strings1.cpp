#include <iostream>
#include<limits>
//for the sake of not writing scope operator again and again
using namespace std;

int main ()
{
  cout << "Hello, world!\n";
//ways to initialise a string
  char str[3]="he";
  char s[]="superman";
  const char *st="this is a test string which is going to be copied by the constructor";
//gives warnings because string is a const literal by default:
  //char *st="else";
  string d(st);
//implicit constructor calling with parameter s:char[]
  string ds=s;
  cout << "string from array: '"<< ds <<"'\n";;
  string f;
  cout <<d+f<< " enter a stringn\n";

//string input from cin
  cin >> f;
//to flush out the last \n character
  char h;
  cin.get(h);
  cin.clear();
  cout << "this is h: " << h;
  //just eats out one character from the input stream
  cin.ignore();

//has to be a CONST char* for c_str() on a string to recieve a c like string!
  const char* c=f.c_str();


// Both basic_string::size and basic_string::length are synonyms and return the same value.
  cout <<" size(): " << d.size() << "\n";
  cout <<"length():" << d.length() << "\n";
  cout <<"string from pointer: '" << d << "'\n";
  cout << "enter a string ending with ';'\n";

// a getline called after a scanf wont block as it gets the only '\n' character from the last input!
  getline(cin,f,';');
//length upto the delimeter
  
//cout prints character array upto the '\n'
  cout <<"string in char pointer : '" << c << "'\n";
  cout << (int)f.length() << "\n";
  //string d="super";
  //cout << d.size();

  string *test=new string(st);
  int temp1=0;
  int temp21=0;
  int* sa=new int(2);
  cout << sa <<" "<< sizeof(sa)<<" "<<sizeof(int)<<" "<<&temp1<<" "<<&temp21<<"\n";
  string t=*test;
  cout << t.length()<<"\naddress of the string: " << test << "\n";
  cout <<"size of a string object: "+to_string(sizeof(t)) +"\n";
  cout <<"size of a string object pointer: "+to_string(sizeof(test)) +"\n";
  cout << (*test).data() << "\n";
  //cout << decltype(test);
//deletion of a const type
  //delete st;
//deletion of a string*;
  cout << "size of the string pointer" << sizeof(test) << "\n";
  delete test;
  return 0;
}
