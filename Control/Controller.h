#if !defined(CONTROLLER_H)
#define CONTROLLER_H

class Controller
{

public:
    Controller &operator=(const Controller &unController);
    Controller(const Controller &unController);

    Controller();
    virtual ~Controller();

protected:
};

#endif // CONTROLLER_H
