//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qanimationgroup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qanimationgroup.h>
#include <QtCore>
#include "callback_inherit.h"

// QAnimationGroup is pure virtual: true
// QAnimationGroup has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAnimationGroup : public QAnimationGroup {
public:
  virtual ~MyQAnimationGroup() {}
// void QAnimationGroup(QObject *)
MyQAnimationGroup(QObject * parent) : QAnimationGroup(parent) {}
// void QAnimationGroup(QAnimationGroupPrivate &, QObject *)
MyQAnimationGroup(QAnimationGroupPrivate & dd, QObject * parent) : QAnimationGroup(dd, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QAnimationGroup::event(event);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:70
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QAnimationGroup5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QAnimationGroup*)this_)->QAnimationGroup::event(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAnimationGroup10metaObjectEv(void *this_) {
  return (void*)((QAnimationGroup*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAnimationGroup11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAnimationGroup*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QAnimationGroup11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAnimationGroup*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAnimationGroup2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAnimationGroup::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAnimationGroup6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAnimationGroup::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:56
// [-2] void QAnimationGroup(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAnimationGroupC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQAnimationGroup*)(0);
  return 0; // new MyQAnimationGroup(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:57
// [-2] void ~QAnimationGroup()
extern "C" Q_DECL_EXPORT
void C_ZN15QAnimationGroupD2Ev(void *this_) {
  delete (QAnimationGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:59
// [8] QAbstractAnimation * animationAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QAnimationGroup11animationAtEi(void *this_, int index) {
  return (void*)((QAnimationGroup*)this_)->animationAt(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:60
// [4] int animationCount()
extern "C" Q_DECL_EXPORT
int C_ZNK15QAnimationGroup14animationCountEv(void *this_) {
  return (int)((QAnimationGroup*)this_)->animationCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:61
// [4] int indexOfAnimation(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
int C_ZNK15QAnimationGroup16indexOfAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  return (int)((QAnimationGroup*)this_)->indexOfAnimation(animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:62
// [-2] void addAnimation(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAnimationGroup12addAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QAnimationGroup*)this_)->addAnimation(animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:63
// [-2] void insertAnimation(int, QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAnimationGroup15insertAnimationEiP18QAbstractAnimation(void *this_, int index, QAbstractAnimation * animation) {
  ((QAnimationGroup*)this_)->insertAnimation(index, animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:64
// [-2] void removeAnimation(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN15QAnimationGroup15removeAnimationEP18QAbstractAnimation(void *this_, QAbstractAnimation * animation) {
  ((QAnimationGroup*)this_)->removeAnimation(animation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:65
// [8] QAbstractAnimation * takeAnimation(int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAnimationGroup13takeAnimationEi(void *this_, int index) {
  return (void*)((QAnimationGroup*)this_)->takeAnimation(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qanimationgroup.h:66
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN15QAnimationGroup5clearEv(void *this_) {
  ((QAnimationGroup*)this_)->clear();
}

//  main block end
