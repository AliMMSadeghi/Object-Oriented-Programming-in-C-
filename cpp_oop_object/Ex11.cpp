// How to access private array and string data
#include<iostream>
#include<cstring>
//#include<conio.h>
using namespace std;
/////////////////////////////////////////////

class List
{
    private:
        int x[2];
        char Names[2][10];

    public:
        void Setmarks (int x[2]);        // fcn prototype
        void Setnames(char Names[2][10]); // fcn prototype
        void Display()
        {
            for (int i=0; i<2; i++)
                cout << Names[i] << "=" << x[i] << endl;
        }
};
/////////////////////////////////////////////

void List::Setmarks(int a[2])
{
    for (int j=0;j<2;j++)
        x[j]=a[j];
}

/////////////////////////////////////////////

void List::Setnames(char b[2][10]) 
{
    cout << endl << "output:" << endl;
    for (int m=0; m<2; m++)
        {
            for (int p=0; p<10; p++)
            Names[m][p] = b[m][p];
        }
}
/////////////////////////////////////////////
int main() 
{
    char a[2][10];
    cout << "Enter the students' names:";
    for(int i=0; i<2; i++)
        cin.getline(a[i],10);

    cout<<"Enter Grade:"<< endl;
    int P[2];

    for (int k=0; k<2; k++)
        cin>>P[k];

    List k;
    k.Setmarks(P);
    k.Setnames(a);
    k.Display();

}

