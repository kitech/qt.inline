//  header block begin
// /usr/include/qt/QtCore/qanimationgroup.h
#include <qanimationgroup.h>
#include <QtCore>

// QAnimationGroup is pure virtual: false
// QAnimationGroup has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:70
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN15QAnimationGroup5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN15QAnimationGroup5eventEP6QEvent(void*cbfn)
{ callback_ZN15QAnimationGroup5eventEP6QEvent_fnptr = cbfn; }

class MyQAnimationGroup : public QAnimationGroup {
public:
  virtual ~MyQAnimationGroup() {}
// void QAnimationGroup(class QObject *)
MyQAnimationGroup(QObject * parent) : QAnimationGroup(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN15QAnimationGroup5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    return QAnimationGroup::event(event);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QAnimationGroup10metaObjectEv(void *this_) {
  return (void*)((QAnimationGroup*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:56
// [-2] void QAnimationGroup(class QObject *)
extern "C"
void* C_ZN15QAnimationGroupC1EP7QObject(QObject * parent) {
  auto _nilp = (MyQAnimationGroup*)(0);
  return 0; // new MyQAnimationGroup(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:57
// [-2] void ~QAnimationGroup()
extern "C"
void C_ZN15QAnimationGroupD2Ev(void *this_) {
  delete (QAnimationGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:59
// [8] QAbstractAnimation * animationAt(int)
extern "C"
void* C_ZNK15QAnimationGroup11animationAtEi(void *this_, int index) {
  return (void*)((QAnimationGroup*)this_)->animationAt(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:60
// [4] int animationCount()
extern "C"
int C_ZNK15QAnimationGroup14animationCountEv(void *this_) {
  return (int)((QAnimationGroup*)this_)->animationCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:61
// [4] int indexOfAnimation(class QAbstractAnimation *)
extern "C"
int C_ZNK15QAnimationGroup16indexOfAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  return (int)((QAnimationGroup*)this_)->indexOfAnimation(animation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:62
// [-2] void addAnimation(class QAbstractAnimation *)
extern "C"
void C_ZN15QAnimationGroup12addAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QAnimationGroup*)this_)->addAnimation(animation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:63
// [-2] void insertAnimation(int, class QAbstractAnimation *)
extern "C"
void C_ZN15QAnimationGroup15insertAnimationEiP18QAbstractAnimation(void *this_, int index, QAbstractAnimation * animation) {
  ((QAnimationGroup*)this_)->insertAnimation(index, animation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:64
// [-2] void removeAnimation(class QAbstractAnimation *)
extern "C"
void C_ZN15QAnimationGroup15removeAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QAnimationGroup*)this_)->removeAnimation(animation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:65
// [8] QAbstractAnimation * takeAnimation(int)
extern "C"
void* C_ZN15QAnimationGroup13takeAnimationEi(void *this_, int index) {
  return (void*)((QAnimationGroup*)this_)->takeAnimation(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:66
// [-2] void clear()
extern "C"
void C_ZN15QAnimationGroup5clearEv(void *this_) {
  ((QAnimationGroup*)this_)->clear();
}
//  main block end
