// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qmimedata.h
// dst-file: /src/core/qmimedata.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmimedata.h>


#include <qvariant.h>
#include <qstring.h>
#include <qlist.h>
#include <qdatastream.h>
#include <qbytearray.h>
#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qmimedata_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMimeData_Class_Size()
{
  return sizeof(QMimeData);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 74, column 10>
//   // proto:  void QMimeData::setData(const QString & mimetype, const QByteArray & data);
// _ZN9QMimeData7setDataERK7QStringRK10QByteArray setData(const class QString &, const class QByteArray &)
extern "C"
void
C_ZN9QMimeData7setDataERK7QStringRK10QByteArray(void *qthis,
const QString* arg1,
const QByteArray* arg2) {
  ((QMimeData*)qthis)->setData(*((const QString*)arg1),
*((const QByteArray*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 69, column 14>
//   // proto:  QVariant QMimeData::colorData();
// _ZNK9QMimeData9colorDataEv colorData()
extern "C"
QVariant*
C_ZNK9QMimeData9colorDataEv(void *qthis) {
  auto ret =
  ((QMimeData*)qthis)->colorData();
  return new QVariant(ret); // 5
}
//   // proto:  void QMimeData::~QMimeData();
extern "C"
void C_ZN9QMimeDataD2Ev(void *qthis) {
  delete (QMimeData*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 63, column 10>
//   // proto:  bool QMimeData::hasHtml();
// _ZNK9QMimeData7hasHtmlEv hasHtml()
extern "C"
bool
C_ZNK9QMimeData7hasHtmlEv(void *qthis) {
  auto ret =
  ((QMimeData*)qthis)->hasHtml();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 65, column 14>
//   // proto:  QVariant QMimeData::imageData();
// _ZNK9QMimeData9imageDataEv imageData()
extern "C"
QVariant*
C_ZNK9QMimeData9imageDataEv(void *qthis) {
  auto ret =
  ((QMimeData*)qthis)->imageData();
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 77, column 18>
//   // proto:  bool QMimeData::hasFormat(const QString & mimetype);
// _ZNK9QMimeData9hasFormatERK7QString hasFormat(const class QString &)
extern "C"
bool
C_ZNK9QMimeData9hasFormatERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QMimeData*)qthis)->hasFormat(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 58, column 10>
//   // proto:  void QMimeData::setText(const QString & text);
// _ZN9QMimeData7setTextERK7QString setText(const class QString &)
extern "C"
void
C_ZN9QMimeData7setTextERK7QString(void *qthis,
const QString* arg1) {
  ((QMimeData*)qthis)->setText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 80, column 10>
//   // proto:  void QMimeData::clear();
// _ZN9QMimeData5clearEv clear()
extern "C"
void
C_ZN9QMimeData5clearEv(void *qthis) {
  ((QMimeData*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 57, column 13>
//   // proto:  QString QMimeData::text();
// _ZNK9QMimeData4textEv text()
extern "C"
QString*
C_ZNK9QMimeData4textEv(void *qthis) {
  auto ret =
  ((QMimeData*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 62, column 10>
//   // proto:  void QMimeData::setHtml(const QString & html);
// _ZN9QMimeData7setHtmlERK7QString setHtml(const class QString &)
extern "C"
void
C_ZN9QMimeData7setHtmlERK7QString(void *qthis,
const QString* arg1) {
  ((QMimeData*)qthis)->setHtml(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 54, column 10>
//   // proto:  void QMimeData::setUrls(const QList<QUrl> & urls);
// _ZN9QMimeData7setUrlsERK5QListI4QUrlE setUrls(const QList<class QUrl> &)
extern "C"
void
C_ZN9QMimeData7setUrlsERK5QListI4QUrlE(void *qthis,
const QList<QUrl>* arg1) {
  ((QMimeData*)qthis)->setUrls(*((const QList<QUrl>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 66, column 10>
//   // proto:  void QMimeData::setImageData(const QVariant & image);
// _ZN9QMimeData12setImageDataERK8QVariant setImageData(const class QVariant &)
extern "C"
void
C_ZN9QMimeData12setImageDataERK8QVariant(void *qthis,
const QVariant* arg1) {
  ((QMimeData*)qthis)->setImageData(*((const QVariant*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 55, column 10>
//   // proto:  bool QMimeData::hasUrls();
// _ZNK9QMimeData7hasUrlsEv hasUrls()
extern "C"
bool
C_ZNK9QMimeData7hasUrlsEv(void *qthis) {
  auto ret =
  ((QMimeData*)qthis)->hasUrls();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 71, column 10>
//   // proto:  bool QMimeData::hasColor();
// _ZNK9QMimeData8hasColorEv hasColor()
extern "C"
bool
C_ZNK9QMimeData8hasColorEv(void *qthis) {
  auto ret =
  ((QMimeData*)qthis)->hasColor();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 75, column 10>
//   // proto:  void QMimeData::removeFormat(const QString & mimetype);
// _ZN9QMimeData12removeFormatERK7QString removeFormat(const class QString &)
extern "C"
void
C_ZN9QMimeData12removeFormatERK7QString(void *qthis,
const QString* arg1) {
  ((QMimeData*)qthis)->removeFormat(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 61, column 13>
//   // proto:  QString QMimeData::html();
// _ZNK9QMimeData4htmlEv html()
extern "C"
QString*
C_ZNK9QMimeData4htmlEv(void *qthis) {
  auto ret =
  ((QMimeData*)qthis)->html();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 50, column 5>
//   // proto:  void QMimeData::QMimeData();
extern "C"
QMimeData*
C_ZN9QMimeDataC2Ev() {
  auto ret = new QMimeData();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 53, column 17>
//   // proto:  QList<QUrl> QMimeData::urls();
// _ZNK9QMimeData4urlsEv urls()
extern "C"
QList<QUrl>*
C_ZNK9QMimeData4urlsEv(void *qthis) {
  auto ret =
  ((QMimeData*)qthis)->urls();
  return new QList<QUrl>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 70, column 10>
//   // proto:  void QMimeData::setColorData(const QVariant & color);
// _ZN9QMimeData12setColorDataERK8QVariant setColorData(const class QVariant &)
extern "C"
void
C_ZN9QMimeData12setColorDataERK8QVariant(void *qthis,
const QVariant* arg1) {
  ((QMimeData*)qthis)->setColorData(*((const QVariant*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 59, column 10>
//   // proto:  bool QMimeData::hasText();
// _ZNK9QMimeData7hasTextEv hasText()
extern "C"
bool
C_ZNK9QMimeData7hasTextEv(void *qthis) {
  auto ret =
  ((QMimeData*)qthis)->hasText();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 48, column 5>
//   // proto:  const QMetaObject * QMimeData::metaObject();
// _ZNK9QMimeData10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QMimeData10metaObjectEv(void *qthis) {
  auto ret =
  ((QMimeData*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 73, column 16>
//   // proto:  QByteArray QMimeData::data(const QString & mimetype);
// _ZNK9QMimeData4dataERK7QString data(const class QString &)
extern "C"
QByteArray*
C_ZNK9QMimeData4dataERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QMimeData*)qthis)->data(*((const QString*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 78, column 25>
//   // proto:  QStringList QMimeData::formats();
// _ZNK9QMimeData7formatsEv formats()
extern "C"
QStringList*
C_ZNK9QMimeData7formatsEv(void *qthis) {
  auto ret =
  ((QMimeData*)qthis)->formats();
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qmimedata.h', line 67, column 10>
//   // proto:  bool QMimeData::hasImage();
// _ZNK9QMimeData8hasImageEv hasImage()
extern "C"
bool
C_ZNK9QMimeData8hasImageEv(void *qthis) {
  auto ret =
  ((QMimeData*)qthis)->hasImage();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QMimeData_SlotProxy here
class QMimeData_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMimeData_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qmimedata.moc"

extern "C" {
  QMimeData_SlotProxy* QMimeData_SlotProxy_new()
  {
    return new QMimeData_SlotProxy();
  }
};

// <= body block end

