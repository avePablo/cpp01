#ifndef HARL_HPP
#define HARL_HPP

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    void debugMessage(void);
    void infoMessage(void);
    void warningMessage(void);
    void errorMessage(void);
};

#endif
