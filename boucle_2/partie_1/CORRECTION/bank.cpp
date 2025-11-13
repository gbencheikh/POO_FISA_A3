#include <iostream>

using namespace std; 

class BankAccount{
private: 
    double balance; 

public:
    BankAccount(): balance(0){}
    BankAccount(double balance):  balance(balance){}
    BankAccount(BankAccount* B){
        balance = B->getBalance(); 
    }

    double getBalance() const {
        return balance; 
    }

    void setBalance(const double b){
        if(b > 0)
            balance = b;  
    }

    bool retire(const double amount){
        if(amount <= balance){
            balance -= amount; 
            return true;
        }else{ 
            return false; 
        }
    }

    void depose(const double amount){
        balance += amount; 
    }

    void affiche() const {
        cout << "balance : " << balance << endl; 
    }
};

class Transaction{
private: 
    BankAccount* to; 
    BankAccount* from; 
    double amount; 

public:
    Transaction(){
        to = new BankAccount(); 
        from = new BankAccount(); 
        amount = 0; 
    }

    Transaction(BankAccount* TO, BankAccount* FROM, double AMOUNT){
        to = TO; 
        from = FROM; 
        amount = AMOUNT; 
    }

    Transaction(Transaction* T){
        to = new BankAccount(T->getTo());
        from = new BankAccount(T->getFrom()); 
        amount = T->getAmount(); 
    }

    BankAccount* getTo() const {
        return to; 
    }
    BankAccount* getFrom() const {
        return from; 
    }
    double getAmount() const {
        return amount; 
    }

    void setTo(BankAccount* TO){
        to = new BankAccount(TO); 
    }
    void setFrom(BankAccount* FROM){
        from = new BankAccount(FROM); 
    }
    void setAmount(double AMOUNT){
        amount = AMOUNT; 
    }
    bool execute(){
        bool r = from->retire(amount); 
        if(r == true){
            to->depose(amount);
        }else{
            cout << "Erreur : solde insuffisant" << endl;
        }
        return r; 
    }
};

int main() {
    BankAccount* account1 = new BankAccount(1000.0);
    BankAccount* account2 = new BankAccount(500.0);

    Transaction* transaction = new Transaction(account1, account2, 500.0);

    bool res = transaction->execute();
    if (res) {
        std::cout << "Transaction successful" << std::endl;
    } else {
        std::cout << "Transaction failed" << std::endl;
    }

    account1->affiche();
    account2->affiche();

    delete account1;
    delete account2;

    account1 = new BankAccount(1000.0);
    account2 = new BankAccount(500.0);

    transaction = new Transaction(account1, account2, 5000.0);

    res = transaction->execute();

    if (res) {
        std::cout << "Transaction successful" << std::endl;
    } else {
        std::cout << "Transaction failed" << std::endl;
    }
    
    account1->affiche();
    account2->affiche();
    
    return 0;
}
