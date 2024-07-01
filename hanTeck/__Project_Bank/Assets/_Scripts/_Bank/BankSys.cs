using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BankSys : MonoBehaviour
{
    BankMng m_bankMng = BankMng.Instance;
    

    void getMoney(string strBank, string UserName, int iMoney)
    {
        m_bankMng.GetBankInfo(strBank);
    }



    

}
