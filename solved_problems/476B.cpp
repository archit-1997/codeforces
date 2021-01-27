/*Dreamoon is standing at the position 0 on a number line. Drazil is sending a list of commands through Wi-Fi to Dreamoon's smartphone and Dreamoon follows them.

Each command is one of the following two types:

    Go 1 unit towards the positive direction, denoted as '+'
    Go 1 unit towards the negative direction, denoted as '-' 

But the Wi-Fi condition is so poor that Dreamoon's smartphone reports some of the commands can't be recognized and Dreamoon knows that some of them might even be wrong though successfully recognized. Dreamoon decides to follow every recognized command and toss a fair coin to decide those unrecognized ones (that means, he moves to the 1 unit to the negative or positive direction with the same probability 0.5).

You are given an original list of commands sent by Drazil and list received by Dreamoon. What is the probability that Dreamoon ends in the position originally supposed to be final by Drazil's commands?
Input

The first line contains a string s1 — the commands Drazil sends to Dreamoon, this string consists of only the characters in the set {'+', '-'}.

The second line contains a string s2 — the commands Dreamoon's smartphone recognizes, this string consists of only the characters in the set {'+', '-', '?'}. '?' denotes an unrecognized command.

Lengths of two strings are equal and do not exceed 10.
Output

Output a single real number corresponding to the probability. The answer will be considered correct if its relative or absolute error doesn't exceed 10 - 9.
Examples
Input
Copy

++-+-
+-+-+

Output
Copy

1.000000000000

Input
Copy

+-+-
+-??

Output
Copy

0.500000000000

Input
Copy

+++
??-

Output
Copy

0.000000000000

Note

For the first sample, both s1 and s2 will lead Dreamoon to finish at the same position  + 1.

For the second sample, s1 will lead Dreamoon to finish at position 0, while there are four possibilites for s2: {"+-++", "+-+-", "+--+", "+---"} with ending position {+2, 0, 0, -2} respectively. So there are 2 correct cases out of 4, so the probability of finishing at the correct position is 0.5.

For the third sample, s2 could only lead us to finish at positions {+1, -1, -3}, so the probability to finish at the correct position  + 3 is 0.*/

#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main(){
	string s,s1;
	cin>>s>>s1;
	int a=0,b=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='+') a++;
		else b++;
	}
	for(int i=0;i<s1.size();i++){
		if(s1[i]=='+') a--;
		else if(s1[i]=='-') b--;
	}
	double ans=1;
	if(a<0 || b<0) ans=0;
	else{
		for(int i=b+1;i<=a+b;i++){
			ans=i*ans/(i-b);
		}
		for(int i=0;i<a+b;i++) ans/=2;
	}
	printf("%.10f\n",ans);
}
