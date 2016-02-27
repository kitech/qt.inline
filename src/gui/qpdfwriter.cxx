// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qpdfwriter.h
// dst-file: /src/gui/qpdfwriter.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpdfwriter.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qpdfwriter_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPdfWriter_Class_Size()
{
  return sizeof(QPdfWriter);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qpdfwriter.h', line 80, column 10>
//   // proto:  void QPdfWriter::setPageSize(QPagedPaintDevice::PageSize size);
// _ZN10QPdfWriter11setPageSizeEN17QPagedPaintDevice8PageSizeE setPageSize(enum QPagedPaintDevice::PageSize)
extern "C"
void
C_ZN10QPdfWriter11setPageSizeEN17QPagedPaintDevice8PageSizeE(void *qthis,
QPagedPaintDevice::PageSize arg1) {
  ((QPdfWriter*)qthis)->setPageSize(arg1);
}
//   // proto:  void QPdfWriter::~QPdfWriter();
extern "C"
void C_ZN10QPdfWriterD2Ev(void *qthis) {
  delete (QPdfWriter*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpdfwriter.h', line 62, column 10>
//   // proto:  void QPdfWriter::setCreator(const QString & creator);
// _ZN10QPdfWriter10setCreatorERK7QString setCreator(const class QString &)
extern "C"
void
C_ZN10QPdfWriter10setCreatorERK7QString(void *qthis,
const QString* arg1) {
  ((QPdfWriter*)qthis)->setCreator(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpdfwriter.h', line 81, column 10>
//   // proto:  void QPdfWriter::setPageSizeMM(const QSizeF & size);
// _ZN10QPdfWriter13setPageSizeMMERK6QSizeF setPageSizeMM(const class QSizeF &)
extern "C"
void
C_ZN10QPdfWriter13setPageSizeMMERK6QSizeF(void *qthis,
const QSizeF* arg1) {
  ((QPdfWriter*)qthis)->setPageSizeMM(*((const QSizeF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpdfwriter.h', line 66, column 10>
//   // proto:  void QPdfWriter::setResolution(int resolution);
// _ZN10QPdfWriter13setResolutionEi setResolution(int)
extern "C"
void
C_ZN10QPdfWriter13setResolutionEi(void *qthis,
int arg1) {
  ((QPdfWriter*)qthis)->setResolution(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qpdfwriter.h', line 64, column 10>
//   // proto:  bool QPdfWriter::newPage();
// _ZN10QPdfWriter7newPageEv newPage()
extern "C"
bool
C_ZN10QPdfWriter7newPageEv(void *qthis) {
  auto ret =
  ((QPdfWriter*)qthis)->newPage();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qpdfwriter.h', line 58, column 13>
//   // proto:  QString QPdfWriter::title();
// _ZNK10QPdfWriter5titleEv title()
extern "C"
QString*
C_ZNK10QPdfWriter5titleEv(void *qthis) {
  auto ret =
  ((QPdfWriter*)qthis)->title();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpdfwriter.h', line 61, column 13>
//   // proto:  QString QPdfWriter::creator();
// _ZNK10QPdfWriter7creatorEv creator()
extern "C"
QString*
C_ZNK10QPdfWriter7creatorEv(void *qthis) {
  auto ret =
  ((QPdfWriter*)qthis)->creator();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qpdfwriter.h', line 67, column 9>
//   // proto:  int QPdfWriter::resolution();
// _ZNK10QPdfWriter10resolutionEv resolution()
extern "C"
int
C_ZNK10QPdfWriter10resolutionEv(void *qthis) {
  auto ret =
  ((QPdfWriter*)qthis)->resolution();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qpdfwriter.h', line 83, column 10>
//   // proto:  void QPdfWriter::setMargins(const QPagedPaintDevice::Margins & m);
// _ZN10QPdfWriter10setMarginsERKN17QPagedPaintDevice7MarginsE setMargins(const struct QPagedPaintDevice::Margins &)
extern "C"
void
C_ZN10QPdfWriter10setMarginsERKN17QPagedPaintDevice7MarginsE(void *qthis,
const QPagedPaintDevice::Margins* arg1) {
  ((QPdfWriter*)qthis)->setMargins(*((const QPagedPaintDevice::Margins*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qpdfwriter.h', line 52, column 5>
//   // proto:  const QMetaObject * QPdfWriter::metaObject();
// _ZNK10QPdfWriter10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QPdfWriter10metaObjectEv(void *qthis) {
  auto ret =
  ((QPdfWriter*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpdfwriter.h', line 54, column 14>
//   // proto:  void QPdfWriter::QPdfWriter(const QString & filename);
extern "C"
QPdfWriter*
C_ZN10QPdfWriterC2ERK7QString(const QString* arg1) {
  auto ret = new QPdfWriter(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpdfwriter.h', line 55, column 14>
//   // proto:  void QPdfWriter::QPdfWriter(QIODevice * device);
extern "C"
QPdfWriter*
C_ZN10QPdfWriterC2EP9QIODevice(QIODevice * arg1) {
  auto ret = new QPdfWriter(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qpdfwriter.h', line 59, column 10>
//   // proto:  void QPdfWriter::setTitle(const QString & title);
// _ZN10QPdfWriter8setTitleERK7QString setTitle(const class QString &)
extern "C"
void
C_ZN10QPdfWriter8setTitleERK7QString(void *qthis,
const QString* arg1) {
  ((QPdfWriter*)qthis)->setTitle(*((const QString*)arg1));
}
// <= ext block end

// body block begin =>
// QPdfWriter_SlotProxy here
class QPdfWriter_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPdfWriter_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qpdfwriter.moc"

extern "C" {
  QPdfWriter_SlotProxy* QPdfWriter_SlotProxy_new()
  {
    return new QPdfWriter_SlotProxy();
  }
};

// <= body block end

