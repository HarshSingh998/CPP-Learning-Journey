
int a = 10;
double d = a; //Bada ghar = chhota ghar (Implicit Type Casting) automatically convert ho jata h
cout << d <<endl;



double a = 10.90;
int d = a;  //Data lose
cout << d <<endl;





int a = 100 , b = 2;
int ans = a/b;
cout << ans << endl;



int a = 15 , b = 2;
int ans = a/b;   // int/int = int
cout << ans << endl;



//Explicit type casting ( chhota ghar = bada ghar )
int a = 15 , b = 2;
double ans = (double)a/b;    // double/int = double ( Type Promotion)
cout << ans << endl;



//implicit means something happens automatically by the compiler,  ( Widening)
//while explicit means it is done manually by the programmer.  ( Narowing)





char ch = 'a';
cout << ch <<endl;




char ch = 'a';
cout << (int)ch <<endl;


char ch = 'A';
cout << (int)ch <<endl;


int ch = 'a';
cout << (int)ch <<endl;



char ch = 'a';   // 97+97
cout << ch+ch <<endl;



char ch = 'a'; 
cout << ch + 1 <<endl;



char ch = 'a'; 
cout << ch + '1' <<endl;





