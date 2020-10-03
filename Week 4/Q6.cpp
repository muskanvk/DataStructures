//Write a program to check if a number is Palindrome or not, using Recursion.

#include<iostream>
using namespace std;

int check_palindrome(int num){

   static int reverse_num=0,rem;

   if(num!=0){
      rem=num%10;
      reverse_num=reverse_num*10+rem;
      check_palindrome(num/10);
   }

   return reverse_num;
}
int main(){
   int num, reverse_num;

   cout<<"Enter a number: ";
   cin>>num;

   reverse_num = check_palindrome(num);

   if(num==reverse_num)
      cout<<"It is a palindrome number";
   else
      cout<<"It is not a palindrome number";

   return 0;
}