#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

string s;
double ar[100],rst[100];
double sm=0,nmb,sqrt_nmb,pwd,rti,frs;
char k;int xl;int xlg=-1;
double first_number;
int second_number;
double fn_result;
double sn_result;

int lgth(double nmb){
     s+=to_string(nmb);
     int xi=0;
     for(int i=0;i<=s.size()-1;i++){
        if(s.at(i)!=*"."){xi+=1;}
        if(s.at(i)==*"."){break;}
     }
     cout<<"legnth of function is " << xi <<"\n";
     return xi;
}

int epilogi_ena(){
   for(int i=0;i<=xlg-1;i++){
      cout<<"\n";
      cout<<"for @i " << i << " enter number with " << xlg-i-1 << " zereos " ;
      pwd=pow(10,xlg-i-1);
      if(s.at(i)!=*"."){
        k=s.at(i);
        xl=stoi(&k);
        rti=xl*pwd;
        ar[i]=rti;
        cout<<"for number " << std::setprecision(10) << rti <<"\n";
        rst[i]=sqrt(ar[i]);
        sm=sm+rst[i];
        cout<<" with sqrt as " << rst[i] <<" and current sum " << sm <<"\n";
      }
      if(s.at(i)==*"."){break;}
    }
    cout<<"\n";
    cout<<"for final sum : " << sm <<"\n";

    cout<<"\n";
    frs=(double)sm/(double)sqrt_nmb;
    cout<<"oi fores einai : " << frs <<" \n";
    cout<<"almost around square of 2 xD ? \n";


    long double dr_one;
    long double dr_two;
    long double rmdr;
    long double aprx;

    dr_one=nmb/sm;
    //dr_two=nmb/dr_one;
    rmdr=sm-dr_one;
    aprx=rmdr*frs;
    cout<<"---------\n";
    cout<<"of Main Number - Sum " << nmb << " / " << sm << " ::== " << dr_one <<"\n";
    cout<<"of Sum - Above Result " << sm << " - " << dr_one << " ::== " << rmdr <<"\n";
    cout<<"and result of " << rmdr << " * " << frs << " ::== " << aprx <<"\n";
    cout<<"a square approximation MAYBE WILL BE : " << aprx <<" NOT WORKING AS INTENDED \n";

    cout<<"---------\n";
    dr_one=nmb/sm;
    rmdr=dr_one*frs;
    cout<<"of Main Number - Sum " << nmb <<" / " << sm << " ::== " << dr_one <<"\n";
    cout<<"of Above * fores " << dr_one << " * " << frs << " ::== " << rmdr <<"\n";
    cout<<"a square approximation MAYBE WILL BE : " << rmdr << " POSSIBLE NOT WORKING AS INTENDED \n";

    cout<<"---------\n";
    cout<<"\n";
    long double axrp;
    axrp=sm/frs;
    cout<<"with sm " << sm << " and frs " << frs << " and action of '/' " << "\n";
    cout<<"a square approximation MAYBE WILL BE : " << axrp <<"\n";

    return 0;
}

int epilogi_deuteri(double a,int b){
   fn_result=sqrt(a);
   int flgth=lgth(a);
   cout<<"the square root number of the first number : " << a  << " is " << fn_result <<" with legnth " << flgth <<"\n";
   cout<<"\n";
   cout<<"calculating :\n";
   cout<<"creating the set of number between the start and the 99th end \n";
   pwd=pow(10,b);
   double tuple_man;
   tuple_man=a*pwd;
   cout<<"start number will be " << tuple_man <<" with pwd " << pwd <<" :: ";
   pwd=pow(10,b)-1;
   double end_t_m;
   end_t_m=tuple_man + pwd;
   cout<<"end number will be " << end_t_m <<" with pwd " << pwd <<"\n";
   int xli=0;
   cout<<"\n";
   for(int i=tuple_man;i<=end_t_m;i++){
      sn_result=sqrt(i);
      cout<<"for " << i << " sqrt is " << sn_result <<" || ";
      xli+=1;
      if(xli%6==0){
        cout<<"\n";
      }
   }
   cout<<"\n";
   return 0;
}

int main(int argc,char** argv)
{
    cout<<"1 for sqrting the after breaking the number by giving almost always the approximation result set of from 1.1 to 1.5 \n";
    cout<<"2 playing between two different lenghts and getting almost the same result. Extensions \n";
    int epilogi=-1;
    epilogi=stoi(argv[1]);
    if(epilogi==1){
        cout<<"\n";
        cout<<"how it works:\n";
        cout<<"for the number 2785 \n";
        cout<<"4 = lenght of the number\n";
        cout<<"then we automate th following inputs\n";
        cout<<"2000 700 80 and 5 \n";
        cout<<"then u wait for the results to appear\n";
        cout<<"enter the number : \n";
        cin>>nmb;
        xlg=lgth(nmb);
        cout<<"lenght is : " << xlg <<"\n";
        sqrt_nmb=sqrt(nmb);
        cout<<"main sqrt from math file is : " << sqrt_nmb <<"\n";
        epilogi_ena();
        }
    if(epilogi==2){
       cout<<"\n";
       cout<<"how it works:\n";
       cout<<"we first take a number with digits lenght of 2 and we expose the square of \n";
       cout<<"we then increase the number of digits from 2 to 4 but we keep the first two digits the same \n";
       cout<<"we take the digits we watch the digits we play with the digits \n";
       cout<<"vale arithmo  px 27 [2 digits]: \n";
       first_number=stold(argv[2]);
       cout<<"enter the number of increase digits u want eg from 27 with 2 digits to 27XY with 2 more digits \n";
       cout<<"so u enter 2 \n";
       second_number=stoi(argv[3]);
       epilogi_deuteri(first_number,second_number);
    }
    return 0;
}
