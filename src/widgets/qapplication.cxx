//  header block begin

// /usr/include/qt/QtWidgets/qapplication.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qapplication.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QApplication is pure virtual: false false
// QApplication has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQApplication_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQApplication_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQApplication_t qt_meta_stringdata_MyQApplication = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQApplication"
  },
  "MyQApplication"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQApplication[] = {
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
class Q_DECL_EXPORT MyQApplication : public QApplication {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QApplication::staticMetaObject,
  qt_meta_stringdata_MyQApplication.data,
  qt_meta_data_MyQApplication,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQApplication.stringdata0))
      return static_cast<void*>(this);
  return QApplication::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QApplication::qt_metacall(_c, _id, _a);
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
  virtual ~MyQApplication() {}
// void QApplication(int &, char **, int)
MyQApplication(int & argc, char** argv, int arg2) : QApplication(argc, argv, arg2) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QApplication::event(arg0);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool compressEvent(QEvent *, QObject *, QPostEventList *)
  virtual bool compressEvent(QEvent * arg0, QObject * receiver, QPostEventList * arg2)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"compressEvent", &handled, 3, (uint64_t)arg0, (uint64_t)receiver, (uint64_t)arg2, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QApplication::compressEvent(arg0, receiver, arg2);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QApplication_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQApplication* qo = (MyQApplication*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qapplication(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:74
// [8] QString tr(const char *, const char *, int) 
// (11)qm983057999 (28)_ZN12QApplication2trEPKcS1_i
//static
/*void qm983057999(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QApplication::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QApplication::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:140
// [8] QWidget * widgetAt(int, int) 
// (12)qm2418471012 (29)_ZN12QApplication8widgetAtEii
//static
/*void qm2418471012(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) QApplication::widgetAt(x, y);
   auto xptr = (QWidget * (*)(int, int) ) &QApplication::widgetAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:142
// [8] QWidget * topLevelAt(int, int) 
// (12)qm3798953460 (32)_ZN12QApplication10topLevelAtEii
//static
/*void qm3798953460(int x, int y)*/ {
  int x = *(int*)this_; int y = *(int*)this_;
  (void) QApplication::topLevelAt(x, y);
   auto xptr = (QWidget * (*)(int, int) ) &QApplication::topLevelAt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QApplicationD2Ev(void *this_)*/ {
  delete (QApplication*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qapplication
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
