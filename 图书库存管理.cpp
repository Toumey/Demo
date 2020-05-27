#include <iostream>
using namespace std;
class Book
{
//请在此处补充Book类的定义
public:
	Book();
	virtual ~Book(){};
	Book(const Book& other);
	void SetID(unsigned int id);
	void SetName(string name);
	void SetAuthor(string author);
	void SetIntroduction(string introduction);
	void SetDate(string date);
	void SetPage(unsigned int page);
	int GetID(){return m_ID;}
    string  GetName(){return m_Name;}
    string  GetAuthor(){return m_Author;}
    string  GetIntroduction(){return m_Introduction;}
    string  GetDate(){return m_Date;}
    int GetPage(){return m_Page;}
private:
	unsigned int m_ID;
	string m_Name;
	string m_Introduction;
	string m_Author;
	string m_Date;
	unsigned int m_Page;

};
//请在此处补充Book类的成员函数实现
Book::Book()
{
        m_ID=0;
}
void Book::SetID(unsigned int id)
{
	m_ID=id;
}
void Book::SetName(string name)
{
	m_Name=name;
}
void Book::SetAuthor(string author)
{
	m_Author=author;
}
void Book::SetIntroduction(string introduction)
{
	m_Introduction=introduction;
}
void Book::SetDate(string date)
{
	m_Date=date;
}
void Book::SetPage(unsigned int page)
{
	m_Page=page;
}
Book::Book(const Book& other)
{
	m_ID=other.m_ID;
	m_Name=other.m_Name;
	m_Author=other.m_Author;
	m_Introduction=other.m_Introduction;
	m_Date=other.m_Date;
	m_Page=other.m_Page;
}

class Store
{
//请在此处补充Store类的定义
public:
	Store();
	Store(int n);
	virtual ~Store();
	Store(const Store& other);
	void in(Book &b);
	void out(string name);
	Book findbyID(int ID);
	Book findbyName(string name);
	void printList();
	int GetCount(){return m_Count;}
private:
	Book *m_pBook;
	unsigned int m_Count;

};
//请在此处补充Store类的成员函数实现
Store::Store()
{
	m_Count=0;
	m_pBook=0;
	cout<<"Store default constructor called!"<<endl;
}
Store::Store(int n)
{
	m_Count=n;
	m_pBook=new Book[n];
	cout<<"Store constructor with (int n) called!"<<endl;
}
Store::~Store()
{
	m_Count=0;
	if(m_pBook!=0)
		delete[] m_pBook;
	cout<<"Store destructor called!"<<endl;
}
Store::Store(const Store& other)
{
	m_Count=other.m_Count;
	m_pBook=new Book[m_Count];
	for(int i=0;i<m_Count;i++)
	{
		m_pBook[i].SetID(other.m_pBook[i].GetID());
		m_pBook[i].SetName(other.m_pBook[i].GetName());
		m_pBook[i].SetAuthor(other.m_pBook[i].GetAuthor());
		m_pBook[i].SetIntroduction(other.m_pBook[i].GetIntroduction());
		m_pBook[i].SetDate(other.m_pBook[i].GetDate());
		m_pBook[i].SetPage(other.m_pBook[i].GetPage());
	}
	cout<<"Store copy constructor called!"<<endl;
}
void Store::in(Book &b)
{
	Book *p=new Book[m_Count+1];
	p[m_Count].SetID(b.GetID());
	p[m_Count].SetName(b.GetName());
	p[m_Count].SetAuthor(b.GetAuthor());
	p[m_Count].SetIntroduction(b.GetIntroduction());
	p[m_Count].SetDate(b.GetDate());
	p[m_Count].SetPage(b.GetPage());
	for(int i=0;i<m_Count;i++)
	{
		p[i].SetID(m_pBook[i].GetID());
		p[i].SetName(m_pBook[i].GetName());
		p[i].SetAuthor(m_pBook[i].GetAuthor());
		p[i].SetIntroduction(m_pBook[i].GetIntroduction());
		p[i].SetDate(m_pBook[i].GetDate());
		p[i].SetPage(m_pBook[i].GetPage());
	}
	delete[]m_pBook;
	m_Count=m_Count+1;
	m_pBook=p;
}
void Store::out(string name)
{
	int k;
	Book *q=new Book[m_Count-1];
	for(int i=0;i<m_Count;i++)
		if(m_pBook[i].GetName()==name)
			k=i;
	for(int i=0;i<k;i++)
	{
		q[i].SetID(m_pBook[i].GetID());
		q[i].SetName(m_pBook[i].GetName());
		q[i].SetAuthor(m_pBook[i].GetAuthor());
		q[i].SetIntroduction(m_pBook[i].GetIntroduction());
		q[i].SetDate(m_pBook[i].GetDate());
		q[i].SetPage(m_pBook[i].GetPage());
	}
	for(int i=k;i<m_Count-1;i++)
	{
		q[i].SetID(m_pBook[i+1].GetID());
		q[i].SetName(m_pBook[i+1].GetName());
		q[i].SetAuthor(m_pBook[i+1].GetAuthor());
		q[i].SetIntroduction(m_pBook[i+1].GetIntroduction());
		q[i].SetDate(m_pBook[i+1].GetDate());
		q[i].SetPage(m_pBook[i+1].GetPage());
	}
	m_Count=m_Count-1;
	delete[]m_pBook;
	m_pBook=q;
}
Book Store::findbyID(int ID)
{
        int i;
	for( i=0;i<m_Count;i++)
		if(m_pBook[i].GetID()==ID)
		{
			return m_pBook[i];break;
		}
	if(i==m_Count)
		return Book();
}
Book Store::findbyName(string name)
{
        int i;
	for(i=0;i<m_Count;i++)
		if(m_pBook[i].GetName()==name)
		{
			return m_pBook[i];break;
		}
	if(i==m_Count)
		return Book();
}
void Store::printList()
{
	cout<<"There are totally "<<m_Count<<" Books:"<<endl;
	for(int i=0;i<m_Count;i++)
	{
		cout<<"ID="<<m_pBook[i].GetID()<<";  "<<"Name:"<<m_pBook[i].GetName()<<";  "<<"Author:"<<m_pBook[i].GetAuthor()<<";  "<<"Date:"<<m_pBook[i].GetDate()<<";"<<endl;
	}
}

