#pragma once
#ifndef __CALLBACK_PROXY_H__  
#define __CALLBACK_PROXY_H__  

//Tobject:���ö�������ͣ�Tparam�ص���������������  
template<typename Tobject, typename Tparam>
class CallbackProxy
{
    typedef void (Tobject::* CbFun)(Tparam*);

public:
    void Set(Tobject* pInstance, CbFun pFun);
    bool Exec(Tparam* pParam);

private:
    CbFun       pCbFun;     //�ص�����ָ��  
    Tobject* m_pInstance;    //���ö���  
};

//���õ��ö�����ص�����  
template<typename Tobject, typename Tparam>
void CallbackProxy<Tobject, Tparam>::Set(Tobject* pInstance, CbFun pFun)
{
    m_pInstance = pInstance;
    pCbFun = pFun;
};

//���ûص�����  
template<typename Tobject, typename Tparam>
bool CallbackProxy<Tobject, Tparam>::Exec(Tparam* pParam)
{
    (m_pInstance->*pCbFun)(pParam);
    return true;
}

extern std::map<int, CallbackProxy<hack, float>*>* g_pCBMap;

#endif