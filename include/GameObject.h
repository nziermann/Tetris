#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H


class GameObject
{
    public:
        GameObject();
        virtual ~GameObject();
        bool moveLeft();
        bool moveRight();
        bool moveDown();
        bool rotate();
    protected:
    private:
};

#endif // GAMEOBJECT_H
