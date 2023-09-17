
#import <iostream>
using namespace std;
int main()
{
    //Maham Imran 22I-2733
    int td = 0, tm = 0, ty = 0;             //todays date, month and year
    int yrs = 0, mth = 0, dys = 0;          //users age
    int fy = 0, fm = 0, fd = 0;             // final age
    int daysofmonth = 0;
    
    
    cout<<"Assuming todays date is october 1st,2022"<<endl;
    td = 1;
    tm = 10;
    ty = 2022;
    cout<<"Input your age in yy mm dd"<<endl;
    cin >> yrs >> mth >> dys;
    //YEARS
    fy = ty - yrs;
    
    //MONTHS
    
    if (mth >= tm)
    {
        fy --;         //decrements year
        fm = tm - mth; // negative value
        fm = 12 + fm;  // counts back from december
    }
    else if (mth < tm)
    {
        fm = tm - mth;
    }

    //DAYS

    if (td > dys)
    {
        fd = td - dys;
    }
    
    else if (td <= dys)
    {
        
    fm --;     //decrements month
        
        
       if (fm == 01 || fm == 03 || fm == 05 || fm == 07 || fm == 8 || fm == 10 || fm == 12)
        {
            daysofmonth = 31;
        }
        else if (fm == 4 || fm == 06 || fm == 9 || fm == 11 )
        {
            daysofmonth = 30;
        }
        else if (fm == 02)
        {
            daysofmonth = 28 + 2;
        }
        
       fd = td - dys;           //negative value
       fd = daysofmonth + fd ;  //difference subtracted from total number of days
    
    

    }

    cout<<"Your date of birth in the format dd.mm.yyy is "<<fd<<"."<<fm<<"."<<fy<<endl;
    
    cout<<endl;
    return 0;
}




//anyone born in febuary does not exist.
