#include <iostream>

using namespace std;

void draw();
void replace(int , char);
bool checkavailability(int);
bool checkwinner();

char c1='1';
char c2='2';
char c3='3';
char c4='4';
char c5='5';
char c6='6';
char c7='7';
char c8='8';
char c9='9';
char currentplayer='x';





int main(){

    draw();

cout <<" START GAME"<<endl;
int input;
int counter=0;




while(true){
    cout<<currentplayer<<" : plays "<<endl;
    cin>>input;
while(!checkavailability(input))
{
   cout<< "The number you entered is incorrect or the number you entered is taken"<<endl;
   cout<<"Enter another number"<<endl;
   cin>>input;
}

    if(counter%2==0)
    {


        replace(input , currentplayer);
   currentplayer='o';

    }
    else{


        replace(input , currentplayer);
    currentplayer='x';
    }

counter++;
draw();

if(checkwinner())
{
  cout<<" Do you want to replay the game?"<<endl;
  break;
}

else if (counter == 9)
{
    cout<<" the game is draw "<< endl;
    break;
}


}

}

void draw(){
cout<<"\t"<< c1 <<"\t|\t"<< c2 <<"\t|\t"<< c3 <<endl;
cout<<"\t-------------------------------------"<<endl;
cout<<"\t"<< c4 <<"\t|\t"<< c5 <<"\t|\t"<< c6 <<endl;
cout<<"\t-------------------------------------"<<endl;
cout<<"\t"<< c7 <<"\t|\t"<< c8 <<"\t|\t"<< c9 <<endl;


}

void replace(int i , char c){

switch(i)
{
case 1:
    c1=c;
    break;
case 2:
    c2=c;
break;

case 3:
    c3=c;
    break;

case 4:
    c4=c;
    break;

case 5:
    c5=c;
    break;

case 6:
    c6=c;
    break;

case 7:
    c7=c;
    break;

case 8:
    c8=c;
    break;

case 9:
    c9=c;
    break;
}


}

bool checkavailability(int input)
{
    if(input < 1 || input >9)
     return false;

     switch(input)
  {
case 1:
       if(c1=='1')
      return true;
      break;

case 2:
       if(c2=='2')
      return true;
      break;

case 3:
       if(c3=='3')
      return true;
      break;

case 4:
       if(c4=='4')
      return true;
      break;

case 5:
       if(c5=='5')
      return true;
      break;

case 6:
       if(c6=='6')
      return true;
      break;

case 7:
       if(c7=='7')
      return true;
      break;

case 8:
       if(c8=='8')
      return true;
      break;

case 9:
       if(c9=='9')
      return true;
      break;





  }







    return false;


}






bool checkxwinner(){



bool ro1 = (c1== 'x' && c2=='x' && c3=='x');
bool ro2 = (c4== 'x' && c5=='x' && c6=='x');
bool ro3 = (c7== 'x' && c8=='x' && c9=='x');

bool cl1 = (c1== 'x' && c4=='x' && c7=='x');
bool cl2 = (c2== 'x' && c5=='x' && c8=='x');
bool cl3 = (c3== 'x' && c6=='x' && c9=='x');

bool di1 = (c1== 'x' && c5=='x' && c9=='x');
bool di2 = (c3== 'x' && c5=='x' && c7=='x');

 if(ro1 || ro2 || ro3 || cl1 || cl2 || cl3 || di1 || di2)
 {
     cout<<" x is winner "<<endl;
     return true;
 }

return false;
}







bool checkowinner(){


bool ro1 = (c1== 'o' && c2=='o' && c3=='o');
bool ro2 = (c4== 'o' && c5=='o' && c6=='o');
bool ro3 = (c7== 'o' && c8=='o' && c9=='o');

bool cl1 = (c1== 'o' && c4=='o' && c7=='o');
bool cl2 = (c2== 'o' && c5=='o' && c8=='o');
bool cl3 = (c3== 'o' && c6=='o' && c9=='o');

bool di1 = (c1== 'o' && c5=='o' && c9=='o');
bool di2 = (c3== 'o' && c5=='o' && c7=='o');

 if(ro1 || ro2 || ro3 || cl1 || cl2 || cl3 || di1 || di2)
 {
     cout<<" o is winner "<<endl;
     return true;
 }

return false;
}


bool checkwinner()
{

     return checkxwinner() ||checkowinner();

}


