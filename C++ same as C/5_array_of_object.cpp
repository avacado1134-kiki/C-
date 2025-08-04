#include <iostream>
using namespace std;
class emp{
    int id;
    int salary;
    public:
    void setId(void){
        salary =  122;
        cout<<"Enter the Id of the employee "<<endl;
        cin>>id;   
    }
    void getId(void){
        cout<<"The id of this employee is "<< id <<endl;
    }

};
int main(){
    // emp harry;
    // harry.setId();
    // harry.getId();

    emp fb[10];
    for (int i = 0; i < 5; i++)

    {
        fb[i].setId();
        fb[i].getId();
    }
    
    
    return 0;
}