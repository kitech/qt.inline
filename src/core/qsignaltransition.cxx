//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qsignaltransition.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsignaltransition.h>
#include <QtCore>
#include "callback_inherit.h"

// QSignalTransition is pure virtual: false
// QSignalTransition has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSignalTransition_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSignalTransition_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSignalTransition_t qt_meta_stringdata_MyQSignalTransition = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQSignalTransition"
  },
  "MyQSignalTransition"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSignalTransition[] = {
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
class Q_DECL_EXPORT MyQSignalTransition : public QSignalTransition {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSignalTransition::staticMetaObject,
  qt_meta_stringdata_MyQSignalTransition.data,
  qt_meta_data_MyQSignalTransition,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSignalTransition.stringdata0))
      return static_cast<void*>(this);
  return QSignalTransition::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSignalTransition::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSignalTransition() {}
// void QSignalTransition(QState *)
MyQSignalTransition(QState * sourceState) : QSignalTransition(sourceState) {}
// void QSignalTransition(const QObject *, const char *, QState *)
MyQSignalTransition(const QObject * sender, const char * signal, QState * sourceState) : QSignalTransition(sender, signal, sourceState) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool eventTest(QEvent *)
  virtual bool eventTest(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventTest", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSignalTransition::eventTest(event);
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
    QSignalTransition::onTransition(event);
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
    return QSignalTransition::event(e);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:83
// [1] bool eventTest(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QSignalTransition9eventTestEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QSignalTransition*)this_)->QSignalTransition::eventTest(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:84
// [-2] void onTransition(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransition12onTransitionEP6QEvent(void *this_, QEvent * event) {
  ((QSignalTransition*)this_)->QSignalTransition::onTransition(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:86
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN17QSignalTransition5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QSignalTransition*)this_)->QSignalTransition::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSignalTransition10metaObjectEv(void *this_) {
  return (void*)((QSignalTransition*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSignalTransition11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSignalTransition*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QSignalTransition11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSignalTransition*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSignalTransition2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSignalTransition::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSignalTransition6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSignalTransition::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:58
// [-2] void QSignalTransition(QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSignalTransitionC2EP6QState(QState * sourceState) {
  auto _nilp = (MyQSignalTransition*)(0);
  return  new MyQSignalTransition(sourceState);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:59
// [-2] void QSignalTransition(const QObject *, const char *, QState *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSignalTransitionC2EPK7QObjectPKcP6QState(const QObject * sender, const char * signal, QState * sourceState) {
  auto _nilp = (MyQSignalTransition*)(0);
  return  new MyQSignalTransition(sender, signal, sourceState);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:74
// [-2] void ~QSignalTransition()
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransitionD2Ev(void *this_) {
  delete (QSignalTransition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:76
// [8] QObject * senderObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSignalTransition12senderObjectEv(void *this_) {
  return (void*)((QSignalTransition*)this_)->senderObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:77
// [-2] void setSenderObject(const QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransition15setSenderObjectEPK7QObject(void *this_, const QObject * sender) {
  ((QSignalTransition*)this_)->setSenderObject(sender);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:79
// [8] QByteArray signal()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSignalTransition6signalEv(void *this_) {
  auto rv = ((QSignalTransition*)this_)->signal();
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:80
// [-2] void setSignal(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransition9setSignalERK10QByteArray(void *this_, QByteArray* signal) {
  ((QSignalTransition*)this_)->setSignal(*signal);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:89
// [-2] void senderObjectChanged(QSignalTransition::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransition19senderObjectChangedENS_14QPrivateSignalE(void *this_, QSignalTransition::QPrivateSignal* arg0) {
  ((QSignalTransition*)this_)->senderObjectChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsignaltransition.h:90
// [-2] void signalChanged(QSignalTransition::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN17QSignalTransition13signalChangedENS_14QPrivateSignalE(void *this_, QSignalTransition::QPrivateSignal* arg0) {
  ((QSignalTransition*)this_)->signalChanged(*arg0);
}

//  main block end
