/* Parser.hpp */
#include "scanner.hpp"
#include <string>
#include <vector>

using namespace std;

class Attribute{
public:
    string name;
    string type;
    bool isPrimaryKey;
    
    Attribute(){
        name = "";
        type = "";
        isPrimaryKey = false;
    }
};

class Parser{
private:
    string query_str;
    Scanner scanner;

    string table_name;
    vector<Attribute> schema;
public:
    Parser(string query_str);
    void Parse();
    bool Create_Table_Query();
    bool Insert_Query();
    bool Read_Schema();
    bool Read_Attr_Def(Attribute& attr);
};


