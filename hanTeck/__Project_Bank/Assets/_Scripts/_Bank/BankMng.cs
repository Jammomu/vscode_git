using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BankMng : SingletonObj<BankMng>
{
    public Dictionary<string, BankModel> m_BankInfo; 



    #region BankInfo
    public bool AddBankInfo(BankModel bankInfo)
    {
        if(bankInfo != null && !m_BankInfo.ContainsKey(bankInfo.StrName))
        {
            m_BankInfo.Add(bankInfo.StrName, bankInfo);
            return true;
        }
        return false;
    }

    public BankModel GetBankInfo(string strName)
    {
        if (m_BankInfo.ContainsKey(strName))
        {
            return m_BankInfo[strName]; 
        }
        Debug.Log("NO BankInfo");
        return null;
    }
    #endregion



}
