//  header block begin
// /usr/include/qt/QtCore/qpropertyanimation.h
#ifndef protected
#define protected public
#endif
#include <qpropertyanimation.h>
#include <QtCore>
#include "callback_inherit.h"

// QPropertyAnimation is pure virtual: false
// QPropertyAnimation has virtual projected: true
//  header block end

//  main block begin

class MyQPropertyAnimation : public QPropertyAnimation {
public:
  virtual ~MyQPropertyAnimation() {}
// void QPropertyAnimation(class QObject *)
MyQPropertyAnimation(QObject * parent) : QPropertyAnimation(parent) {}
// void QPropertyAnimation(class QObject *, const class QByteArray &, class QObject *)
MyQPropertyAnimation(QObject * target, const QByteArray & propertyName, QObject * parent) : QPropertyAnimation(target, propertyName, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QPropertyAnimation::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void updateCurrentValue(const class QVariant &)
  virtual void updateCurrentValue(const QVariant & value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateCurrentValue", &handled, 1, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPropertyAnimation::updateCurrentValue(value);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
  virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateState", &handled, 2, (uint64_t)newState, (uint64_t)oldState, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPropertyAnimation::updateState(newState, oldState);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:69
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN18QPropertyAnimation5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QPropertyAnimation*)this_)->QPropertyAnimation::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:70
// [-2] void updateCurrentValue(const class QVariant &)
extern "C"
void C_ZN18QPropertyAnimation18updateCurrentValueERK8QVariant(void *this_, QVariant* value) {
  ((QPropertyAnimation*)this_)->QPropertyAnimation::updateCurrentValue(*value);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:71
// [-2] void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
extern "C"
void C_ZN18QPropertyAnimation11updateStateEN18QAbstractAnimation5StateES1_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QPropertyAnimation*)this_)->QPropertyAnimation::updateState(newState, oldState);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK18QPropertyAnimation10metaObjectEv(void *this_) {
  return (void*)((QPropertyAnimation*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:58
// [-2] void QPropertyAnimation(class QObject *)
extern "C"
void* C_ZN18QPropertyAnimationC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQPropertyAnimation*)(0);
  return  new MyQPropertyAnimation(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:59
// [-2] void QPropertyAnimation(class QObject *, const class QByteArray &, class QObject *)
extern "C"
void* C_ZN18QPropertyAnimationC2EP7QObjectRK10QByteArrayS1_(QObject * target, QByteArray* propertyName, QObject * parent) {
  auto _nilp = (MyQPropertyAnimation*)(0);
  return  new MyQPropertyAnimation(target, *propertyName, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:60
// [-2] void ~QPropertyAnimation()
extern "C"
void C_ZN18QPropertyAnimationD2Ev(void *this_) {
  delete (QPropertyAnimation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:62
// [8] QObject * targetObject()
extern "C"
void* C_ZNK18QPropertyAnimation12targetObjectEv(void *this_) {
  return (void*)((QPropertyAnimation*)this_)->targetObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:63
// [-2] void setTargetObject(class QObject *)
extern "C"
void C_ZN18QPropertyAnimation15setTargetObjectEP7QObject(void *this_, QObject * target) {
  ((QPropertyAnimation*)this_)->setTargetObject(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:65
// [8] QByteArray propertyName()
extern "C"
void* C_ZNK18QPropertyAnimation12propertyNameEv(void *this_) {
  auto rv = ((QPropertyAnimation*)this_)->propertyName();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:66
// [-2] void setPropertyName(const class QByteArray &)
extern "C"
void C_ZN18QPropertyAnimation15setPropertyNameERK10QByteArray(void *this_, QByteArray* propertyName) {
  ((QPropertyAnimation*)this_)->setPropertyName(*propertyName);
}

//  main block end
