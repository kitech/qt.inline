//  header block begin
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#include <qgraphicseffect.h>
#include <QtWidgets>

// QGraphicsOpacityEffect is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:273
// [-2] void draw(class QPainter *)
extern "C"
void* callback_ZN22QGraphicsOpacityEffect4drawEP8QPainter = 0;
extern "C" void set_callback_ZN22QGraphicsOpacityEffect4drawEP8QPainter(void*cbfn)
{ callback_ZN22QGraphicsOpacityEffect4drawEP8QPainter = cbfn; }

class MyQGraphicsOpacityEffect : public QGraphicsOpacityEffect {
public:
MyQGraphicsOpacityEffect(QObject * parent) : QGraphicsOpacityEffect(parent) {}
// void draw(class QPainter *)
// void draw(class QPainter *)
virtual void draw(QPainter * painter) {
  if (callback_ZN22QGraphicsOpacityEffect4drawEP8QPainter != 0) {
  // callback_ZN22QGraphicsOpacityEffect4drawEP8QPainter(painter);
}}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:254
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK22QGraphicsOpacityEffect10metaObjectEv(void *this_) {
  return (void*)((QGraphicsOpacityEffect*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:258
// [-2] void QGraphicsOpacityEffect(class QObject *)
extern "C"
void* C_ZN22QGraphicsOpacityEffectC1EP7QObject(QObject * parent) {
  (MyQGraphicsOpacityEffect*)(0);
  return  new MyQGraphicsOpacityEffect(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:259
// [-2] void ~QGraphicsOpacityEffect()
extern "C"
void C_ZN22QGraphicsOpacityEffectD1Ev(void *this_) {
  delete (QGraphicsOpacityEffect*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:261
// [8] qreal opacity()
extern "C"
qreal C_ZNK22QGraphicsOpacityEffect7opacityEv(void *this_) {
  return (qreal)((QGraphicsOpacityEffect*)this_)->opacity();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:262
// [8] QBrush opacityMask()
extern "C"
void* C_ZNK22QGraphicsOpacityEffect11opacityMaskEv(void *this_) {
  auto rv = ((QGraphicsOpacityEffect*)this_)->opacityMask();
return new QBrush(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:265
// [-2] void setOpacity(qreal)
extern "C"
void C_ZN22QGraphicsOpacityEffect10setOpacityEd(void *this_, qreal opacity) {
  ((QGraphicsOpacityEffect*)this_)->setOpacity(opacity);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:266
// [-2] void setOpacityMask(const class QBrush &)
extern "C"
void C_ZN22QGraphicsOpacityEffect14setOpacityMaskERK6QBrush(void *this_, const QBrush & mask) {
  ((QGraphicsOpacityEffect*)this_)->setOpacityMask(mask);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:269
// [-2] void opacityChanged(qreal)
extern "C"
void C_ZN22QGraphicsOpacityEffect14opacityChangedEd(void *this_, qreal opacity) {
  ((QGraphicsOpacityEffect*)this_)->opacityChanged(opacity);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:270
// [-2] void opacityMaskChanged(const class QBrush &)
extern "C"
void C_ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(void *this_, const QBrush & mask) {
  ((QGraphicsOpacityEffect*)this_)->opacityMaskChanged(mask);
}
//  main block end
