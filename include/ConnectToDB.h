#pragma once

#include <SQLAPI.h>

enum DBType
{
    sql, oracle, mysql
};

class ConnectToDB
{
public:
    void ConnectTo(DBType type);
    void CommandExecute(SAString ctx);

private:
    SAConnection con;
    SACommand cmd;
    DBType dbType;
};
