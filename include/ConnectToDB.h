#pragma once

#include <string>

#include <SQLAPI.h>

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


