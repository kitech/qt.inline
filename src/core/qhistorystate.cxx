//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qhistorystate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhistorystate.h>
#include <QtCore>
#include "callback_inherit.h"

// QHistoryState is pure virtual: false
// QHistoryState has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQHistoryState : public QHistoryState {
public:
  virtual ~MyQHistoryState() {}
// void QHistoryState(QState *)
MyQHistoryState(QState * parent) : QHistoryState(parent) {}
// void QHistoryState(QHistoryState::HistoryType, QState *)
MyQHistoryState(QHistoryState::HistoryType type_, QState * parent) : QHistoryState(type_, parent) {}
// Protected virtual Visibility=Default Availability=Available
// void onEntry(QEvent *)
  virtual void onEntry(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHistoryState::onEntry(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void onExit(QEvent *)
  virtual void onExit(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onExit", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QHistoryState::onExit(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QHistoryState::event(e);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:83
// [-2] void onEntry(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QHistoryState7onEntryEP6QEvent(void *this_, QEvent * event) {
  ((QHistoryState*)this_)->QHistoryState::onEntry(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:84
// [-2] void onExit(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QHistoryState6onExitEP6QEvent(void *this_, QEvent * event) {
  ((QHistoryState*)this_)->QHistoryState::onExit(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:86
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QHistoryState5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QHistoryState*)this_)->QHistoryState::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QHistoryState10metaObjectEv(void *this_) {
  return (void*)((QHistoryState*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QHistoryState11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QHistoryState*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QHistoryState11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QHistoryState*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QHistoryState2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QHistoryState::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QHistoryState6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QHistoryState::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:64
// [-2] void QHistoryState(QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QHistoryStateC2EP6QState(QState * parent) {
  auto _nilp = (MyQHistoryState*)(0);
  return  new MyQHistoryState(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:65
// [-2] void QHistoryState(QHistoryState::HistoryType, QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QHistoryStateC2ENS_11HistoryTypeEP6QState(QHistoryState::HistoryType type_, QState * parent) {
  auto _nilp = (MyQHistoryState*)(0);
  return  new MyQHistoryState(type_, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:66
// [-2] void ~QHistoryState()
extern "C" Q_DECL_EXPORT
void C_ZN13QHistoryStateD2Ev(void *this_) {
  delete (QHistoryState*)(this_);
}
// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qhistorystate.h:68
// [8] QAbstractTransition * defaultTransition()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZNK13QHistoryState17defaultTransitionEv(void *this_) {
  return (void*)((QHistoryState*)this_)->defaultTransition();
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qhistorystate.h:69
// [-2] void setDefaultTransition(QAbstractTransition *)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN13QHistoryState20setDefaultTransitionEP19QAbstractTransition(void *this_, QAbstractTransition * transition) {
  ((QHistoryState*)this_)->setDefaultTransition(transition);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:71
// [8] QAbstractState * defaultState()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QHistoryState12defaultStateEv(void *this_) {
  return (void*)((QHistoryState*)this_)->defaultState();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:72
// [-2] void setDefaultState(QAbstractState *)
extern "C" Q_DECL_EXPORT
void C_ZN13QHistoryState15setDefaultStateEP14QAbstractState(void *this_, QAbstractState * state) {
  ((QHistoryState*)this_)->setDefaultState(state);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:74
// [4] QHistoryState::HistoryType historyType()
extern "C" Q_DECL_EXPORT
QHistoryState::HistoryType C_ZNK13QHistoryState11historyTypeEv(void *this_) {
  return (QHistoryState::HistoryType)((QHistoryState*)this_)->historyType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:75
// [-2] void setHistoryType(QHistoryState::HistoryType)
extern "C" Q_DECL_EXPORT
void C_ZN13QHistoryState14setHistoryTypeENS_11HistoryTypeE(void *this_, QHistoryState::HistoryType type_) {
  ((QHistoryState*)this_)->setHistoryType(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:78
// [-2] void defaultTransitionChanged(QHistoryState::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN13QHistoryState24defaultTransitionChangedENS_14QPrivateSignalE(void *this_, QHistoryState::QPrivateSignal* arg0) {
  ((QHistoryState*)this_)->defaultTransitionChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:79
// [-2] void defaultStateChanged(QHistoryState::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN13QHistoryState19defaultStateChangedENS_14QPrivateSignalE(void *this_, QHistoryState::QPrivateSignal* arg0) {
  ((QHistoryState*)this_)->defaultStateChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhistorystate.h:80
// [-2] void historyTypeChanged(QHistoryState::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN13QHistoryState18historyTypeChangedENS_14QPrivateSignalE(void *this_, QHistoryState::QPrivateSignal* arg0) {
  ((QHistoryState*)this_)->historyTypeChanged(*arg0);
}

//  main block end
