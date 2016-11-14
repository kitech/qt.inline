// /usr/include/qt/QtWidgets/qgraphicseffect.h
#include <qgraphicseffect.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qgraphicseffect.h:252
// const QMetaObject * metaObject()
extern "C"
void C_ZNK22QGraphicsOpacityEffect10metaObjectEv(void *this_) {
  /*return*/ ((QGraphicsOpacityEffect*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:256
// void QGraphicsOpacityEffect(class QObject *)
extern "C"
void* C_ZN22QGraphicsOpacityEffectC1EP7QObject(QObject * parent) {
  return new QGraphicsOpacityEffect(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicseffect.h:257
// void ~QGraphicsOpacityEffect()
extern "C"
void C_ZN22QGraphicsOpacityEffectD1Ev(void *this_) {
  delete (QGraphicsOpacityEffect*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:259
// qreal opacity()
extern "C"
void C_ZNK22QGraphicsOpacityEffect7opacityEv(void *this_) {
  /*return*/ ((QGraphicsOpacityEffect*)this_)->opacity();
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:260
// QBrush opacityMask()
extern "C"
void C_ZNK22QGraphicsOpacityEffect11opacityMaskEv(void *this_) {
  /*return*/ ((QGraphicsOpacityEffect*)this_)->opacityMask();
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:263
// void setOpacity(qreal)
extern "C"
void C_ZN22QGraphicsOpacityEffect10setOpacityEd(void *this_, qreal opacity) {
  ((QGraphicsOpacityEffect*)this_)->setOpacity(opacity);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:264
// void setOpacityMask(const class QBrush &)
extern "C"
void C_ZN22QGraphicsOpacityEffect14setOpacityMaskERK6QBrush(void *this_, const QBrush & mask) {
  ((QGraphicsOpacityEffect*)this_)->setOpacityMask(mask);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:267
// void opacityChanged(qreal)
extern "C"
void C_ZN22QGraphicsOpacityEffect14opacityChangedEd(void *this_, qreal opacity) {
  ((QGraphicsOpacityEffect*)this_)->opacityChanged(opacity);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:268
// void opacityMaskChanged(const class QBrush &)
extern "C"
void C_ZN22QGraphicsOpacityEffect18opacityMaskChangedERK6QBrush(void *this_, const QBrush & mask) {
  ((QGraphicsOpacityEffect*)this_)->opacityMaskChanged(mask);
}