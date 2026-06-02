#include<iostream>
#include<cstring>
using namespace std;

class Text
{
public:
    Text(char *str)
    {
        m_size=strlen(str)+1;
        m_buf=new char[m_size];
        strcpy(m_buf,str);
    }
    Text(Text &otherstr)
    {
        m_size=otherstr.m_size;
        m_buf=new char[m_size];
        strcpy(m_buf, otherstr.m_buf);
    }
    ~Text()
    { 
        delete [] m_buf; 
    }
    char *GetText()
    { 
        return m_buf; 
    }
    void ShowName()
    {
        cout<<&m_size<<":"<<this<<endl;
    }
private:
    int m_size;
    char* m_buf;
};

int main()
{
    Text t1("Hello");
    Text t2(t1);
    cout<<t1.GetText()<<endl;
    t1.ShowName();
    cout<<t2.GetText()<<endl;
    t2.ShowName();
    return 0;
}
