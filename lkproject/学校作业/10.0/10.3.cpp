#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
#include<fstream>
using namespace std;

class Commodity//商品类
{
public:
	char com_no[5];//商品编号
	int price;//商品价格
	char sup_no[5];//供应商编号
	char sup_name[10];//供应商名称
	char phone[15];//联系电话
	char com_type[10];//商品类型
	Commodity(char* no="",int pr=-1,char* sno="",char* sname="",char* ph="",char* ty="")//带参默认构造函数
	{
		   strcpy(com_no,no);
		   price=pr;
		   strcpy(sup_no,sno);
		   strcpy(sup_name,sname);
		   strcpy(phone,ph);
		   strcpy(com_type,ty);
	}
	Commodity(const Commodity &c)//拷贝构造函数
	{
		strcpy(com_no,c.com_no);
		price=c.price;
		strcpy(sup_no,c.sup_no);
		strcpy(sup_name,c.sup_name);
		strcpy(phone,c.phone);
		strcpy(com_type,c.com_type);
	}
	~Commodity(){}//析构函数
	char* getcom_no()//获取商品编号
	{
		return com_no;
	}
	int getprice()//获取商品价格
	{
		return price;
	}
	char* getsup_no()//获取供应商编号
	{
		return sup_no;
	}
	char* getsup_name()//获取供应商名称
	{
		return sup_name;
	}
	char* getphone()//获取联系电话
	{
		return phone;
	}
	char* getcom_type()//获取商品类型
	{
		return com_type;
	}
	void show()
	{
		cout<<"--------商品信息--------"<<endl;
		cout<<"商品编号："<<getcom_no()<<endl;
		cout<<"商品价格："<<getprice()<<endl;
		cout<<"供应商编号："<<getsup_no()<<endl;
		cout<<"供应商名称："<<getsup_name()<<endl;
		cout<<"联系电话："<<getphone()<<endl;
		cout<<"商品类型："<<getcom_type()<<endl;
	}
};
int count;
class Supplier:public Commodity//供应商类
{
public:
	Supplier(char* no="",int pr=-1,char* sno="",char* sname="",char* ph="",char* ty=""):Commodity(no,pr,sno,sname,ph,ty)//带参默认构造函数
	{}
	~Supplier(){}//析构函数
};
class Type:public Supplier//商品类型类
{
public:
	Commodity com[51];//商品数组
	int searchitem(const char* no);//查找指定编号的商品
	Type(char* no="",int pr=-1,char* sno="",char* sname="",char* ph="",char* ty=""):Supplier(no,pr,sno,sname,ph,ty)//带参默认构造函数
	{}
	~Type(){}//析构函数
	void additem();//添加商品信息
	void alteritem();//修改商品信息
	void delitem();//删除商品信息
	void checkitem();//查询商品信息
	void save();//保存、输出商品信息
	void manu();//功能菜单
	void system();
};
int Type::searchitem(const char* com_no)
{
	for(int i=1;i<=count;i++)
		if(strcmp(com[i].getcom_no(),com_no)==0)
			return i;
	return -1;
}
void Type::additem()
{
	char no[5];//临时保存编号
	cout<<"请输入要添加商品的编号[-1退出]：";
	cin>>no;
	while(strcmp(no,"-1")!=0)
	{
		int i=searchitem(no);
		while(i!=-1)
		{
			cout<<"你添加的商品编号已存在！请重新输入！"<<endl;
			additem();
		}
		count++;
		int pr;
		cout<<"商品价格：";
		cin>>pr;
		char sno[5];
		cout<<"供应商编号：";
		cin>>sno;
		char sname[10];
		cout<<"供应商名称：";
		cin>>sname;
		char ph[15];
		cout<<"联系电话：";
		cin>>ph;
		char ty[10];
		cout<<"商品类型：";
		cin>>ty;
		Commodity c(no,pr,sno,sname,ph,ty);
		com[count]=c;
		cout<<"请输入要添加商品的编号[-1退出]：";
		cin>>no;
	}
	cout<<"按任意键返回。"<<endl;
	getch();
	system();
}
void Type::alteritem()
{
	char no[5];//临时保存编号
	cout<<"请输入要修改的商品编号[-1退出]：";
	cin>>no;
	while(strcmp(no,"-1")!=0)
	{
		int i=searchitem(no);
		if(i==-1)
		{
			cout<<"你要修改的商品编号不存在！请重新输入！"<<endl;
			alteritem();
		}
		else
		{
			cout<<"你要修改的商品信息如下："<<endl;
			com[i].show();
			cout<<"请输入商品的新信息："<<endl;
			char no[5];
			cout<<"商品编号：";
			cin>>no;
			int pr;
			cout<<"商品价格：";
			cin>>pr;
			char sno[5];
			cout<<"供应商编号：";
			cin>>sno;
			char sname[10];
			cout<<"供应商名称：";
			cin>>sname;
			char ph[15];
			cout<<"联系电话：";
			cin>>ph;
			char ty[10];
			cout<<"商品类型：";
			cin>>ty;
			Commodity c(no,pr,sno,sname,ph,ty);
			com[i]=c;
			cout<<"信息修改成功！"<<endl;
		}
		cout<<"请输入要修改商品的编号[-1退出]：";
		cin>>no;
	}
	cout<<"按任意键返回。"<<endl;
	getch();
	system();
}
void Type::delitem()
{
	char no[5];//临时保存编号
	cout<<"请输入要删除商品的编号[-1退出]：";
	cin>>no;
	int i=searchitem(no);
	while(strcmp(no,"-1")!=0)
	{
		int i=searchitem(no);
		if(i==-1)
		{
			cout<<"你要删除的商品编号不存在！请重新输入！"<<endl;
			delitem();
		}
		else
		{
			cout<<"你要删除的商品信息如下："<<endl;
			com[i].show();
			char anser;
			cout<<"是否删除该商品？(Y/N)"<<endl;
			cin>>anser;
			if(anser=='y'||anser=='Y')
			{
				for(int j=i+1;j<=count;j++)
					com[j-1]=com[j];
				count--;
				cout<<"删除成功！"<<endl;
			}
		}
		cout<<"请输入要删除商品的编号[-1退出]：";
		cin>>no;
	}
	cout<<"按任意键返回。"<<endl;
	getch();
	system();
}
void Type::checkitem()
{
	char no[5];//临时保存编号
	cout<<"请输入要查询商品的编号：[-1退出]"<<endl;
	cin>>no;
	int i=searchitem(no);
	while(strcmp(no,"-1")!=0)
	{
		if(i==-1)
		{
			cout<<"你查询的商品编号不存在！请重新输入！"<<endl;
			checkitem();
		}
		else
		{com[i].show();}
		cout<<"请输入要查询商品的编号[-1退出]：";
		cin>>no;
	}
	cout<<"按任意键返回。"<<endl;
	getch();
	system();
}
void Type::save()
{
	ofstream fout("商品管理系统.txt");  //同目录下的文件处理
		for(int i=1;i<=count;i++)
		{
			fout<<"商品编号："<<com[i].getcom_no()<<endl;
			fout<<"商品价格："<<com[i].getprice()<<endl;
			fout<<"供应商编号："<<com[i].getsup_no()<<endl;
			fout<<"供应商名称："<<com[i].getsup_no()<<endl;
			fout<<"商品类型："<<com[i].getcom_type()<<endl;
		}
		cout<<"按任意键返回。"<<endl;
		getch();
		system();
}
void Type::manu()
{
	cout<<"-------商品管理系统-------"<<endl;
	cout<<"-----1--添加商品信息------"<<endl;
	cout<<"-----2--修改商品信息------"<<endl;
	cout<<"-----3--删除商品信息------"<<endl;
	cout<<"-----4--查询商品信息------"<<endl;
	cout<<"-----5--输出商品信息------"<<endl;
	cout<<"-----0-----退出-----------"<<endl;
}
void Type::system()
{
	int n;
	manu();
	cout<<"请选择要进行的操作：";
	cin>>n;
	while(n<0||n>5)
	{
		cout<<"请重新选择要进行的操作：";
		cin>>n;
	}
	switch(n)
	{
	case 1:additem();break;
	case 2:alteritem();break;
	case 3:delitem();break;
	case 4:checkitem();break;
	case 5:save();break;
	case 0:return;
	}
}

int main()
{
	cout<<endl;
	Type t;//生成对象
	t.system();
    return 0;	
}

