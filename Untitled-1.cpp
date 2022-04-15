#include<iostream>
using namespace std;

class abc
{
private:
int x;
int y;
int z;
public:
abc (int a, int b, int c)
{
x=a;
y=b;
z=c;
}
void display()
{
cout<<x<<" "<<y<<" "<<z<<"\n";
}

friend void operator++(abc &ob, int);

friend void operator++(abc &ob);


};

int main()
{
abc s(10,-20,30);
cout<<"\ns :";
s.display();

++s;

s++ ;
cout<<"\ns :";
s.display();

return (0);
}

void operator++(abc &ob,int)
{
cout<<"\n Post-fix\n";
++ob.x;
++ob.y;
++ob.z;
}
void operator++(abc &ob)
{
cout<<"\npre-fix\n";
ob.x++;
ob.y++;
ob.z++;

}