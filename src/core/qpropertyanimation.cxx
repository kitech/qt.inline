//  header block begin
// since 0x040600
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

class Q_DECL_EXPORT MyQPropertyAnimation : public QPropertyAnimation {
public:
  virtual ~MyQPropertyAnimation() {}
// void QPropertyAnimation(QObject *)
MyQPropertyAnimation(QObject * parent) : QPropertyAnimation(parent) {}
// void QPropertyAnimation(QObject *, const QByteArray &, QObject *)
MyQPropertyAnimation(QObject * target, const QByteArray & propertyName, QObject * parent) : QPropertyAnimation(target, propertyName, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QPropertyAnimation::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void updateCurrentValue(const QVariant &)
  virtual void updateCurrentValue(const QVariant & value) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateCurrentValue", &handled, 1, (uint64_t)&value, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPropertyAnimation::updateCurrentValue(value);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
  virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateState", &handled, 2, (uint64_t)newState, (uint64_t)oldState, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QPropertyAnimation::updateState(newState, oldState);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:69
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN18QPropertyAnimation5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QPropertyAnimation*)this_)->QPropertyAnimation::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:70
// [-2] void updateCurrentValue(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN18QPropertyAnimation18updateCurrentValueERK8QVariant(void *this_, QVariant* value) {
  ((QPropertyAnimation*)this_)->QPropertyAnimation::updateCurrentValue(*value);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:71
// [-2] void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
extern "C" Q_DECL_EXPORT
void C_ZN18QPropertyAnimation11updateStateEN18QAbstractAnimation5StateES1_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QPropertyAnimation*)this_)->QPropertyAnimation::updateState(newState, oldState);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QPropertyAnimation10metaObjectEv(void *this_) {
  return (void*)((QPropertyAnimation*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QPropertyAnimation11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QPropertyAnimation*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN18QPropertyAnimation11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QPropertyAnimation*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QPropertyAnimation2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPropertyAnimation::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QPropertyAnimation6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPropertyAnimation::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:58
// [-2] void QPropertyAnimation(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QPropertyAnimationC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQPropertyAnimation*)(0);
  return  new MyQPropertyAnimation(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:59
// [-2] void QPropertyAnimation(QObject *, const QByteArray &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QPropertyAnimationC2EP7QObjectRK10QByteArrayS1_(QObject * target, QByteArray* propertyName, QObject * parent) {
  auto _nilp = (MyQPropertyAnimation*)(0);
  return  new MyQPropertyAnimation(target, *propertyName, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:60
// [-2] void ~QPropertyAnimation()
extern "C" Q_DECL_EXPORT
void C_ZN18QPropertyAnimationD2Ev(void *this_) {
  delete (QPropertyAnimation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:62
// [8] QObject * targetObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QPropertyAnimation12targetObjectEv(void *this_) {
  return (void*)((QPropertyAnimation*)this_)->targetObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:63
// [-2] void setTargetObject(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN18QPropertyAnimation15setTargetObjectEP7QObject(void *this_, QObject * target) {
  ((QPropertyAnimation*)this_)->setTargetObject(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:65
// [8] QByteArray propertyName()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QPropertyAnimation12propertyNameEv(void *this_) {
  auto rv = ((QPropertyAnimation*)this_)->propertyName();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:66
// [-2] void setPropertyName(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN18QPropertyAnimation15setPropertyNameERK10QByteArray(void *this_, QByteArray* propertyName) {
  ((QPropertyAnimation*)this_)->setPropertyName(*propertyName);
}

//  main block end
