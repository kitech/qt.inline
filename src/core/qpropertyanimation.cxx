//  header block begin
// /usr/include/qt/QtCore/qpropertyanimation.h
#include <qpropertyanimation.h>
#include <QtCore>

// QPropertyAnimation is pure virtual: false
// QPropertyAnimation has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:69
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN18QPropertyAnimation5eventEP6QEvent = 0;
extern "C" void set_callback_ZN18QPropertyAnimation5eventEP6QEvent(void*cbfn)
{ callback_ZN18QPropertyAnimation5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:70
// [-2] void updateCurrentValue(const class QVariant &)
extern "C"
void* callback_ZN18QPropertyAnimation18updateCurrentValueERK8QVariant = 0;
extern "C" void set_callback_ZN18QPropertyAnimation18updateCurrentValueERK8QVariant(void*cbfn)
{ callback_ZN18QPropertyAnimation18updateCurrentValueERK8QVariant = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpropertyanimation.h:71
// [-2] void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
extern "C"
void* callback_ZN18QPropertyAnimation11updateStateEN18QAbstractAnimation5StateES1_ = 0;
extern "C" void set_callback_ZN18QPropertyAnimation11updateStateEN18QAbstractAnimation5StateES1_(void*cbfn)
{ callback_ZN18QPropertyAnimation11updateStateEN18QAbstractAnimation5StateES1_ = cbfn; }

class MyQPropertyAnimation : public QPropertyAnimation {
public:
  virtual ~MyQPropertyAnimation() {}
// void QPropertyAnimation(class QObject *)
MyQPropertyAnimation(QObject * parent) : QPropertyAnimation(parent) {}
// void QPropertyAnimation(class QObject *, const class QByteArray &, class QObject *)
MyQPropertyAnimation(QObject * target, const QByteArray & propertyName, QObject * parent) : QPropertyAnimation(target, propertyName, parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    if (callback_ZN18QPropertyAnimation5eventEP6QEvent != 0) {
      // callback_ZN18QPropertyAnimation5eventEP6QEvent(event);
    }
    return QPropertyAnimation::event(event);
  }
// void updateCurrentValue(const class QVariant &)
  virtual void updateCurrentValue(const QVariant & value) {
    if (callback_ZN18QPropertyAnimation18updateCurrentValueERK8QVariant != 0) {
      // callback_ZN18QPropertyAnimation18updateCurrentValueERK8QVariant(value);
    }
    QPropertyAnimation::updateCurrentValue(value);
  }
// void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
  virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
    if (callback_ZN18QPropertyAnimation11updateStateEN18QAbstractAnimation5StateES1_ != 0) {
      // callback_ZN18QPropertyAnimation11updateStateEN18QAbstractAnimation5StateES1_(newState, oldState);
    }
    QPropertyAnimation::updateState(newState, oldState);
  }
};

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
void* C_ZN18QPropertyAnimationC2EP7QObjectRK10QByteArrayS1_(QObject * target, const QByteArray & propertyName, QObject * parent) {
  auto _nilp = (MyQPropertyAnimation*)(0);
  return  new MyQPropertyAnimation(target, propertyName, parent);
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
void C_ZN18QPropertyAnimation15setPropertyNameERK10QByteArray(void *this_, const QByteArray & propertyName) {
  ((QPropertyAnimation*)this_)->setPropertyName(propertyName);
}
//  main block end
