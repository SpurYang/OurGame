#ifndef __BODY_H__
#define __BODY_H__

#include "cocos2d.h"
USING_NS_CC;

class Npc : public cocos2d::Layer
{
public:
	Npc();
	void addSprite(cocos2d::Vec2 pos);
};
#endif 