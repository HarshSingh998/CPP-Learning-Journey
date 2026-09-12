#include <iostream>
using namespace std;

int main(){

// Switch Case



int day = 5;
switch(day){ 
    case 1: {                          
        cout << "Monday" << endl;
        break;
    }
    // Agr multiple statement run karana hai to curly bracket lagana compulsory h wrna skip kr skte ho 

     case 2: {                          
        cout << "Tuesday" << endl;
        break;
    }

     case 3: {                          
        cout << "Wednesday" << endl;
        break;
    }

     case 4: {                          
        cout << "Thursday" << endl;
        break;
    }

     case 5: {                          
        cout << "Friday" << endl;
        break;
    }

     case 6: {                          
        cout << "Saturday" << endl;
        break;
    }

 case 7: {                          
        cout << "Sunday" << endl;
        break;
    }

default : {
    cout << "Invalid Input" << endl;
}
}













int day = -7 ;
switch(day){ 
    case 1: {                          
        cout << "Monday" << endl;
        break;
    }
    
     case 2: {                          
        cout << "Tuesday" << endl;
        break;
    }

     case 3: {                          
        cout << "Wednesday" << endl;
        break;
    }

     case 4: {                          
        cout << "Thursday" << endl;
        break;
    }

     case 5: {                          
        cout << "Friday" << endl;
        break;
    }

     case 6: {                          
        cout << "Saturday" << endl;
        break;
    }

 case 7: {                          
        cout << "Sunday" << endl;
        break;
    }

default : {
    cout << "Invalid Input" << endl;
}
}









switch(grade) {
case 'A':cout << "your marks will be in range of 90 to 100" << endl;
break;
case 'B':cout << "your marks will be in range of 80 to 90" << endl;
break;
case 'C':cout << "your marks will be in range of 70 to 88" << endl;
break;
case 'D':cout << "your marks will be in range of 60 to 70" << endl;
break;
default: cout << "your marks will be in range of 0 to 60" << endl;
}









int age 12;
switch(age > 10) {
case 1:
 cout << "true";
break;
case 0:
 cout << "false" << endl;
}






/*   Cases Of Switch
 1 - Unique Cases
 2 - Value Should Be Constant ( Char , Integer )
 3 - Floating Value Can't Pass
 4 - Break Is Not Compulsory ( but agr break nhi lagaoge to age wala me bina ruke chala jaega )
it is called fall through. 
fall through - switch me agr aapne break nhi lagaya to aapke cases fall hote jayege
 jb tk usko break nhi milega is chiz ko kehte h fall through 
 5 - Default lagana is not compulsory.    */






    return 0;
}