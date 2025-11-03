#include <string>
class Person {
    private:
        std::string firstname;
        std::string lastname;
        int arbitrarynumber;

        friend bool operator<(int i, const Person& p);

    public:
        Person(std::string first, std::string last, int arbitrary);
        ~Person();
        std::string GetName() const;
        int GetNumber() const { return arbitrarynumber; }
        void SetNumber(int number) { arbitrarynumber = number; }
        bool operator<(const Person& p) const;
        bool operator<(int i) const;
};
