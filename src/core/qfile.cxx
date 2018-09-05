//  header block begin
// /usr/include/qt/QtCore/qfile.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfile.h>
#include <QtCore>
#include "callback_inherit.h"

// QFile is pure virtual: false
// QFile has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQFile_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFile_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFile_t qt_meta_stringdata_MyQFile = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQFile"
  },
  "MyQFile"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFile[] = {
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
class Q_DECL_EXPORT MyQFile : public QFile {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFile::staticMetaObject,
  qt_meta_stringdata_MyQFile.data,
  qt_meta_data_MyQFile,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQFile.stringdata0))
      return static_cast<void*>(this);
  return QFile::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFile::qt_metacall(_c, _id, _a);
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
  virtual ~MyQFile() {}
// void QFile()
MyQFile() : QFile() {}
// void QFile(const QString &)
MyQFile(const QString & name) : QFile(name) {}
// void QFile(QObject *)
MyQFile(QObject * parent) : QFile(parent) {}
// void QFile(const QString &, QObject *)
MyQFile(const QString & name, QObject * parent) : QFile(name, parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QFile_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQFile* qo = (MyQFile*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:60
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QFile10metaObjectEv(void *this_) {
  return (void*)((QFile*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:60
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFile11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFile*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:60
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN5QFile11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFile*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:60
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFile2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFile::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:60
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFile6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFile::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:65
// [-2] void QFile()
extern "C" Q_DECL_EXPORT
void* C_ZN5QFileC2Ev() {
  return  new MyQFile();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:66
// [-2] void QFile(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFileC2ERK7QString(QString* name) {
  return  new MyQFile(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:68
// [-2] void QFile(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFileC2EP7QObject(QObject * parent) {
  return  new MyQFile(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:69
// [-2] void QFile(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFileC2ERK7QStringP7QObject(QString* name, QObject * parent) {
  return  new MyQFile(*name, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:71
// [-2] void ~QFile()
extern "C" Q_DECL_EXPORT
void C_ZN5QFileD2Ev(void *this_) {
  delete (QFile*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:73
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QFile8fileNameEv(void *this_) {
  auto rv = ((QFile*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:74
// [-2] void setFileName(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN5QFile11setFileNameERK7QString(void *this_, QString* name) {
  ((QFile*)this_)->setFileName(*name);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:88
// [8] QByteArray encodeName(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFile10encodeNameERK7QString(QString* fileName) {
  auto rv = QFile::encodeName(*fileName);
return new QByteArray(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:92
// [8] QString decodeName(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFile10decodeNameERK10QByteArray(QByteArray* localFileName) {
  auto rv = QFile::decodeName(*localFileName);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:97
// [8] QString decodeName(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFile10decodeNameEPKc(const char * localFileName) {
  auto rv = QFile::decodeName(localFileName);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:107
// [1] bool exists()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QFile6existsEv(void *this_) {
  return (bool)((QFile*)this_)->exists();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:108
// [1] bool exists(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile6existsERK7QString(QString* fileName) {
  return (bool)QFile::exists(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:110
// [8] QString readLink()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QFile8readLinkEv(void *this_) {
  auto rv = ((QFile*)this_)->readLink();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:111
// [8] QString readLink(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFile8readLinkERK7QString(QString* fileName) {
  auto rv = QFile::readLink(*fileName);
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qfile.h:112
// [8] QString symLinkTarget()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK5QFile13symLinkTargetEv(void *this_) {
  auto rv = ((QFile*)this_)->symLinkTarget();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040200

// Public static inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtCore/qfile.h:113
// [8] QString symLinkTarget(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN5QFile13symLinkTargetERK7QString(QString* fileName) {
  auto rv = QFile::symLinkTarget(*fileName);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:115
// [1] bool remove()
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile6removeEv(void *this_) {
  return (bool)((QFile*)this_)->remove();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:116
// [1] bool remove(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile6removeERK7QString(QString* fileName) {
  return (bool)QFile::remove(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:118
// [1] bool rename(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile6renameERK7QString(void *this_, QString* newName) {
  return (bool)((QFile*)this_)->rename(*newName);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:119
// [1] bool rename(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile6renameERK7QStringS2_(QString* oldName, QString* newName) {
  return (bool)QFile::rename(*oldName, *newName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:121
// [1] bool link(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile4linkERK7QString(void *this_, QString* newName) {
  return (bool)((QFile*)this_)->link(*newName);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:122
// [1] bool link(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile4linkERK7QStringS2_(QString* oldname, QString* newName) {
  return (bool)QFile::link(*oldname, *newName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:124
// [1] bool copy(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile4copyERK7QString(void *this_, QString* newName) {
  return (bool)((QFile*)this_)->copy(*newName);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:125
// [1] bool copy(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile4copyERK7QStringS2_(QString* fileName, QString* newName) {
  return (bool)QFile::copy(*fileName, *newName);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:127
// [1] bool open(QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> flags) {
  return (bool)((QFile*)this_)->open(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:128
// [1] bool open(FILE *, QIODevice::OpenMode, QFileDevice::FileHandleFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile4openEP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEES2_IN11QFileDevice14FileHandleFlagEE(void *this_, FILE * f, QFlags<QIODevice::OpenModeFlag> ioFlags, QFlags<QFileDevice::FileHandleFlag> handleFlags) {
  return (bool)((QFile*)this_)->open(f, ioFlags, handleFlags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:129
// [1] bool open(int, QIODevice::OpenMode, QFileDevice::FileHandleFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile4openEi6QFlagsIN9QIODevice12OpenModeFlagEES0_IN11QFileDevice14FileHandleFlagEE(void *this_, int fd, QFlags<QIODevice::OpenModeFlag> ioFlags, QFlags<QFileDevice::FileHandleFlag> handleFlags) {
  return (bool)((QFile*)this_)->open(fd, ioFlags, handleFlags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:131
// [8] qint64 size()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK5QFile4sizeEv(void *this_) {
  return (qint64)((QFile*)this_)->size();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:133
// [1] bool resize(qint64)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile6resizeEx(void *this_, qint64 sz) {
  return (bool)((QFile*)this_)->resize(sz);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:134
// [1] bool resize(const QString &, qint64)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile6resizeERK7QStringx(QString* filename, qint64 sz) {
  return (bool)QFile::resize(*filename, sz);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:136
// [4] QFileDevice::Permissions permissions()
extern "C" Q_DECL_EXPORT
QFileDevice::Permissions* C_ZNK5QFile11permissionsEv(void *this_) {
  auto rv = ((QFile*)this_)->permissions();
return new QFileDevice::Permissions(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:137
// [4] QFileDevice::Permissions permissions(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN5QFile11permissionsERK7QString(QString* filename) {
  auto rv = QFile::permissions(*filename);
/*return rv;*/
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:138
// [1] bool setPermissions(QFileDevice::Permissions)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile14setPermissionsE6QFlagsIN11QFileDevice10PermissionEE(void *this_, QFlags<QFileDevice::Permission> permissionSpec) {
  return (bool)((QFile*)this_)->setPermissions(permissionSpec);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfile.h:139
// [1] bool setPermissions(const QString &, QFileDevice::Permissions)
extern "C" Q_DECL_EXPORT
bool C_ZN5QFile14setPermissionsERK7QString6QFlagsIN11QFileDevice10PermissionEE(QString* filename, QFlags<QFileDevice::Permission> permissionSpec) {
  return (bool)QFile::setPermissions(*filename, permissionSpec);
}

//  main block end
