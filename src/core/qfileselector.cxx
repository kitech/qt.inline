// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qfileselector.h
// dst-file: /src/core/qfileselector.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfileselector.h>


#include <qstringlist.h>
#include <qurl.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qfileselector_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFileSelector_Class_Size()
{
  return sizeof(QFileSelector);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qfileselector.h', line 62, column 17>
//   // proto:  QStringList QFileSelector::allSelectors();
// _ZNK13QFileSelector12allSelectorsEv allSelectors()
extern "C"
QStringList*
C_ZNK13QFileSelector12allSelectorsEv(void *qthis) {
  auto ret =
  ((QFileSelector*)qthis)->allSelectors();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileselector.h', line 51, column 5>
//   // proto:  const QMetaObject * QFileSelector::metaObject();
// _ZNK13QFileSelector10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QFileSelector10metaObjectEv(void *qthis) {
  auto ret =
  ((QFileSelector*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileselector.h', line 57, column 10>
//   // proto:  QUrl QFileSelector::select(const QUrl & filePath);
// _ZNK13QFileSelector6selectERK4QUrl select(const class QUrl &)
extern "C"
QUrl*
C_ZNK13QFileSelector6selectERK4QUrl(void *qthis,
const QUrl* arg1) {
  auto ret =
  ((QFileSelector*)qthis)->select(*((const QUrl*)arg1));
  return new QUrl(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileselector.h', line 53, column 14>
//   // proto:  void QFileSelector::QFileSelector(QObject * parent);
extern "C"
QFileSelector*
C_ZN13QFileSelectorC2EP7QObject(QObject * arg1) {
  auto ret = new QFileSelector(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileselector.h', line 60, column 10>
//   // proto:  void QFileSelector::setExtraSelectors(const QStringList & list);
// _ZN13QFileSelector17setExtraSelectorsERK11QStringList setExtraSelectors(const class QStringList &)
extern "C"
void
C_ZN13QFileSelector17setExtraSelectorsERK11QStringList(void *qthis,
const QStringList* arg1) {
  ((QFileSelector*)qthis)->setExtraSelectors(*((const QStringList*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileselector.h', line 56, column 13>
//   // proto:  QString QFileSelector::select(const QString & filePath);
// _ZNK13QFileSelector6selectERK7QString select(const class QString &)
extern "C"
QString*
C_ZNK13QFileSelector6selectERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QFileSelector*)qthis)->select(*((const QString*)arg1));
  return new QString(ret); // 5
}
//   // proto:  void QFileSelector::~QFileSelector();
extern "C"
void C_ZN13QFileSelectorD2Ev(void *qthis) {
  delete (QFileSelector*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qfileselector.h', line 59, column 17>
//   // proto:  QStringList QFileSelector::extraSelectors();
// _ZNK13QFileSelector14extraSelectorsEv extraSelectors()
extern "C"
QStringList*
C_ZNK13QFileSelector14extraSelectorsEv(void *qthis) {
  auto ret =
  ((QFileSelector*)qthis)->extraSelectors();
  return new QStringList(ret); // 5
}
// <= ext block end

// body block begin =>
// QFileSelector_SlotProxy here
class QFileSelector_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFileSelector_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qfileselector.moc"

extern "C" {
  QFileSelector_SlotProxy* QFileSelector_SlotProxy_new()
  {
    return new QFileSelector_SlotProxy();
  }
};

// <= body block end

