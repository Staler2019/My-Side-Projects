#pragma once
#ifndef INHERIT_H
#define INHERIT_H

class Father {
public:
    Father();
    Father(int, int);
    ~Father();

protected:
    int x, y;
};

class Son : public Father {
public:
    Son();
    Son(int, int, int);
    ~Son();

private:
    int z;
};

#endif