// /usr/include/qt/QtCore/qpropertyanimation.h
#include <qpropertyanimation.h>
#include <QtCore>

// virtual
// /usr/include/qt/QtCore/qpropertyanimation.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK18QPropertyAnimation10metaObjectEv(void *this_) {
  /*return*/ ((QPropertyAnimation*)this_)->metaObject();
}
// /usr/include/qt/QtCore/qpropertyanimation.h:58
// void QPropertyAnimation(class QObject *)
extern "C"
void* C_ZN18QPropertyAnimationC1EP7QObject(QObject * parent) {
  return new QPropertyAnimation(parent);
}
// /usr/include/qt/QtCore/qpropertyanimation.h:59
// void QPropertyAnimation(class QObject *, const class QByteArray &, class QObject *)
extern "C"
void* C_ZN18QPropertyAnimationC1EP7QObjectRK10QByteArrayS1_(QObject * target, const QByteArray & propertyName, QObject * parent) {
  return new QPropertyAnimation(target, propertyName, parent);
}
// virtual
// /usr/include/qt/QtCore/qpropertyanimation.h:60
// void ~QPropertyAnimation()
extern "C"
void C_ZN18QPropertyAnimationD1Ev(void *this_) {
  delete (QPropertyAnimation*)(this_);
}
// /usr/include/qt/QtCore/qpropertyanimation.h:62
// QObject * targetObject()
extern "C"
void C_ZNK18QPropertyAnimation12targetObjectEv(void *this_) {
  /*return*/ ((QPropertyAnimation*)this_)->targetObject();
}
// /usr/include/qt/QtCore/qpropertyanimation.h:63
// void setTargetObject(class QObject *)
extern "C"
void C_ZN18QPropertyAnimation15setTargetObjectEP7QObject(void *this_, QObject * target) {
  ((QPropertyAnimation*)this_)->setTargetObject(target);
}
// /usr/include/qt/QtCore/qpropertyanimation.h:65
// QByteArray propertyName()
extern "C"
void C_ZNK18QPropertyAnimation12propertyNameEv(void *this_) {
  /*return*/ ((QPropertyAnimation*)this_)->propertyName();
}
// /usr/include/qt/QtCore/qpropertyanimation.h:66
// void setPropertyName(const class QByteArray &)
extern "C"
void C_ZN18QPropertyAnimation15setPropertyNameERK10QByteArray(void *this_, const QByteArray & propertyName) {
  ((QPropertyAnimation*)this_)->setPropertyName(propertyName);
}