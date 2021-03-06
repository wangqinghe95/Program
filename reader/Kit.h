#ifndef KIT_H
#define KIT_H


#include "ReadDefine.h"

class Kit
{
public:
    Kit();
    virtual ~Kit(){}

public:
    // 内核初始化，必须要先调用
    virtual  bool Init() = 0;

public:
    //接口
    virtual  QImage GetActruallyPageImage(int nPageNum) = 0;
    virtual  QSize GetActruallyPageSize(int nPageNum) = 0;
    virtual  int GetPageCount() = 0;
    virtual  QImage GetPageImage(int nPageNum) = 0;
    virtual  QSize GetPageSize(int nPageNum) = 0;
    // 获取目录树
    virtual  QDomDocument* GetTOC() = 0;

public:
    //获取文件名
    void  SetFileName(QString strFileName){ m_strFileName = strFileName;}
    //放大倍数
    void  SetDocMultiple(double multiple){ m_multiple = multiple;}

public:
    QString     m_strFileName; //文件名
    double      m_multiple; // 文件放大倍数

};

#endif // KIT_H
