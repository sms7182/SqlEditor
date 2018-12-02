#pragma once
#include <\Users\mojta\source\repos\SQLAPI\include\SQLAPI.h>
#include <string>
enum DBType
{
	sql, oracle, mysql
};

class ConnectToDB
{
	SAConnection con;
	SACommand cmd;
	DBType dbType;
public:
	ConnectToDB();
	~ConnectToDB();
	void ConnectTo(DBType type);
	void CommandExecute(SAString ctx);
};


