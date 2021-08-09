#include <iostream>
using namespace std;
void towerOfHanoi(int n,char source,char dest,char helper){
    if(n==1){
        cout<<"Move the 1 disk "<<dest<<" from "<<source<<endl;
        return;
    }
    towerOfHanoi(n-1,source,helper,dest);
    cout<<"Move the "<<n<<" th disk "<< dest << " from "<< source<<endl;
    towerOfHanoi(n-1,helper,dest,source);

}

int main(){
    towerOfHanoi(2,'a','b', 'c');


return 0;
}