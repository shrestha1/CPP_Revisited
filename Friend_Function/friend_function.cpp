#include <iostream>
using namespace std;

class Distance{
    private:
        int meter = 0;

    public:
        Distance(){
            meter = 0;
        }

        int displayData(){
            return meter;
        }

        friend void add_off_set(Distance &d);
    
};


void add_off_set(Distance &d){
    d.meter += 5;
}

int main()
{   
    Distance dist;
    add_off_set(dist); //pass by reference

    cout << "Distance in meters: " << dist.displayData()<<endl;
    
    
    return 0;
}