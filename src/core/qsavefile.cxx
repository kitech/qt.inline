// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qsavefile.h
// dst-file: /src/core/qsavefile.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsavefile.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qsavefile_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSaveFile_Class_Size()
{
  return sizeof(QSaveFile);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qsavefile.h', line 71, column 10>
//   // proto:  void QSaveFile::cancelWriting();
// _ZN9QSaveFile13cancelWritingEv cancelWriting()
extern "C"
void
C_ZN9QSaveFile13cancelWritingEv(void *qthis) {
  ((QSaveFile*)qthis)->cancelWriting();
}
// <SourceLocation file '/usr/include/qt/QtCore/qsavefile.h', line 61, column 14>
//   // proto:  void QSaveFile::QSaveFile(QObject * parent);
extern "C"
QSaveFile*
C_ZN9QSaveFileC2EP7QObject(QObject * arg1) {
  auto ret = new QSaveFile(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsavefile.h', line 62, column 14>
//   // proto:  void QSaveFile::QSaveFile(const QString & name, QObject * parent);
extern "C"
QSaveFile*
C_ZN9QSaveFileC2ERK7QStringP7QObject(const QString* arg1,
QObject * arg2) {
  auto ret = new QSaveFile(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsavefile.h', line 65, column 13>
//   // proto:  QString QSaveFile::fileName();
// _ZNK9QSaveFile8fileNameEv fileName()
extern "C"
QString*
C_ZNK9QSaveFile8fileNameEv(void *qthis) {
  auto ret =
  ((QSaveFile*)qthis)->fileName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qsavefile.h', line 60, column 14>
//   // proto:  void QSaveFile::QSaveFile(const QString & name);
extern "C"
QSaveFile*
C_ZN9QSaveFileC2ERK7QString(const QString* arg1) {
  auto ret = new QSaveFile(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsavefile.h', line 55, column 5>
//   // proto:  const QMetaObject * QSaveFile::metaObject();
// _ZNK9QSaveFile10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QSaveFile10metaObjectEv(void *qthis) {
  auto ret =
  ((QSaveFile*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsavefile.h', line 68, column 10>
//   // proto:  bool QSaveFile::open(OpenMode flags);
// _ZN9QSaveFile4openE6QFlagsIN9QIODevice12OpenModeFlagEE open(OpenMode)
extern "C"
bool
C_ZN9QSaveFile4openE6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
QIODevice::OpenMode arg1) {
  auto ret =
  ((QSaveFile*)qthis)->open(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsavefile.h', line 69, column 10>
//   // proto:  bool QSaveFile::commit();
// _ZN9QSaveFile6commitEv commit()
extern "C"
bool
C_ZN9QSaveFile6commitEv(void *qthis) {
  auto ret =
  ((QSaveFile*)qthis)->commit();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QSaveFile::~QSaveFile();
extern "C"
void C_ZN9QSaveFileD2Ev(void *qthis) {
  delete (QSaveFile*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qsavefile.h', line 66, column 10>
//   // proto:  void QSaveFile::setFileName(const QString & name);
// _ZN9QSaveFile11setFileNameERK7QString setFileName(const class QString &)
extern "C"
void
C_ZN9QSaveFile11setFileNameERK7QString(void *qthis,
const QString* arg1) {
  ((QSaveFile*)qthis)->setFileName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qsavefile.h', line 74, column 10>
//   // proto:  bool QSaveFile::directWriteFallback();
// _ZNK9QSaveFile19directWriteFallbackEv directWriteFallback()
extern "C"
bool
C_ZNK9QSaveFile19directWriteFallbackEv(void *qthis) {
  auto ret =
  ((QSaveFile*)qthis)->directWriteFallback();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qsavefile.h', line 73, column 10>
//   // proto:  void QSaveFile::setDirectWriteFallback(bool enabled);
// _ZN9QSaveFile22setDirectWriteFallbackEb setDirectWriteFallback(_Bool)
extern "C"
void
C_ZN9QSaveFile22setDirectWriteFallbackEb(void *qthis,
bool arg1) {
  ((QSaveFile*)qthis)->setDirectWriteFallback(arg1);
}
// <= ext block end

// body block begin =>
// QSaveFile_SlotProxy here
class QSaveFile_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSaveFile_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qsavefile.moc"

extern "C" {
  QSaveFile_SlotProxy* QSaveFile_SlotProxy_new()
  {
    return new QSaveFile_SlotProxy();
  }
};

// <= body block end

