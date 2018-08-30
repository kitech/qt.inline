//  header block begin
// since 0x040400
// /usr/include/qt/QtCore/qfuturewatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfuturewatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QFutureWatcher is pure virtual: false
// QFutureWatcher has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQFutureWatcher_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFutureWatcher_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFutureWatcher_t qt_meta_stringdata_MyQFutureWatcher = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQFutureWatcher"
  },
  "MyQFutureWatcher"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFutureWatcher[] = {
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
class Q_DECL_EXPORT MyQFutureWatcher : public QFutureWatcher<void> {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFutureWatcher::staticMetaObject,
  qt_meta_stringdata_MyQFutureWatcher.data,
  qt_meta_data_MyQFutureWatcher,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQFutureWatcher.stringdata0))
      return static_cast<void*>(this);
  return QFutureWatcher::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFutureWatcher::qt_metacall(_c, _id, _a);
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
  virtual ~MyQFutureWatcher() {}
// void QFutureWatcher(QObject *)
MyQFutureWatcher(QObject * _parent) : QFutureWatcher<void>(_parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QFutureWatcher_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQFutureWatcher* qo = (MyQFutureWatcher*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:188
// [-2] void QFutureWatcher(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QFutureWatcherIvEC2EP7QObject(QObject * _parent) {
  return  new QFutureWatcher<void>(_parent);
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:191
// [-2] void ~QFutureWatcher()
extern "C" Q_DECL_EXPORT
void C_ZN14QFutureWatcherIvED2Ev(void *this_) {
  delete (QFutureWatcher<void>*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:194
// [-2] void setFuture(const QFuture<void> &)
extern "C" Q_DECL_EXPORT
void C_ZN14QFutureWatcherIvE9setFutureERK7QFutureIvE(void *this_, QFuture<void>* future) {
  ((QFutureWatcher<void>*)this_)->setFuture(*future);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:195
// [16] QFuture<void> future()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QFutureWatcherIvE6futureEv(void *this_) {
  auto rv = ((QFutureWatcher<void>*)this_)->future();
return new QFuture<void>(rv);
}

//  main block end
