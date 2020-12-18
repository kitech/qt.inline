//  header block begin

// /usr/include/qt/QtCore/qtemporaryfile.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtemporaryfile.h>
#include <QtCore>
#include "callback_inherit.h"

// QTemporaryFile is pure virtual: false false
// QTemporaryFile has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTemporaryFile_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTemporaryFile_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTemporaryFile_t qt_meta_stringdata_MyQTemporaryFile = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQTemporaryFile"
  },
  "MyQTemporaryFile"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTemporaryFile[] = {
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
class Q_DECL_EXPORT MyQTemporaryFile : public QTemporaryFile {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTemporaryFile::staticMetaObject,
  qt_meta_stringdata_MyQTemporaryFile.data,
  qt_meta_data_MyQTemporaryFile,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTemporaryFile.stringdata0))
      return static_cast<void*>(this);
  return QTemporaryFile::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTemporaryFile::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTemporaryFile() {}
// void QTemporaryFile()
MyQTemporaryFile() : QTemporaryFile() {}
// void QTemporaryFile(const QString &)
MyQTemporaryFile(const QString & templateName) : QTemporaryFile(templateName) {}
// void QTemporaryFile(QObject *)
MyQTemporaryFile(QObject * parent) : QTemporaryFile(parent) {}
// void QTemporaryFile(const QString &, QObject *)
MyQTemporaryFile(const QString & templateName, QObject * parent) : QTemporaryFile(templateName, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool open(QIODevice::OpenMode)
  virtual bool open(QFlags<QIODevice::OpenModeFlag> flags)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"open", &handled, 1, (uint64_t)flags, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTemporaryFile::open(flags);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTemporaryFile_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTemporaryFile* qo = (MyQTemporaryFile*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtemporaryfile(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:61
// [8] QString tr(const char *, const char *, int) 
// (12)qm3216542366 (30)_ZN14QTemporaryFile2trEPKcS1_i
//static
/*void qm3216542366(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTemporaryFile::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTemporaryFile::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:78
// [1] bool open() 
// (12)qm1358458799 (26)_ZN14QTemporaryFile4openEv
//static
/*void qm1358458799()*/ {
  ;
  (void) ((QTemporaryFile*)this_)->open();
   auto xptr = (bool (QTemporaryFile::*)() ) &QTemporaryFile::open;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:93
// [8] QTemporaryFile * createNativeFile(const QString &) 
// (12)qm2840551680 (48)_ZN14QTemporaryFile16createNativeFileERK7QString
//static
/*void qm2840551680(const QString & fileName)*/ {
  const QString & fileName = *(const QString *)this_;
  (void) QTemporaryFile::createNativeFile(fileName);
   auto xptr = (QTemporaryFile * (*)(QString const&) ) &QTemporaryFile::createNativeFile;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QTemporaryFileD2Ev(void *this_)*/ {
  delete (QTemporaryFile*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtemporaryfile
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
