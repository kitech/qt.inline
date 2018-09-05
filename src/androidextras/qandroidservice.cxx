//  header block begin
// since 0x050a00
// /usr/include/qt/QtAndroidExtras/qandroidservice.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qandroidservice.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidService is pure virtual: false
// QAndroidService has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAndroidService_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAndroidService_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAndroidService_t qt_meta_stringdata_MyQAndroidService = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQAndroidService"
  },
  "MyQAndroidService"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAndroidService[] = {
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
class Q_DECL_EXPORT MyQAndroidService : public QAndroidService {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAndroidService::staticMetaObject,
  qt_meta_stringdata_MyQAndroidService.data,
  qt_meta_data_MyQAndroidService,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAndroidService.stringdata0))
      return static_cast<void*>(this);
  return QAndroidService::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAndroidService::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAndroidService() {}
// void QAndroidService(int &, char **, int)
MyQAndroidService(int & argc, char** argv, int flags) : QAndroidService(argc, argv, flags) {}
};

extern "C" Q_DECL_EXPORT
void* C_QAndroidService_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAndroidService* qo = (MyQAndroidService*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidservice.h:54
// [-2] void QAndroidService(int &, char **, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAndroidServiceC2ERiPPci(int & argc, char** argv, int flags) {
  return  new MyQAndroidService(*(new int(argc)), argv, flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidservice.h:59
// [-2] void ~QAndroidService()
extern "C" Q_DECL_EXPORT
void C_ZN15QAndroidServiceD2Ev(void *this_) {
  delete (QAndroidService*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidservice.h:61
// [8] QAndroidBinder * onBind(const QAndroidIntent &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QAndroidService6onBindERK14QAndroidIntent(void *this_, QAndroidIntent* intent) {
  return (void*)((QAndroidService*)this_)->onBind(*intent);
}

//  main block end
