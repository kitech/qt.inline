//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qparallelanimationgroup.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qparallelanimationgroup.h>
#include <QtCore>
#include "callback_inherit.h"

// QParallelAnimationGroup is pure virtual: false
// QParallelAnimationGroup has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQParallelAnimationGroup : public QParallelAnimationGroup {
public:
  virtual ~MyQParallelAnimationGroup() {}
// void QParallelAnimationGroup(QObject *)
MyQParallelAnimationGroup(QObject * parent) : QParallelAnimationGroup(parent) {}
// void QParallelAnimationGroup(QParallelAnimationGroupPrivate &, QObject *)
MyQParallelAnimationGroup(QParallelAnimationGroupPrivate & dd, QObject * parent) : QParallelAnimationGroup(dd, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QParallelAnimationGroup::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateCurrentTime(int)
  virtual void updateCurrentTime(int currentTime) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateCurrentTime", &handled, 1, (uint64_t)currentTime, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QParallelAnimationGroup::updateCurrentTime(currentTime);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
  virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateState", &handled, 2, (uint64_t)newState, (uint64_t)oldState, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QParallelAnimationGroup::updateState(newState, oldState);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateDirection(QAbstractAnimation::Direction)
  virtual void updateDirection(QAbstractAnimation::Direction direction) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateDirection", &handled, 1, (uint64_t)direction, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QParallelAnimationGroup::updateDirection(direction);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:63
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN23QParallelAnimationGroup5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QParallelAnimationGroup*)this_)->QParallelAnimationGroup::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:65
// [-2] void updateCurrentTime(int)
extern "C" Q_DECL_EXPORT
void C_ZN23QParallelAnimationGroup17updateCurrentTimeEi(void *this_, int currentTime) {
  ((QParallelAnimationGroup*)this_)->QParallelAnimationGroup::updateCurrentTime(currentTime);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:66
// [-2] void updateState(QAbstractAnimation::State, QAbstractAnimation::State)
extern "C" Q_DECL_EXPORT
void C_ZN23QParallelAnimationGroup11updateStateEN18QAbstractAnimation5StateES1_(void *this_, QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
  ((QParallelAnimationGroup*)this_)->QParallelAnimationGroup::updateState(newState, oldState);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:67
// [-2] void updateDirection(QAbstractAnimation::Direction)
extern "C" Q_DECL_EXPORT
void C_ZN23QParallelAnimationGroup15updateDirectionEN18QAbstractAnimation9DirectionE(void *this_, QAbstractAnimation::Direction direction) {
  ((QParallelAnimationGroup*)this_)->QParallelAnimationGroup::updateDirection(direction);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QParallelAnimationGroup10metaObjectEv(void *this_) {
  return (void*)((QParallelAnimationGroup*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QParallelAnimationGroup11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QParallelAnimationGroup*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN23QParallelAnimationGroup11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QParallelAnimationGroup*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QParallelAnimationGroup2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QParallelAnimationGroup::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QParallelAnimationGroup6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QParallelAnimationGroup::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:56
// [-2] void QParallelAnimationGroup(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN23QParallelAnimationGroupC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQParallelAnimationGroup*)(0);
  return  new MyQParallelAnimationGroup(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:57
// [-2] void ~QParallelAnimationGroup()
extern "C" Q_DECL_EXPORT
void C_ZN23QParallelAnimationGroupD2Ev(void *this_) {
  delete (QParallelAnimationGroup*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:59
// [4] int duration()
extern "C" Q_DECL_EXPORT
int C_ZNK23QParallelAnimationGroup8durationEv(void *this_) {
  return (int)((QParallelAnimationGroup*)this_)->duration();
}

//  main block end
