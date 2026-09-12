#include <iostream>
using namespace std;

int main (){

    for(int i=1; i<=5; i++){
        if(i==3){
            break;
        }
        cout << i << endl;
    }
// 3 be gadi ruk gai to uske baad wali chiz bhi nhi chl rhi h. 





     for(int i=1; i<=5; i++){
        if(i==3){
            continue;
        }
        cout << i << endl;
    }
// 3 pe continue hai to usko skip krdenge or fir uske baad wale chl jayenge. 




    return 0;
}