//  header block begin
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#ifndef protected
#define protected public
#endif
#include <qgraphicseffect.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsOpacityEffect is pure virtual: false
// QGraphicsOpacityEffect has virtual projected: true
//  header block end

//  main block begin

class MyQGraphicsOpacityEffect : public QGraphicsOpacityEffect {
public:
  virtual ~MyQGraphicsOpacityEffect() {}
// void QGraphicsOpacityEffect(class QObject *)
MyQGraphicsOpacityEffect(QObject * parent) : QGraphicsOpacityEffect(parent) {}
// Protected virtual Visibility=Default Availability=Available
// void draw(class QPainter *)
  virtual void draw(QPainter * painter) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"draw", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QGraphicsOpacityEffect::draw(painter);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:273
// [-2] void draw(class QPainter *)
extern "C"
void C_ZN22QGraphicsOpacityEffect4drawEP8QPainter(void *this_, QPainter * painter) {
  ((QGraphicsOpacityEffect*)this_)->QGraphicsOpacityEffect::draw(painter);
}

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
void* C_ZN22QGraphicsOpacityEffectC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQGraphicsOpacityEffect*)(0);
  return  new MyQGraphicsOpacityEffect(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:259
// [-2] void ~QGraphicsOpacityEffect()
extern "C"
void C_ZN22QGraphicsOpacityEffectD2Ev(void *this_) {
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
void C_ZN22QGraphicsOpacityEffect14setOpacityMaskERK6QBrush(void *this_, QBrush* mask) {
  ((QGraphicsOpacityEffect*)this_)->setOpacityMask(*mask);
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
void C_ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(void *this_, QBrush* mask) {
  ((QGraphicsOpacityEffect*)this_)->opacityMaskChanged(*mask);
}

//  main block end
