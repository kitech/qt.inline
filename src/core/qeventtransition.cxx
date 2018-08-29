//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qeventtransition.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qeventtransition.h>
#include <QtCore>
#include "callback_inherit.h"

// QEventTransition is pure virtual: false
// QEventTransition has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQEventTransition_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQEventTransition_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQEventTransition_t qt_meta_stringdata_MyQEventTransition = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQEventTransition"
  },
  "MyQEventTransition"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQEventTransition[] = {
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
class Q_DECL_EXPORT MyQEventTransition : public QEventTransition {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QEventTransition::staticMetaObject,
  qt_meta_stringdata_MyQEventTransition.data,
  qt_meta_data_MyQEventTransition,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQEventTransition.stringdata0))
      return static_cast<void*>(this);
  return QEventTransition::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QEventTransition::qt_metacall(_c, _id, _a);
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
  virtual ~MyQEventTransition() {}
// void QEventTransition(QState *)
MyQEventTransition(QState * sourceState) : QEventTransition(sourceState) {}
// void QEventTransition(QObject *, QEvent::Type, QState *)
MyQEventTransition(QObject * object, QEvent::Type type_, QState * sourceState) : QEventTransition(object, type_, sourceState) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool eventTest(QEvent *)
  virtual bool eventTest(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QEventTransition::eventTest(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void onTransition(QEvent *)
  virtual void onTransition(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onTransition", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QEventTransition::onTransition(event);
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
    return QEventTransition::event(e);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:68
// [1] bool eventTest(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QEventTransition9eventTestEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QEventTransition*)this_)->QEventTransition::eventTest(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:69
// [-2] void onTransition(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN16QEventTransition12onTransitionEP6QEvent(void *this_, QEvent * event) {
  ((QEventTransition*)this_)->QEventTransition::onTransition(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:71
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN16QEventTransition5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QEventTransition*)this_)->QEventTransition::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QEventTransition10metaObjectEv(void *this_) {
  return (void*)((QEventTransition*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QEventTransition11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QEventTransition*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QEventTransition11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QEventTransition*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QEventTransition2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QEventTransition::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QEventTransition6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QEventTransition::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:57
// [-2] void QEventTransition(QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QEventTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQEventTransition*)(0);
  return  new MyQEventTransition(sourceState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:58
// [-2] void QEventTransition(QObject *, QEvent::Type, QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QEventTransitionC2EP7QObjectN6QEvent4TypeEP6QState(QObject * object, QEvent::Type type_, QState * sourceState) {
  auto _nilp = (MyQEventTransition*)(0);
  return  new MyQEventTransition(object, type_, sourceState);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:59
// [-2] void ~QEventTransition()
extern "C" Q_DECL_EXPORT
void C_ZN16QEventTransitionD2Ev(void *this_) {
  delete (QEventTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:61
// [8] QObject * eventSource()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QEventTransition11eventSourceEv(void *this_) {
  return (void*)((QEventTransition*)this_)->eventSource();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:62
// [-2] void setEventSource(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN16QEventTransition14setEventSourceEP7QObject(void *this_, QObject * object) {
  ((QEventTransition*)this_)->setEventSource(object);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:64
// [4] QEvent::Type eventType()
extern "C" Q_DECL_EXPORT
QEvent::Type C_ZNK16QEventTransition9eventTypeEv(void *this_) {
  return (QEvent::Type)((QEventTransition*)this_)->eventType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventtransition.h:65
// [-2] void setEventType(QEvent::Type)
extern "C" Q_DECL_EXPORT
void C_ZN16QEventTransition12setEventTypeEN6QEvent4TypeE(void *this_, QEvent::Type type_) {
  ((QEventTransition*)this_)->setEventType(type_);
}

//  main block end
