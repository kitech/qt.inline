// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qtemporaryfile.h
// dst-file: /src/core/qtemporaryfile.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtemporaryfile.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qtemporaryfile_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 86, column 49>
//   // proto: static QTemporaryFile * QTemporaryFile::createLocalFile(QFile & file);
if (true) {
  auto f = [](QTemporaryFile flythis, QFile & arg1) {
    ((QTemporaryFile*)0)->createLocalFile(arg1);
    flythis.createLocalFile(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QTemporaryFile15createLocalFileER5QFile createLocalFile(class QFile &)
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 89, column 35>
//   // proto: static QTemporaryFile * QTemporaryFile::createNativeFile(const QString & fileName);
if (true) {
  auto f = [](QTemporaryFile flythis, const QString & arg1) {
    ((QTemporaryFile*)0)->createNativeFile(arg1);
    flythis.createNativeFile(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QTemporaryFile16createNativeFileERK7QString createNativeFile(const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 78, column 10>
//   // proto:  bool QTemporaryFile::open();
if (true) {
  auto f = [](QTemporaryFile flythis) {
    ((QTemporaryFile*)0)->open();
    flythis.open();
  };
  if (f == nullptr){}
}
// _ZN14QTemporaryFile4openEv open()
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 84, column 49>
//   // proto: static QTemporaryFile * QTemporaryFile::createLocalFile(const QString & fileName);
if (true) {
  auto f = [](QTemporaryFile flythis, const QString & arg1) {
    ((QTemporaryFile*)0)->createLocalFile(arg1);
    flythis.createLocalFile(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QTemporaryFile15createLocalFileERK7QString createLocalFile(const class QString &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTemporaryFile_Class_Size()
{
  return sizeof(QTemporaryFile);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 74, column 10>
//   // proto:  bool QTemporaryFile::autoRemove();
// _ZNK14QTemporaryFile10autoRemoveEv autoRemove()
extern "C"
bool
C_ZNK14QTemporaryFile10autoRemoveEv(void *qthis) {
  auto ret =
  ((QTemporaryFile*)qthis)->autoRemove();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 86, column 49>
//   // proto: static QTemporaryFile * QTemporaryFile::createLocalFile(QFile & file);
// _ZN14QTemporaryFile15createLocalFileER5QFile createLocalFile(class QFile &)
extern "C"
void*
C_ZN14QTemporaryFile15createLocalFileER5QFile(QFile* arg1) {
  auto ret =
  QTemporaryFile::createLocalFile(*((QFile*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 67, column 14>
//   // proto:  void QTemporaryFile::QTemporaryFile(const QString & templateName);
extern "C"
QTemporaryFile*
C_ZN14QTemporaryFileC2ERK7QString(const QString* arg1) {
  auto ret = new QTemporaryFile(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 66, column 5>
//   // proto:  void QTemporaryFile::QTemporaryFile();
extern "C"
QTemporaryFile*
C_ZN14QTemporaryFileC2Ev() {
  auto ret = new QTemporaryFile();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 69, column 14>
//   // proto:  void QTemporaryFile::QTemporaryFile(QObject * parent);
extern "C"
QTemporaryFile*
C_ZN14QTemporaryFileC2EP7QObject(QObject * arg1) {
  auto ret = new QTemporaryFile(arg1);
  return ret;
}
//   // proto:  void QTemporaryFile::~QTemporaryFile();
extern "C"
void C_ZN14QTemporaryFileD2Ev(void *qthis) {
  delete (QTemporaryFile*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 61, column 5>
//   // proto:  const QMetaObject * QTemporaryFile::metaObject();
// _ZNK14QTemporaryFile10metaObjectEv metaObject()
extern "C"
void*
C_ZNK14QTemporaryFile10metaObjectEv(void *qthis) {
  auto ret =
  ((QTemporaryFile*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 75, column 10>
//   // proto:  void QTemporaryFile::setAutoRemove(bool b);
// _ZN14QTemporaryFile13setAutoRemoveEb setAutoRemove(_Bool)
extern "C"
void
C_ZN14QTemporaryFile13setAutoRemoveEb(void *qthis,
bool arg1) {
  ((QTemporaryFile*)qthis)->setAutoRemove(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 80, column 13>
//   // proto:  QString QTemporaryFile::fileName();
// _ZNK14QTemporaryFile8fileNameEv fileName()
extern "C"
QString*
C_ZNK14QTemporaryFile8fileNameEv(void *qthis) {
  auto ret =
  ((QTemporaryFile*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 81, column 13>
//   // proto:  QString QTemporaryFile::fileTemplate();
// _ZNK14QTemporaryFile12fileTemplateEv fileTemplate()
extern "C"
QString*
C_ZNK14QTemporaryFile12fileTemplateEv(void *qthis) {
  auto ret =
  ((QTemporaryFile*)qthis)->fileTemplate();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 89, column 35>
//   // proto: static QTemporaryFile * QTemporaryFile::createNativeFile(const QString & fileName);
// _ZN14QTemporaryFile16createNativeFileERK7QString createNativeFile(const class QString &)
extern "C"
void*
C_ZN14QTemporaryFile16createNativeFileERK7QString(const QString* arg1) {
  auto ret =
  QTemporaryFile::createNativeFile(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 78, column 10>
//   // proto:  bool QTemporaryFile::open();
// _ZN14QTemporaryFile4openEv open()
extern "C"
bool
C_ZN14QTemporaryFile4openEv(void *qthis) {
  auto ret =
  ((QTemporaryFile*)qthis)->open();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 84, column 49>
//   // proto: static QTemporaryFile * QTemporaryFile::createLocalFile(const QString & fileName);
// _ZN14QTemporaryFile15createLocalFileERK7QString createLocalFile(const class QString &)
extern "C"
void*
C_ZN14QTemporaryFile15createLocalFileERK7QString(const QString* arg1) {
  auto ret =
  QTemporaryFile::createLocalFile(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 91, column 28>
//   // proto: static QTemporaryFile * QTemporaryFile::createNativeFile(QFile & file);
// _ZN14QTemporaryFile16createNativeFileER5QFile createNativeFile(class QFile &)
extern "C"
void*
C_ZN14QTemporaryFile16createNativeFileER5QFile(QFile* arg1) {
  auto ret =
  QTemporaryFile::createNativeFile(*((QFile*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 82, column 10>
//   // proto:  void QTemporaryFile::setFileTemplate(const QString & name);
// _ZN14QTemporaryFile15setFileTemplateERK7QString setFileTemplate(const class QString &)
extern "C"
void
C_ZN14QTemporaryFile15setFileTemplateERK7QString(void *qthis,
const QString* arg1) {
  ((QTemporaryFile*)qthis)->setFileTemplate(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qtemporaryfile.h', line 70, column 5>
//   // proto:  void QTemporaryFile::QTemporaryFile(const QString & templateName, QObject * parent);
extern "C"
QTemporaryFile*
C_ZN14QTemporaryFileC2ERK7QStringP7QObject(const QString* arg1,
QObject * arg2) {
  auto ret = new QTemporaryFile(*((const QString*)arg1),
arg2);
  return ret;
}
// <= ext block end

// body block begin =>
// QTemporaryFile_SlotProxy here
class QTemporaryFile_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTemporaryFile_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qtemporaryfile.moc"

extern "C" {
  QTemporaryFile_SlotProxy* QTemporaryFile_SlotProxy_new()
  {
    return new QTemporaryFile_SlotProxy();
  }
};

// <= body block end

