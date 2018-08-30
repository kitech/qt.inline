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

struct qt_meta_stringdata_MyQHistoryState_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHistoryState_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHistoryState_t qt_meta_stringdata_MyQHistoryState = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQHistoryState"
  },
  "MyQHistoryState"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHistoryState[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQHistoryState : public QHistoryState {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QHistoryState::staticMetaObject,
  qt_meta_stringdata_MyQHistoryState.data,
  qt_meta_data_MyQHistoryState,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQHistoryState.stringdata0))
      return static_cast<void*>(this);
  return QHistoryState::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QHistoryState::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQHistoryState() {}
// void QHistoryState(QState *)
MyQHistoryState(QState * parent) : QHistoryState(parent) {}
// void QHistoryState(QHistoryState::HistoryType, QState *)
MyQHistoryState(QHistoryState::HistoryType type_, QState * parent) : QHistoryState(type_, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void onEntry(QEvent *)
  virtual void onEntry(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onEntry", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHistoryState::onEntry(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void onExit(QEvent *)
  virtual void onExit(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onExit", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QHistoryState::onExit(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QHistoryState::event(e);
  }
  }

};

extern "C" Q_DECL_EXPORT
void C_QHistoryState_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQHistoryState* qo = (MyQHistoryState*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

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
