//  header block begin

// since 0x050100
// /usr/include/qt/QtCore/qsavefile.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsavefile.h>
#include <QtCore>
#include "callback_inherit.h"

// QSaveFile is pure virtual: false
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
// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:87
// [8] qint64 writeData(const char *, qint64)
extern "C" Q_DECL_EXPORT
qint64 C_ZN9QSaveFile9writeDataEPKcx(void *this_, const char * data, qint64 len_) {
  return (qint64)((QSaveFile*)this_)->QSaveFile::writeData(data, len_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSaveFile10metaObjectEv(void *this_) {
  return (void*)((QSaveFile*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSaveFile11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSaveFile*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QSaveFile11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSaveFile*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSaveFile2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSaveFile::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSaveFile6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSaveFile::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:68
// [-2] void QSaveFile(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSaveFileC2ERK7QString(QString* name) {
  auto _nilp = (MyQSaveFile*)(0);
  return  new MyQSaveFile(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:70
// [-2] void QSaveFile(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSaveFileC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQSaveFile*)(0);
  return  new MyQSaveFile(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:71
// [-2] void QSaveFile(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QSaveFileC2ERK7QStringP7QObject(QString* name, QObject * parent) {
  auto _nilp = (MyQSaveFile*)(0);
  return  new MyQSaveFile(*name, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:73
// [-2] void ~QSaveFile()
extern "C" Q_DECL_EXPORT
void C_ZN9QSaveFileD2Ev(void *this_) {
  delete (QSaveFile*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:75
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QSaveFile8fileNameEv(void *this_) {
  auto rv = ((QSaveFile*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:76
// [-2] void setFileName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QSaveFile11setFileNameERK7QString(void *this_, QString* name) {
  ((QSaveFile*)this_)->setFileName(*name);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:78
// [1] bool open(QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
bool C_ZN9QSaveFile4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> flags) {
  return (bool)((QSaveFile*)this_)->open(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:79
// [1] bool commit()
extern "C" Q_DECL_EXPORT
bool C_ZN9QSaveFile6commitEv(void *this_) {
  return (bool)((QSaveFile*)this_)->commit();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:81
// [-2] void cancelWriting()
extern "C" Q_DECL_EXPORT
void C_ZN9QSaveFile13cancelWritingEv(void *this_) {
  ((QSaveFile*)this_)->cancelWriting();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:83
// [-2] void setDirectWriteFallback(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QSaveFile22setDirectWriteFallbackEb(void *this_, bool enabled) {
  ((QSaveFile*)this_)->setDirectWriteFallback(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsavefile.h:84
// [1] bool directWriteFallback()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QSaveFile19directWriteFallbackEv(void *this_) {
  return (bool)((QSaveFile*)this_)->directWriteFallback();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
