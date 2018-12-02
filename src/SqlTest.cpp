#include "ConnectToDB.h"

int main(int argc, char** argv)
{
    ConnectToDB con;
    con.ConnectTo(DBType::sql);
    auto query = 
        "Create table TestCPlus5(Id uniqueidentifier, Name nvarchar(max)) ";
    con.CommandExecute(query);
    return 0;
}
