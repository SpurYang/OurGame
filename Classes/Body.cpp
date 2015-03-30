#include"Body.h"
void Npc::addSprite(cocos2d::Vec2 pos){
	auto body = Sprite::create("CloseNormal.png");
	//设置一个yuan形绑定在精灵上面
	body->setPhysicsBody(PhysicsBody::createCircle((body->getContentSize().width / 2)));

	body->setPosition(pos);
	body->setTag(1);
	//	body-getShape(0)->setRestitution(1.0f);
	addChild(body);
}
Npc::Npc()
{

}