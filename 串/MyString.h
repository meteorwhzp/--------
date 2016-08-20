#ifndef _MYSTRING_H
#define _MYSTRING_H

const int MAXSIZE = 100;

class CMyString
{
public:
	CMyString(const CMyString& copy);
	CMyString(const char *init);
	CMyString();
	~CMyString()
	{
		delete[] m_pstr;
	}

	int Length() const
	{
		return m_curlen;
	}

	int Find(CMyString part) const;
	char* GetBuffer() const;
	
	//‘ÀÀ„∑˚÷ÿ‘ÿ
public:
	CMyString& operator()(int pos, int len);
	bool operator==(const CMyString cmp_str) const;
	bool operator!=(const CMyString cmp_str) const;
	bool operator<(const CMyString cmp_str) const;
	bool operator>(const CMyString cmp_str) const;
	bool operator!() const{
		return m_curlen == 0;
	}


private:
	void Next();
	int m_curlen;
	char *m_pstr;
	int m_pnext;
};


#endif
