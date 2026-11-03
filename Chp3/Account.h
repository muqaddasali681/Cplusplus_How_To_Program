#include <string>


//str name;
class Account {
public:

    explicit Account(std::string accountName)
    : name{accountName} {
                           
    }


    void setName(std::string accountName) {
        name = accountName;
    }

    std::string getName() const {
        return name;
    }

    private:
    std::string name;

};