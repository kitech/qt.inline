//  header block begin

// /usr/include/qt/QtCore/qsavefile.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsavefile.h>
#include <QtCore>
#include "callback_inherit.h"

// QSaveFile is pure virtual: false false
// QSaveFile has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSaveFile_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSaveFile_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSaveFile_t qt_meta_stringdata_MyQSaveFile = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQSaveFile"
  },
  "MyQSaveFile"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSaveFile[] = {
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
class Q_DECL_EXPORT MyQSaveFile : public QSaveFile {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSaveFile::staticMetaObject,
  qt_meta_stringdata_MyQSaveFile.data,
  qt_meta_data_MyQSaveFile,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSaveFile.stringdata0))
      return static_cast<void*>(this);
  return QSaveFile::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSaveFile::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSaveFile() {}
// void QSaveFile(const QString &)
MyQSaveFile(const QString & name) : QSaveFile(name) {}
// void QSaveFile(QObject *)
MyQSaveFile(QObject * parent) : QSaveFile(parent) {}
// void QSaveFile(const QString &, QObject *)
MyQSaveFile(const QString & name, QObject * parent) : QSaveFile(name, parent) {}
// Protected virtual Direct Visibility=Default Availability=Available
// [8] qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len_)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"writeData", &handled, 2, (uint64_t)data, (uint64_t)len_, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (qint64)(irv);
      // Typedef LongLong long long
    } else {
    return QSaveFile::writeData(data, len_);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QSaveFile_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSaveFile* qo = (MyQSaveFile*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsavefile(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:62
// [8] QString tr(const char *, const char *, int) 
// (12)qm3782369627 (24)_ZN9QSaveFile2trEPKcS1_i
//static
/*void qm3782369627(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QSaveFile::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QSaveFile::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:68
// [-2] void QSaveFile(const QString &) 
// (12)qm1581886403 (26)_ZN9QSaveFileC2ERK7QString
/*void* qm1581886403(const QString & name)*/{
  auto _nilp = (MyQSaveFile*)(0);
  const QString & name = *(const QString *)this_;
  this_ =  new QSaveFile(name);
  this_ =  new MyQSaveFile(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:70
// [-2] void QSaveFile(QObject *) 
// (12)qm2934447819 (25)_ZN9QSaveFileC2EP7QObject
/*void* qm2934447819(QObject * parent)*/{
  auto _nilp = (MyQSaveFile*)(0);
  QObject * parent = *(QObject **)this_;
  this_ =  new QSaveFile(parent);
  this_ =  new MyQSaveFile(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:71
// [-2] void QSaveFile(const QString &, QObject *) 
// (11)qm289963964 (35)_ZN9QSaveFileC2ERK7QStringP7QObject
/*void* qm289963964(const QString & name, QObject * parent)*/{
  auto _nilp = (MyQSaveFile*)(0);
  const QString & name = *(const QString *)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QSaveFile(name, parent);
  this_ =  new MyQSaveFile(name, parent);
}


/*void C_ZN9QSaveFileD2Ev(void *this_)*/ {
  delete (QSaveFile*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsavefile
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
