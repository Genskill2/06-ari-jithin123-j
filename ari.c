#include<string.h>
#include<math.h>
#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
string ari(string a)
{
float score;
int c=0,w=0,s=0;
for(int i=0;a[i]!='\0';++i)
{
if(isalnum(a[i]))
c++;
if(a[i]==' ')
w++;
if((a[i]=='.')||(a[i]=='!')||(a[i]=='?'))
s++;
}
score=(4.71*(float)c/(float)w)+(0.5*(float)w/(float)s)-21.43;
score=(int) ceil(score);
if(score==1)
return "Kindergarten";
 else if(score==2) 
return "First/Second Grade";
else if(score==3)
return "Third Grade";
 else if(score==4)
return "Fourth Grade";
else if(score==5)
return "Fifth Grade";
  else if(score==6)
return "Sixth Grade";
      else if(score==7)
return "Seventh Grade";
       else if(score==8)
return "Eighth Grade";
     else if(score==9)
return "Ninth Grade";
     else if(score==10)
return "Tenth Grade";
      else if(score==11)
return "Eleventh Grade";
       else if(score==12)
return "Twelfth grade";
else if(score==13)
return "College student";
     else
return "Professor";
       
 }
