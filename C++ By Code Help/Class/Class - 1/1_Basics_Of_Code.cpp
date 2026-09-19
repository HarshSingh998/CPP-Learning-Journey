

// Let's Break It - 

int main() {

}
// Har ek programme ka starting point hota hai int main function ( int main jha likha ho )
// {} ye bracket batata hai ki jo bhi code in bracket ke andar likha hoga wo int main function ke andar hoga ( property hai yaa usi function ka part hoga )



/*
return 0:
return 0; ( It represents successfully execution ) ye bata raha hai ki programme successfully run ho gaya aur exit ho gaya ( exit hone ke baad 0 return kar raha hai )
for non zero return value, it represents unsuccessful execution ( agar programme me koi error aa jaye to wo non zero return karega )
*/



// Let's Print Something -

int main() {
    cout << "Namaste Duniya" << endl;
    return 0;
}

/*
apke compiler ko smajh me nhi aarha ki cout kya hai, isliye apko compiler ko batana padega ki cout kya hai (cout ka full form hai console output) isliye apko #include <iostream> likhna padega (ye iostream library ko include kar raha hai jisme cout defined hai)
iostream is header file (ye header file hai jisme input output ke liye functions defined hai) aapko input ke related output ke related standard library ke related kuch bhi use karna ho to aapko iostream ka use karna padega
using namespace std; ye bata raha hai ki apko std namespace ka use karna hai (standard namespace me cout defined hai) agar apko std namespace ka use nhi karna hai to apko cout ke aage std::cout likhna padega (std::cout ka full form hai standard console output)
cout aapka ek identifier hai jiske through aap console me output print krte ho ya ouput kr rhe hai (cout ka full form hai console output)
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Namaste Duniya" << endl;
    return 0;
}



// "Namaste Duniya" ye ek string hai (string ka matlab hai characters ka collection) aur ye double quotes me likha gaya hai (double quotes ka matlab hai ki ye ek string hai) aur ye console me print hoga (console me print hone ke liye cout ka use kiya gaya hai)


/*
endl ka matlab hai nai line par print karna (endl ka full form hai end line) aur ye console me print hone ke baad cursor ko next line par le jaayega (cursor ka matlab hai ki console me jo bhi print ho raha hai uske baad cursor next line par chala jaayega)
alternatively, aap \n ka use bhi kar sakte ho ( \n ka matlab hai new line) aur ye bhi cursor ko next line par le jaayega ( \n ka full form hai new line)
*/


// semicolon (;) ka matlab hai ki ye statement khatam ho gaya (semicolon ka full form hai statement terminator) aur ye bata raha hai ki ye statement khatam ho gaya aur ab agla statement start hoga
