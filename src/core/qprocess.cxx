//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(processenvironment)
// /usr/include/qt/QtCore/qprocess.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qprocess.h>
#include <QtCore>
#include "callback_inherit.h"

// QProcess is pure virtual: false false
// QProcess has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQProcess_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQProcess_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQProcess_t qt_meta_stringdata_MyQProcess = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQProcess"
  },
  "MyQProcess"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQProcess[] = {
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
class Q_DECL_EXPORT MyQProcess : public QProcess {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QProcess::staticMetaObject,
  qt_meta_stringdata_MyQProcess.data,
  qt_meta_data_MyQProcess,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQProcess.stringdata0))
      return static_cast<void*>(this);
  return QProcess::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QProcess::qt_metacall(_c, _id, _a);
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
  virtual ~MyQProcess() {}
// void QProcess(QObject *)
MyQProcess(QObject * parent) : QProcess(parent) {}
// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void setupChildProcess()
  virtual void setupChildProcess()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setupChildProcess", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QProcess::setupChildProcess();
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [8] qint64 readData(char *, qint64)
  virtual qint64 readData(char * data, qint64 maxlen)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"readData", &handled, 2, (uint64_t)data, (uint64_t)maxlen, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QProcess::readData(data, maxlen);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [8] qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len_, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QProcess::writeData(data, len_);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QProcess_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQProcess* qo = (MyQProcess*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qprocess(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:112
// [8] QString tr(const char *, const char *, int) 
// (12)qm4228354332 (23)_ZN8QProcess2trEPKcS1_i
//static
/*void qm4228354332(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QProcess::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QProcess::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:158
// [-2] void QProcess(QObject *) 
// (12)qm1179500296 (24)_ZN8QProcessC2EP7QObject
/*void* qm1179500296(QObject * parent)*/{
  auto _nilp = (MyQProcess*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QProcess(parent);
  this_ =  new MyQProcess(parent);
}


/*void C_ZN8QProcessD2Ev(void *this_)*/ {
  delete (QProcess*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qprocess
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(processenvironment)
#endif // #ifndef QT_MINIMAL
//  footer block end
