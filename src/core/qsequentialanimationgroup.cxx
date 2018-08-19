//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qsequentialanimationgroup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsequentialanimationgroup.h>
#include <QtCore>
#include "callback_inherit.h"

// QSequentialAnimationGroup is pure virtual: false
// QSequentialAnimationGroup has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSequentialAnimationGroup : public QSequentialAnimationGroup {
public:
  virtual ~MyQSequentialAnimationGroup() {}
// void QSequentialAnimationGroup(QObject *)
MyQSequentialAnimationGroup(QObject * parent) : QSequentialAnimationGroup(parent) {}
// void QSequentialAnimationGroup(QSequentialAnimationGroupPrivate &, QObject *)
MyQSequentialAnimationGroup(QSequentialAnimationGroupPrivate & dd, QObject * parent) : QSequentialAnimationGroup(dd, parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSequentialAnimationGroup::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void updateCurrentTime(int)
  virtual void updateCurrentTime(int arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateCurrentTime", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSequentialAnimationGroup::updateCurrentTime(arg0);
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
    QSequentialAnimationGroup::updateState(newState, oldState);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void updateDirection(QAbstractAnimation::Direction)
  virtual void updateDirection(QAbstractAnimation::Direction direction) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateDirection", &handled, 1, (uint64_t)direction, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSequentialAnimationGroup::updateDirection(direction);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:73
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN25QSequentialAnimationGroup5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QSequentialAnimationGroup*)this_)->QSequentialAnimationGroup::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:75
// [-2] void updateCurrentTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN25QSequentialAnimationGroup17updateCurrentTimeEi(void *this_, int arg0) {
  ((QSequentialAnimationGroup*)this_)->QSequentialAnimationGroup::updateCurrentTime(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:76
// [-2] void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
extern "C" Q_DECL_EXPORT
void C_ZN25QSequentialAnimationGroup11updateStateEN18QAbstractAnimation5StateES1_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QSequentialAnimationGroup*)this_)->QSequentialAnimationGroup::updateState(newState, oldState);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:77
// [-2] void updateDirection(QAbstractAnimation::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN25QSequentialAnimationGroup15updateDirectionEN18QAbstractAnimation9DirectionE(void *this_, QAbstractAnimation::Direction direction) {
  ((QSequentialAnimationGroup*)this_)->QSequentialAnimationGroup::updateDirection(direction);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QSequentialAnimationGroup10metaObjectEv(void *this_) {
  return (void*)((QSequentialAnimationGroup*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN25QSequentialAnimationGroup11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSequentialAnimationGroup*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN25QSequentialAnimationGroup11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSequentialAnimationGroup*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QSequentialAnimationGroup2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSequentialAnimationGroup::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QSequentialAnimationGroup6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSequentialAnimationGroup::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:59
// [-2] void QSequentialAnimationGroup(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN25QSequentialAnimationGroupC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSequentialAnimationGroup*)(0);
  return  new MyQSequentialAnimationGroup(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:60
// [-2] void ~QSequentialAnimationGroup()
extern "C" Q_DECL_EXPORT
void C_ZN25QSequentialAnimationGroupD2Ev(void *this_) {
  delete (QSequentialAnimationGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:62
// [8] QPauseAnimation * addPause(int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QSequentialAnimationGroup8addPauseEi(void *this_, int msecs) {
  return (void*)((QSequentialAnimationGroup*)this_)->addPause(msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:63
// [8] QPauseAnimation * insertPause(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN25QSequentialAnimationGroup11insertPauseEii(void *this_, int index, int msecs) {
  return (void*)((QSequentialAnimationGroup*)this_)->insertPause(index, msecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:65
// [8] QAbstractAnimation * currentAnimation()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QSequentialAnimationGroup16currentAnimationEv(void *this_) {
  return (void*)((QSequentialAnimationGroup*)this_)->currentAnimation();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:66
// [4] int duration()
extern "C" Q_DECL_EXPORT
int C_ZNK25QSequentialAnimationGroup8durationEv(void *this_) {
  return (int)((QSequentialAnimationGroup*)this_)->duration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsequentialanimationgroup.h:69
// [-2] void currentAnimationChanged(QAbstractAnimation *)
extern "C" Q_DECL_EXPORT
void C_ZN25QSequentialAnimationGroup23currentAnimationChangedEP18QAbstractAnimation(void *this_, QAbstractAnimation * current) {
  ((QSequentialAnimationGroup*)this_)->currentAnimationChanged(current);
}

//  main block end
