#include<iostream>
#include<string.h>
using namespace std;

int main(){
   string str;

   cout << "enter a string: "<< endl;
   getline(cin, str);
   string str2 = str;
   int n = str.length();
   for (int i =0; i < n/2; ++i){
       swap(str[i],str[n-i-1]);
   }

   if (str == str2){
       cout <<"It is a Palindrome!";
   }else{
       cout <<"Not a Palindrome";
   }

   return 0;
}
