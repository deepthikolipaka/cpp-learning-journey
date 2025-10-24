#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>> age;
    if(age<=10 && age>=0){
        cout<<"you are akid"<<"\n";
    }
    else if(age<=20 && age>10)
    {
        cout<<"You are in adoloscent age";
    }
    else if(age >20 && age<=40)
    {
        cout <<"you are an adult";
    }
    else{
        cout<<"you are an old person";
    }
}
/*WAP for marks grading system
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    if(m>=0 && m<=35){
        cout<<"student is passed the exam";
    }
    else if(m>35 && m<=50){
        cout<<"student has passed in 3rd class";
    }
    else if(m>50 && m<=70){
        cout<<"student has passed in 2nd class";
    }
    else if(m>70 && m<=80){
        cout<<"student has been passed in 1st class";
    }
    else if(m>80 && m<=100){
        cout<<"student passed in distinction";

    }
    else{
        cout<<"congrats student has failed, anthaaaaaaaaaaaa assaaaaaaaaaaaam ";
    }
}