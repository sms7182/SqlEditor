#include "ConnectToDB.h"

void ConnectToDB::ConnectTo(DBType type) {
    dbType = type;

    switch (dbType)
    {
    case DBType::sql:
        con.Connect("192.168.1.54@Implementation3ERPDB", 
            "sa", "sa123", SA_SQLServer_Client);
        cmd.setConnection(&con);
        break;
    case DBType::mysql:
            break;
    case DBType::oracle:
        break;
    default:
        break;
    }
}

void ConnectToDB::CommandExecute(SAString ctx) {
    cmd.setCommandText(ctx);
    cmd.Execute();
    con.Commit();
}

