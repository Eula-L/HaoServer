#include "clogic.h"

void CLogic::setNetPackMap()
{
    NetPackMap(DEF_PACK_REGISTER_RQ)    = &CLogic::RegisterRq;
    NetPackMap(DEF_PACK_LOGIN_RQ)       = &CLogic::LoginRq;
}

#define _DEF_COUT_FUNC_    cout << "clientfd:"<< clientfd << __func__ << endl;

//注册
void CLogic::RegisterRq(sock_fd clientfd,char* szbuf,int nlen)
{
    //cout << "clientfd:"<< clientfd << __func__ << endl;
    _DEF_COUT_FUNC_
    //1、拆包

    //2、获取tel pwd name

    //3、查表 t_user tel有没有

   //name有没有

   //写入数据库id(主键自增),tel,pwd,name,头像

   //返回成功
}

//登录
void CLogic::LoginRq(sock_fd clientfd ,char* szbuf,int nlen)
{
    //cout << "clientfd:"<< clientfd << __func__ << endl;
    _DEF_COUT_FUNC_

    STRU_LOGIN_RS rs;
    // rs.m_lResult = password_error;
    SendData( clientfd , (char*)&rs , sizeof rs );
    //1、拆包 tel pwd

    //2、根据tel 查pwd和id

    //查不到 返回无此用户

    //查到了——pwd是否一致
    //一致 保存套接字
    
    //方法包
    
    //不一致

    //返回包id和结果

    
}
