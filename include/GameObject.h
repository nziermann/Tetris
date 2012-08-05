#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H


class GameObject
{
    public:
        GameObject();
        virtual ~GameObject();
        void moveLeft();
        void moveRight();
        void moveDown();
        void rotate();
    protected:
    private:
};

#endif // GAMEOBJECT_H
