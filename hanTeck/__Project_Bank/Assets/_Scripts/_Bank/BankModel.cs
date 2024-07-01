using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public partial class BankModel
{
    public enum eBankType
    {
        CLOSE = 0, //닫혔을때
        OPEN, //열렸을떄
        DO_NOT_MAKE_ACCOUNT, //통장개설불가
        NO_MONEY //돈이 없을경우
    }
    eBankType CurBankType;
    string strBankName;
    int iBankCode;
    long lBankMoney;
    int iAccCount;
    float fAccPer; //이자율

    public string StrName => strBankName;

    public BankModel()
    {
        CurBankType = eBankType.CLOSE;
        strBankName = null;
        iBankCode = -1;
        lBankMoney = 0;
        iAccCount = 0;
        fAccPer = 0.0f;
        m_lstUser = null;
    }
    
    public BankModel(string strName, int iCode, long lMoney, int iAccCount)
    {
        this.CurBankType = eBankType.CLOSE;
        this.strBankName = strName;
        this.iBankCode = iCode;
        this.lBankMoney = lMoney;
        this.iAccCount = iAccCount;
        fAccPer = 0.0f;
        m_lstUser = null;
    }

}
