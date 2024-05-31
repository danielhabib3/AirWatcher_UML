#if !defined(VIEW_H)
#define VIEW_H

class View
{

public:
    View &operator=(const View &unView);
    View(const View &unView);
    View();
    virtual ~View();

protected:
};

#endif // VIEW_H
