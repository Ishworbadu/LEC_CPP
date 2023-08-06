#include<iostream>
using namespace std;
class Dayrer{};
class Monthrer{};
class Yearer{};

class Date 
{
 private:
    int day,month,year;

 public:
    void read_date();

    void show_date()
    {
        cout<<"Date of birth is "<<year<<"/"<<month<<"/"<<day;
    }

};
 void Date::read_date(){
    cout<<"Enter day";
    cin>>day;
    if (day>31)
        throw Dayrer();
    cout<<"Enter Month ";
    cin>>month;
    if(month>12)
        throw Monthrer();
    cout<<"Enter year ";
    cin>>year;
    if(year<0)
        throw Yearer();

 }
int main()
{
    Date d1;
    try
    {
        cout<<"Enter your date of birth"<<endl;
        d1.read_date();
        d1.show_date();
    }
    catch(Dayrer)
    {
        cout<<"Exception: day cannot be greater than 31";
    }
    catch(Monthrer)
    {
        cout<<"Exception: month cannot be greater than 12";
    }
    catch(Yearer)
    {
        cout<<"Exception: year cannot be less than 0";
    }
    
return 0;
}