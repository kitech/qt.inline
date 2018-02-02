//  header block begin
// /usr/include/qt/QtCore/qparallelanimationgroup.h
#include <qparallelanimationgroup.h>
#include <QtCore>

// QParallelAnimationGroup is pure virtual: false
// QParallelAnimationGroup has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:63
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN23QParallelAnimationGroup5eventEP6QEvent_fnptr = 0;
extern "C" void set_callback_ZN23QParallelAnimationGroup5eventEP6QEvent(void*cbfn)
{ callback_ZN23QParallelAnimationGroup5eventEP6QEvent_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:65
// [-2] void updateCurrentTime(int)
extern "C"
void* callback_ZN23QParallelAnimationGroup17updateCurrentTimeEi_fnptr = 0;
extern "C" void set_callback_ZN23QParallelAnimationGroup17updateCurrentTimeEi(void*cbfn)
{ callback_ZN23QParallelAnimationGroup17updateCurrentTimeEi_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:66
// [-2] void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
extern "C"
void* callback_ZN23QParallelAnimationGroup11updateStateEN18QAbstractAnimation5StateES1__fnptr = 0;
extern "C" void set_callback_ZN23QParallelAnimationGroup11updateStateEN18QAbstractAnimation5StateES1_(void*cbfn)
{ callback_ZN23QParallelAnimationGroup11updateStateEN18QAbstractAnimation5StateES1__fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:67
// [-2] void updateDirection(class QAbstractAnimation::Direction)
extern "C"
void* callback_ZN23QParallelAnimationGroup15updateDirectionEN18QAbstractAnimation9DirectionE_fnptr = 0;
extern "C" void set_callback_ZN23QParallelAnimationGroup15updateDirectionEN18QAbstractAnimation9DirectionE(void*cbfn)
{ callback_ZN23QParallelAnimationGroup15updateDirectionEN18QAbstractAnimation9DirectionE_fnptr = cbfn; }

class MyQParallelAnimationGroup : public QParallelAnimationGroup {
public:
  virtual ~MyQParallelAnimationGroup() {}
// void QParallelAnimationGroup(class QObject *)
MyQParallelAnimationGroup(QObject * parent) : QParallelAnimationGroup(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    auto fnptr = ((bool (*)(void* , QEvent *))(callback_ZN23QParallelAnimationGroup5eventEP6QEvent_fnptr));
    if (fnptr != 0) {
      fnptr(this , event);
    }
    return QParallelAnimationGroup::event(event);
  }
// void updateCurrentTime(int)
  virtual void updateCurrentTime(int currentTime) {
    auto fnptr = ((void (*)(void* , int))(callback_ZN23QParallelAnimationGroup17updateCurrentTimeEi_fnptr));
    if (fnptr != 0) {
      fnptr(this , currentTime);
    }
    QParallelAnimationGroup::updateCurrentTime(currentTime);
  }
// void updateState(class QAbstractAnimation::State, class QAbstractAnimation::State)
  virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) {
    auto fnptr = ((void (*)(void* , QAbstractAnimation::State, QAbstractAnimation::State))(callback_ZN23QParallelAnimationGroup11updateStateEN18QAbstractAnimation5StateES1__fnptr));
    if (fnptr != 0) {
      fnptr(this , newState, oldState);
    }
    QParallelAnimationGroup::updateState(newState, oldState);
  }
// void updateDirection(class QAbstractAnimation::Direction)
  virtual void updateDirection(QAbstractAnimation::Direction direction) {
    auto fnptr = ((void (*)(void* , QAbstractAnimation::Direction))(callback_ZN23QParallelAnimationGroup15updateDirectionEN18QAbstractAnimation9DirectionE_fnptr));
    if (fnptr != 0) {
      fnptr(this , direction);
    }
    QParallelAnimationGroup::updateDirection(direction);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:53
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK23QParallelAnimationGroup10metaObjectEv(void *this_) {
  return (void*)((QParallelAnimationGroup*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:56
// [-2] void QParallelAnimationGroup(class QObject *)
extern "C"
void* C_ZN23QParallelAnimationGroupC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQParallelAnimationGroup*)(0);
  return  new MyQParallelAnimationGroup(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:57
// [-2] void ~QParallelAnimationGroup()
extern "C"
void C_ZN23QParallelAnimationGroupD2Ev(void *this_) {
  delete (QParallelAnimationGroup*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qparallelanimationgroup.h:59
// [4] int duration()
extern "C"
int C_ZNK23QParallelAnimationGroup8durationEv(void *this_) {
  return (int)((QParallelAnimationGroup*)this_)->duration();
}
//  main block end
