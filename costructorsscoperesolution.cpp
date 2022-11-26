#include <iostream>
#include <string.h>
using namespace std;

class phones
{  public:
string name ;
string model;
int year;
    
     

    phones (string x, string y, int e) ;    

};
phones :: phones (string x, string y, int e)
{
    name =x;
    model =y;
    year =e;
}
int main ()
{ 
    phones obj1("Huawei", "prime 2019",2019);
    phones obj2 ("Redmi", "Note 9 pro", 2020);

    cout << obj1.name<< " "<<obj1.model<<" "<<obj1.year<<endl;
    cout << obj2.name<< " "<<obj2.model<<" "<<obj2.year<<endl;

return 0;
}

































