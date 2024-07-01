using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UserModel
{
    string strUserName;
    int iUserNo;
    long lUserMoney;

    string StrName => strUserName;

    public UserModel()
    {
        strUserName = null;
        iUserNo = -1;
        lUserMoney = 0;
    }

    public UserModel(string strName, int iUserNo, long lUserMoney)
    {
        this.strUserName = strName;
        this.iUserNo = iUserNo;
        this.lUserMoney = lUserMoney;
    }
}
