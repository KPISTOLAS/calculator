#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;



double mess_n (){
	int x;
	int y;
	cout  << " Please enter your number :";
	cin >> x;
	cout  << endl; 
	do{
	
	cout  << " Do you want a special number  : nothing(0) ,sqrt(1) , sin(2) , cos(3) , tan(4), log(5) , abs(6) : ";
	cin >> y;
	cout  << endl;
} while (!( y>=0 && y<= 6));
	 
	  switch (y) {
        case 1:
         x= sqrt(x);
            break;
        case 2:
            x= sin(x);
            break;
        case 3:
            x= cos(x);
            break;
        case 4:
            x= tan(x);
            break;
        case 5:
            x= log(x);
            break;
        case 6:
            x= abs(x);
            break;    
    }
	 
	return x;
}

char mess_c () {
char  c;
	
	do {
	cout  << "Our symbol : + , - , * , / , ^ . " << endl;	
	cout  << " Please enter your symbol  :";
	cin >> c;
	cout  << endl; 
	 } while (!(c == '+' || c == '-' || c == '*' || c == '/' || c == '^'  ));
	return c;	
}

int main(int argc, char** argv) {
	double sol = 0 ;
	bool t= true;
	
	cout  << "*****************************" << endl;
	cout  << "*Whelcome to your calculator*" << endl;
	cout  << "*****************************" << endl;
	g1:
		
	double x1 ; 
	x1 = mess_n ();
	
	g0:
	
	char c; 
	c= mess_c ();
	
	double x2 ;
	x2 = mess_n ();
	
	if (c == '+'){
		sol= x1+x2;
	}
	else if (c == '-'){
		sol= x1-x2;
	}
	else if (c == '*'){
		sol= x1*x2;
	}
	else if (c == '/'){
		if ( x2!=0){
		sol= x1/x2;
		}
		else {
			cout << "ERROR"<< endl;
			t= false ; 
		}
	}
	else if (c == '^'){
		if (x2<0 ){
			if (x1!=0){
				sol=pow(x1,x2);
			}
			else {
				cout << "ERROR"<< endl;
				t= false ; 
			}
		}
		else {
			sol=pow(x1,x2);
		}
	}
	if (t== true){
		cout << x1 << c << x2 << "=" << sol << endl ;
	}

	
    int a ; 
    int b;
	do{
	
	cout  << "***************************" << endl;
	cout  << "*Do you want to continue ?*" << endl;
	cout  << "***************************" << endl;
	cout  << endl;
	cout  << "******************" << endl;
	cout  << "* YES(1) / NO(0) *" << endl;
	cout  << "******************" << endl;

	cin  >> a ;
	
} while (!(a == 1 || a == 0) );

if (a==1){
	if (t== false ){
		goto g1;
	}
	do{
	
	cout  << "*****************************************" << endl;
	cout  << "*Do you want to make a new calculation ?*" << endl;
	cout  << "*****************************************" << endl;
	cout  << endl;
	cout  << "******************" << endl;
	cout  << "* YES(1) / NO(0) *" << endl;
	cout  << "******************" << endl;

	cin  >> b ;
	
} while (!(b == 1 || b  == 0) );
	
	if (b==1){
		goto g1;
	}
	else {
		x1= sol;
		goto g0;
	}
}
else {
	cout  << "************" << endl;
	cout  << "*THANK YOU *" << endl;
	cout  << "************" << endl;
	return 0;
}
}
