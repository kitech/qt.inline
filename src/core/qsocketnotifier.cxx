//  header block begin
// /usr/include/qt/QtCore/qsocketnotifier.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsocketnotifier.h>
#include <QtCore>
#include "callback_inherit.h"

// QSocketNotifier is pure virtual: false
// QSocketNotifier has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSocketNotifier_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSocketNotifier_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSocketNotifier_t qt_meta_stringdata_MyQSocketNotifier = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQSocketNotifier"
  },
  "MyQSocketNotifier"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSocketNotifier[] = {
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
class Q_DECL_EXPORT MyQSocketNotifier : public QSocketNotifier {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSocketNotifier::staticMetaObject,
  qt_meta_stringdata_MyQSocketNotifier.data,
  qt_meta_data_MyQSocketNotifier,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSocketNotifier.stringdata0))
      return static_cast<void*>(this);
  return QSocketNotifier::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSocketNotifier::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSocketNotifier() {}
// void QSocketNotifier(qintptr, QSocketNotifier::Type, QObject *)
MyQSocketNotifier(qintptr socket, QSocketNotifier::Type arg1, QObject * parent) : QSocketNotifier(socket, arg1, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QSocketNotifier::event(arg0);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:71
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QSocketNotifier5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QSocketNotifier*)this_)->QSocketNotifier::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:50
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QSocketNotifier10metaObjectEv(void *this_) {
  return (void*)((QSocketNotifier*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:50
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSocketNotifier11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSocketNotifier*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:50
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QSocketNotifier11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSocketNotifier*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:50
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSocketNotifier2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSocketNotifier::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:50
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSocketNotifier6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSocketNotifier::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:56
// [-2] void QSocketNotifier(qintptr, QSocketNotifier::Type, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QSocketNotifierC2ExNS_4TypeEP7QObject(qintptr socket, QSocketNotifier::Type arg1, QObject * parent) {
  auto _nilp = (MyQSocketNotifier*)(0);
  return  new MyQSocketNotifier(socket, arg1, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:57
// [-2] void ~QSocketNotifier()
extern "C" Q_DECL_EXPORT
void C_ZN15QSocketNotifierD2Ev(void *this_) {
  delete (QSocketNotifier*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:59
// [8] qintptr socket()
extern "C" Q_DECL_EXPORT
qintptr C_ZNK15QSocketNotifier6socketEv(void *this_) {
  return (qintptr)((QSocketNotifier*)this_)->socket();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:60
// [4] QSocketNotifier::Type type()
extern "C" Q_DECL_EXPORT
QSocketNotifier::Type C_ZNK15QSocketNotifier4typeEv(void *this_) {
  return (QSocketNotifier::Type)((QSocketNotifier*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:62
// [1] bool isEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QSocketNotifier9isEnabledEv(void *this_) {
  return (bool)((QSocketNotifier*)this_)->isEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:65
// [-2] void setEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QSocketNotifier10setEnabledEb(void *this_, bool arg0) {
  ((QSocketNotifier*)this_)->setEnabled(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsocketnotifier.h:68
// [-2] void activated(int, QSocketNotifier::QPrivateSignal)
extern "C" Q_DECL_EXPORT
void C_ZN15QSocketNotifier9activatedEiNS_14QPrivateSignalE(void *this_, int socket, QSocketNotifier::QPrivateSignal* arg1) {
  ((QSocketNotifier*)this_)->activated(socket, *arg1);
}

//  main block end