int main()
{
    Store s;
    Book b1,b2,b3;
    b1.SetID(1);
    b1.SetName("C++ 语言程序设计(第4版)");
    b1.SetAuthor("郑莉");
    b1.SetIntroduction("介绍C++及面向对象的知识");
    b1.SetDate("201007");
    b1.SetPage(529);
    b2.SetID(2);
    b2.SetName("离散数学");
    b2.SetAuthor("左孝凌");
    b2.SetIntroduction("介绍命题逻辑、谓词逻辑、集合论、代数系统和图论");
    b2.SetDate("198209");
    b2.SetPage(305);
    b3.SetID(3);
    b3.SetName("c程序设计");
    b3.SetAuthor("谭浩强");
    b3.SetIntroduction("介绍C程序设计中的基本知识，如语句格式、语法等");
    b3.SetDate("201006");
    b3.SetPage(355);

    cout<<"第一本书入库"<<endl;
    s.in(b1);
    cout<<"第二本书入库"<<endl;
    s.in(b2);
    cout<<"第三本书入库"<<endl;
    s.in(b3);
    cout <<"现有库存书籍数量："<<s.GetCount() << endl;
    cout <<"查找并出库图书：离散数学" << endl;
    Book tmpbook=s.findbyName("离散数学");
    if(tmpbook.GetID()!=0)
    {
        s.out("离散数学");
        cout <<"离散数学 已成功出库" << endl;
    }
    else
        cout<<"没有找到name为离散数学的书"<<endl;
    cout <<"现有库存书籍数量："<<s.GetCount() << endl;

    cout <<"查找图书 ID：3" << endl;
    tmpbook=s.findbyID(3);
    if(tmpbook.GetID()!=0)
        cout<<"找到ID为"<<3<<"的书，书名："<<tmpbook.GetName()<<endl;
    else
        cout<<"没有找到ID为"<<3<<"的书"<<endl;

    cout <<"查找图书 name：离散数学" << endl;
    tmpbook=s.findbyName("离散数学");
    if(tmpbook.GetID()!=0)
        cout<<"找到name为离散数学的书，ID："<<tmpbook.GetID()<<endl;
    else
        cout<<"没有找到name为离散数学的书"<<endl;

    cout<<"输出所有库存图书的信息"<<endl;
    s.printList();
    cout<<"程序运行结束"<<endl;
    return 0;
}


