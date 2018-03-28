//  header block begin
// /usr/include/qt/QtCore/qtemporarydir.h
#ifndef protected
#define protected public
#endif
#include <qtemporarydir.h>
#include <QtCore>
#include "callback_inherit.h"

// QTemporaryDir is pure virtual: false
// QTemporaryDir has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTemporaryDir : public QTemporaryDir {
public:
  virtual ~MyQTemporaryDir() {}
// void QTemporaryDir()
MyQTemporaryDir() : QTemporaryDir() {}
// void QTemporaryDir(const QString &)
MyQTemporaryDir(const QString & templateName) : QTemporaryDir(templateName) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:56
// [-2] void QTemporaryDir()
extern "C" Q_DECL_EXPORT
void* C_ZN13QTemporaryDirC2Ev() {
  return  new QTemporaryDir();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:57
// [-2] void QTemporaryDir(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QTemporaryDirC2ERK7QString(QString* templateName) {
  return  new QTemporaryDir(*templateName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:58
// [-2] void ~QTemporaryDir()
extern "C" Q_DECL_EXPORT
void C_ZN13QTemporaryDirD2Ev(void *this_) {
  delete (QTemporaryDir*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:60
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QTemporaryDir7isValidEv(void *this_) {
  return (bool)((QTemporaryDir*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtCore/qtemporarydir.h:61
// [8] QString errorString()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTemporaryDir11errorStringEv(void *this_) {
  auto rv = ((QTemporaryDir*)this_)->errorString();
return new QString(rv);
}
#endif // QT_VERSION >= 0x050600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:63
// [1] bool autoRemove()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QTemporaryDir10autoRemoveEv(void *this_) {
  return (bool)((QTemporaryDir*)this_)->autoRemove();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:64
// [-2] void setAutoRemove(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QTemporaryDir13setAutoRemoveEb(void *this_, bool b) {
  ((QTemporaryDir*)this_)->setAutoRemove(b);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:65
// [1] bool remove()
extern "C" Q_DECL_EXPORT
bool C_ZN13QTemporaryDir6removeEv(void *this_) {
  return (bool)((QTemporaryDir*)this_)->remove();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:67
// [8] QString path()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTemporaryDir4pathEv(void *this_) {
  auto rv = ((QTemporaryDir*)this_)->path();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtCore/qtemporarydir.h:68
// [8] QString filePath(const QString &)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void* C_ZNK13QTemporaryDir8filePathERK7QString(void *this_, QString* fileName) {
  auto rv = ((QTemporaryDir*)this_)->filePath(*fileName);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050900

//  main block end
