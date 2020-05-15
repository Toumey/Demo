#include <iostream>
#include<iostream>
using namespace std;
class CTime{
public:
	CTime(int year=0,int month=0,int day=0,int hour=0,int minute=0,int second=0);
	CTime(CTime &p);
	~CTime(){cout<<"析构函数被调用"<<endl;}
	int dayDiff(CTime t);
	void showTime();
	int isvalid();
	int sum();
private:
	int year,month,day,hour,minute,second;
	int x;
};
CTime::CTime(int a,int b,int c,int d,int e,int f)
{
	year=a;
	switch(b)
	{
	case 1:if(c>31)
		   {year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
			cout<<"date error!"<<endl;}
			else 
			{month=b;day=c;
				if(d>23) 
				{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				 cout<<"time error!"<<endl;}
				else 
				{hour=d;
					if(e>59)
					{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				     cout<<"time error!"<<endl;}
					else 
					{minute=e;
						if(f>59)
						{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				         cout<<"time error!"<<endl;}
						else
						{second=f;x=1;}
					}
				}
			}break;
	case 2:if(a%4!=0) 
		   {if(c>28) 
			   {year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
			    cout<<"date error!"<<endl;}
			   else 
			   {month=b;day=c;
					if(d>23) 
					{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
					 cout<<"time error!"<<endl;}
					else 
					{hour=d;
						if(e>59)
						{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
						 cout<<"time error!"<<endl;}
						else 
						{minute=e;
							if(f>59)
							{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
							cout<<"time error!"<<endl;}
							else
							{second=f;x=1;}
					}
				}
		   }}
			else
				if(c>29) 
					{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
					 cout<<"date error!"<<endl;}
				else 
					{month=b;day=c;
						if(d>23) 
						{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
						cout<<"time error!"<<endl;}
						else 
						{hour=d;
							if(e>59)
							{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
							 cout<<"time error!"<<endl;}
							else 
							{minute=e;
								if(f>59)
								{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
								cout<<"time error!"<<endl;}
								else
								{second=f;x=1;}
					}
				}
			}break;
	case 3:if(c>31)
			{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
			cout<<"date error!"<<endl;}
			else 
			{month=b;day=c;
				if(d>23)
				{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				 cout<<"time error!"<<endl;}
				else 
				{hour=d;
					if(e>59)
					{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				     cout<<"time error!"<<endl;}
					else 
					{minute=e;
						if(f>59)
						{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				         cout<<"time error!"<<endl;}
						else
						{second=f;x=1;}
					}
				}
			}break;	  
	case 4:if(c>30)
			   {year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
			cout<<"date error!"<<endl;}
			else 
			{month=b;day=c;
				if(d>23) 
				{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				 cout<<"time error!"<<endl;}
				else 
				{hour=d;
					if(e>59)
					{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				     cout<<"time error!"<<endl;}
					else 
					{minute=e;
						if(f>59)
						{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				         cout<<"time error!"<<endl;}
						else
						{second=f;x=1;}
					}
				}
			}break;
	case 5:if(c>31)
			{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
			cout<<"date error!"<<endl;}
			else 
			{month=b;day=c;
				if(d>23) 
				{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				 cout<<"time error!"<<endl;}
				else 
				{hour=d;
					if(e>59)
					{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				     cout<<"time error!"<<endl;}
					else 
					{minute=e;
						if(f>59)
						{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				         cout<<"time error!"<<endl;}
						else
						{second=f;x=1;}
					}
				}
			}break;
	case 6:if(c>30)
			{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
			cout<<"date error!"<<endl;}
			else 
			{month=b;day=c;
				if(d>23) 
				{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				 cout<<"time error!"<<endl;}
				else 
				{hour=d;
					if(e>59)
					{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				     cout<<"time error!"<<endl;}
					else 
					{minute=e;
						if(f>59)
						{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				         cout<<"time error!"<<endl;}
						else
						{second=f;x=1;}
					}
				}
			}break;
	case 7:if(c>31)
			{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
			cout<<"date error!"<<endl;}
			else 
			{month=b;day=c;
				if(d>23) 
				{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				 cout<<"time error!"<<endl;}
				else 
				{hour=d;
					if(e>59)
					{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				     cout<<"time error!"<<endl;}
					else 
					{minute=e;
						if(f>59)
						{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				         cout<<"time error!"<<endl;}
						else
						{second=f;x=1;}
					}
				}
			}break;
	case 8:if(c>31)
			{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
			cout<<"date error!"<<endl;}
			else 
			{month=b;day=c;
				if(d>23) 
				{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				 cout<<"time error!"<<endl;}
				else 
				{hour=d;
					if(e>59)
					{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				     cout<<"time error!"<<endl;}
					else 
					{minute=e;
						if(f>59)
						{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				         cout<<"time error!"<<endl;}
						else
						{second=f;x=1;}
					}
				}
			}break;
	case 9:if(c>30)
			{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
			cout<<"date error!"<<endl;}
			else 
			{month=b;day=c;
				if(d>23) 
				{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				 cout<<"time error!"<<endl;}
				else 
				{hour=d;
					if(e>59)
					{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				     cout<<"time error!"<<endl;}
					else 
					{minute=e;
						if(f>59)
						{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				         cout<<"time error!"<<endl;}
						else
						{second=f;x=1;}
					}
				}
			}break;
	case 10:if(c>31)
			{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
			cout<<"date error!"<<endl;}
			else 
			{month=b;day=c;
				if(d>23) 
				{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				 cout<<"time error!"<<endl;}
				else 
				{hour=d;
					if(e>59)
					{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				     cout<<"time error!"<<endl;}
					else 
					{minute=e;
						if(f>59)
						{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				         cout<<"time error!"<<endl;}
						else
						{second=f;x=1;}
					}
				}
			}break;
	case 11:if(c>30)
			{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
			cout<<"date error!"<<endl;}
			else 
			{month=b;day=c;
				if(d>23) 
				{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				 cout<<"time error!"<<endl;}
				else 
				{hour=d;
					if(e>59)
					{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				     cout<<"time error!"<<endl;}
					else 
					{minute=e;
						if(f>59)
						{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				         cout<<"time error!"<<endl;}
						else
						{second=f;x=1;}
					}
				}
			}break;
	case 12:if(c>31)
			{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
			cout<<"date error!"<<endl;}
			else 
			{month=b;day=c;
				if(d>23) 
				{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				 cout<<"time error!"<<endl;}
				else 
				{hour=d;
					if(e>59)
					{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				     cout<<"time error!"<<endl;}
					else 
					{minute=e;
						if(f>59)
						{year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;
				         cout<<"time error!"<<endl;}
						else
						{second=f;x=1;}
					}
				}
			}break;
	default:cout<<"date error!"<<endl;year=0;month=0;day=0;hour=0;minute=0;second=0;x=0;break;
	}
cout<<"构造函数被调用"<<endl;
}
CTime::CTime(CTime &p)
{
	year=p.year;
	month=p.month;
	day=p.day;
	hour=p.hour;
	minute=p.minute;
	second=p.second;
	cout<<"拷贝构造函数被调用"<<endl;
}
int CTime::isvalid()
{
	return x;
}
void CTime::showTime()
{
	cout<<year<<"/"<<month<<"/"<<day<<" "<<hour<<":"<<minute<<":"<<second<<endl;
}
int CTime::sum()
{	int s=0;
	s=(year-1)*365+(year-1)/4+(year-1)/400-(year-1)/100;
	switch(month-1)
	{
	case 11:s=s+30;
	case 10:s=s+31;
	case 9:s=s+30;
	case 8:s=s+31;
	case 7:s=s+31;
	case 6:s=s+30;
	case 5:s=s+31;
	case 4:s=s+30;
	case 3:s=s+31;
	case 2:if((year%4==0&&year%100!=0)||(year%400==0))
			   s=s+29;
			else s=s+28;
	case 1:s=s+31;
	case 0:break;
	}
	s=s+day;
	return s;
}
int CTime::dayDiff(CTime t)
{
	int y;
	if(sum()>t.sum())
		y=sum()-t.sum();
	else 
		y=t.sum()-sum();
	return y;
}


int main()
{
    int year, month, day, hour, minute, second;
    cin >> year >> month >> day >> hour >> minute >> second;
    CTime t1(year, month, day, hour, minute, second);
    t1.showTime();
    CTime t2(2000, 1, 1); //利用默认形参将时间初始化为00:00:00
    if (t1.isvalid())     //如果日期和时间合法，则计算天数
    {
        int days=0;
        days=t1.dayDiff(t2);
        cout << "这两天之间相隔了" << days << "天" << endl;
        days=t2.dayDiff(t1);
        cout << "这两天之间相隔了" << days << "天" << endl;
    }
}

