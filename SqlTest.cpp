// SqlTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
//#include <\Users\mojta\source\repos\SQLAPI\include\SQLAPI.h>
#include "ConnectToDB.h"
#include <string>
int main()
{
	ConnectToDB con;
	con.ConnectTo(DBType::sql);
     const char *sd = "Create table TestCPlus5(Id uniqueidentifier, Name nvarchar(max)) ";
	con.CommandExecute(sd);
	
    return 0;
}

