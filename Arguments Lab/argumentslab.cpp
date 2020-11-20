#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
    cout<<"You have entered " <<argc << " arguements"<<endl<<"\n";

    for (int i=0; i < argc; ++i)
    {
        if(argc==1)
            cout<<"You are in: "<< i<< "  " << argv[i]<<endl<<"\n";
        else if(argc==2)
            cout<<"You are in: "<< i<< "  " << argv[i]<<endl<<"\n";
        else if(argc==3)
            cout<<"You are in: "<< i<< "  " << argv[i]<<endl<<"\n";
        else 
            cout<<"You are here at the end "<< i<< "  " << argv[i]<<endl<<"\n";
    }
    return 0;
}
