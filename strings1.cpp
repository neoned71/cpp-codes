#include <iostream>
#include<regex>
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
  
  string x("hello");
  
  
  return 0;
}

void string_search(string x)
{
  string ret=x.index("lo");
/*returns the zero-based index of the leftmost occurrence of substring "lo" (3, in this case). The argument may be a String, SubString, char, char*, or Regex.
x.index("l", 2)
returns the index of the first of the leftmost occurrence of "l" found starting the search at position x[2], or 2 in this case.
x.index("l", -1)
returns the index of the rightmost occurrence of "l", or 3 here.
x.index("l", -3)
returns the index of the rightmost occurrence of "l" found by starting the search at the 3rd to the last position of x, returning 2 in this case.
*/
pos = r.search("leo", 3, len, 0);
//returns the index of r in the char* string of length 3, starting at position 0, also placing the length of the match in reference parameter len.
if(x.contains("He")){
  cout << "yes it contains";
}
/* returns nonzero if the String x contains the substring "He". The argument may be a String, SubString, char, char*, or Regex.
x.contains("el", 1);
returns nonzero if x contains the substring "el" at position 1. As in this example, the second argument to contains, if present, means to match the substring only at that position, and not to search elsewhere in the string.
x.contains(RXwhite);
returns nonzero if x contains any whitespace (space, tab, or newline). Recall that RXwhite is a global whitespace Regex.
*/
Regex  r = "e[a-z]*o";
Regex  r2("/[a-z]*/");
int status1=x.matches("lo", 3);
cout << status1;
returns nonzero if x starting at position 3 exactly matches "lo", with no trailing characters (as it does in this example).
int status2=x.matches(r);
cout << status2;
//returns nonzero if String x as a whole matches Regex r.
int f = x.freq("l");
cout << f;
//returns the number of distinct, nonoverlapping matches to the argument (2 in this case).
}
