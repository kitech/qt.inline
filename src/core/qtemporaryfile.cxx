//  header block begin
// /usr/include/qt/QtCore/qtemporaryfile.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtemporaryfile.h>
#include <QtCore>
#include "callback_inherit.h"

// QTemporaryFile is pure virtual: false
// QTemporaryFile has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTemporaryFile : public QTemporaryFile {
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
// bool open(QIODevice::OpenMode)
  virtual bool open(QFlags<QIODevice::OpenModeFlag> flags) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"open", &handled, 1, (uint64_t)flags, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QTemporaryFile::open(flags);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:98
// [1] bool open(QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
bool C_ZN14QTemporaryFile4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QFlags<QIODevice::OpenModeFlag> flags) {
  return (bool)((QTemporaryFile*)this_)->QTemporaryFile::open(flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:61
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QTemporaryFile10metaObjectEv(void *this_) {
  return (void*)((QTemporaryFile*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:61
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QTemporaryFile11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTemporaryFile*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:61
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QTemporaryFile11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTemporaryFile*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:61
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QTemporaryFile2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTemporaryFile::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:61
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QTemporaryFile6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTemporaryFile::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:66
// [-2] void QTemporaryFile()
extern "C" Q_DECL_EXPORT
void* C_ZN14QTemporaryFileC2Ev() {
  auto _nilp = (MyQTemporaryFile*)(0);
  return  new MyQTemporaryFile();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:67
// [-2] void QTemporaryFile(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QTemporaryFileC2ERK7QString(QString* templateName) {
  auto _nilp = (MyQTemporaryFile*)(0);
  return  new MyQTemporaryFile(*templateName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:69
// [-2] void QTemporaryFile(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QTemporaryFileC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQTemporaryFile*)(0);
  return  new MyQTemporaryFile(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:70
// [-2] void QTemporaryFile(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QTemporaryFileC2ERK7QStringP7QObject(QString* templateName, QObject * parent) {
  auto _nilp = (MyQTemporaryFile*)(0);
  return  new MyQTemporaryFile(*templateName, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:72
// [-2] void ~QTemporaryFile()
extern "C" Q_DECL_EXPORT
void C_ZN14QTemporaryFileD2Ev(void *this_) {
  delete (QTemporaryFile*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:74
// [1] bool autoRemove()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QTemporaryFile10autoRemoveEv(void *this_) {
  return (bool)((QTemporaryFile*)this_)->autoRemove();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:75
// [-2] void setAutoRemove(bool)
extern "C" Q_DECL_EXPORT
void C_ZN14QTemporaryFile13setAutoRemoveEb(void *this_, bool b) {
  ((QTemporaryFile*)this_)->setAutoRemove(b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:78
// [1] bool open()
extern "C" Q_DECL_EXPORT
bool C_ZN14QTemporaryFile4openEv(void *this_) {
  return (bool)((QTemporaryFile*)this_)->open();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:80
// [8] QString fileName()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QTemporaryFile8fileNameEv(void *this_) {
  auto rv = ((QTemporaryFile*)this_)->fileName();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:81
// [8] QString fileTemplate()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QTemporaryFile12fileTemplateEv(void *this_) {
  auto rv = ((QTemporaryFile*)this_)->fileTemplate();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:82
// [-2] void setFileTemplate(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN14QTemporaryFile15setFileTemplateERK7QString(void *this_, QString* name) {
  ((QTemporaryFile*)this_)->setFileTemplate(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:85
// [1] bool rename(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN14QTemporaryFile6renameERK7QString(void *this_, QString* newName) {
  return (bool)((QTemporaryFile*)this_)->rename(*newName);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:88
// [8] QTemporaryFile * createLocalFile(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QTemporaryFile15createLocalFileERK7QString(QString* fileName) {
  return (void*)QTemporaryFile::createLocalFile(*fileName);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:90
// [8] QTemporaryFile * createLocalFile(QFile &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QTemporaryFile15createLocalFileER5QFile(QFile* file) {
  return (void*)QTemporaryFile::createLocalFile(*file);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:93
// [8] QTemporaryFile * createNativeFile(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QTemporaryFile16createNativeFileERK7QString(QString* fileName) {
  return (void*)QTemporaryFile::createNativeFile(*fileName);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporaryfile.h:95
// [8] QTemporaryFile * createNativeFile(QFile &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QTemporaryFile16createNativeFileER5QFile(QFile* file) {
  return (void*)QTemporaryFile::createNativeFile(*file);
}

//  main block end
