#include <iostream>
using namespace std;

//enum REACTS
//{
//    LIKE,
//    HAHA,
//    SAD,
//    LOVE,
//    ANGRY
//};
//struct Meme
//{
//    float offensive;
//    float lameness;
//    float funny;
//    int reacts[5];
//    Meme()
//    {
//        offensive = lameness = funny = 0;
//        for(int i = 0; i < 5; i++)
//        {
//            reacts[i] = 0;
//        }
//    }
//    Meme(float o, float l, float f)
//    {
//        offensive = o;
//        lameness = l;
//        funny = f;
//        for(int i = 0; i < 5; i++)
//        {
//            reacts[i] = 0;
//        }
//    }
//    float Success()
//    {
//        return 0.8 * funny + 0.2 * lameness + 0.2 * offensive;
//    }
//};
//
//struct Person
//{
//    short age;
//    Meme memes[];
//    Person()
//    {
//        memes = 0;
//    }
//};
//
//
//int main()
//{
//    Meme KhopriTod(0.1, 0, 1);
//    cout << KhopriTod.Success() << endl;
//    cout << KhopriTod.reacts[HAHA] << endl;
//    KhopriTod.reacts[LOVE] = 45;
//    KhopriTod.reacts[HAHA] = 85;
//    return 0;
//}










enum REACTS
{
    LIKE,
    LOVE,
    HAHA,
    WOW,
    SAD,
    ANGRY
};

struct Meme
{
    float offensive;
    float lameness;
    float funny;
    int reacts[6];
    Meme(float f, float o, float l)
    {
        funny = f;
        offensive = o;
        lameness = l;
        for(int i = 0; i < 6; i++)
            reacts[i] = 0;
    }
    float Success()
    {
        return 0.9 * funny + 0.1 * offensive + 0.05 * lameness;
    }
};
struct Person
{
    int memeCount;
    Meme* memes;
    Person()
    {
        memes = nullptr;
        memeCount = 0;
    }
    void AddMeme(Meme& m)
    {
        if(memes == nullptr)
        {
            memes = new Meme[1];
        }
    }
};
int main()
{
    Meme* KhopriTod = new Meme(0.9, 0, 0.1);
    (*KhopriTod).reacts[LOVE] = 45;
    KhopriTod->reacts[HAHA] = 90;
    cout << KhopriTod->reacts[HAHA] << endl;
    delete KhopriTod;
    return 0;
}










