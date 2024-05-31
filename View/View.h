#if ! defined ( VIEW_H )
#define VIEW_H


class View
{

public:
    View ( const View & unView );
    View ( );
    virtual ~View ( );
    void StartApplication();
    
    
private:
    void DisplayExitMessage();

};

#endif // VIEW_H

