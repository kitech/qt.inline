// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qstatictext.h
// dst-file: /src/gui/qstatictext.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstatictext.h>


#include <qsize.h>
#include <qstring.h>
#include <qnamespace.h>
#include <qglobal.h>
#include <qtextoption.h>
// <= header block end

// main block begin =>
void __keep_qstatictext_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 62, column 10>
//   // proto:  void QStaticText::swap(QStaticText & other);
if (true) {
  auto f = [](QStaticText flythis, QStaticText & arg1) {
    ((QStaticText*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QStaticText4swapERS_ swap(class QStaticText &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStaticText_Class_Size()
{
  return sizeof(QStaticText);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 58, column 5>
//   // proto:  void QStaticText::QStaticText(const QString & text);
extern "C"
QStaticText*
C_ZN11QStaticTextC2ERK7QString(const QString* arg1) {
  auto ret = new QStaticText(*((const QString*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 76, column 12>
//   // proto:  QSizeF QStaticText::size();
// _ZNK11QStaticText4sizeEv size()
extern "C"
QSizeF*
C_ZNK11QStaticText4sizeEv(void *qthis) {
  auto ret =
  ((QStaticText*)qthis)->size();
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 80, column 10>
//   // proto:  void QStaticText::setPerformanceHint(QStaticText::PerformanceHint performanceHint);
// _ZN11QStaticText18setPerformanceHintENS_15PerformanceHintE setPerformanceHint(enum QStaticText::PerformanceHint)
extern "C"
void
C_ZN11QStaticText18setPerformanceHintENS_15PerformanceHintE(void *qthis,
QStaticText::PerformanceHint arg1) {
  ((QStaticText*)qthis)->setPerformanceHint(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 65, column 13>
//   // proto:  QString QStaticText::text();
// _ZNK11QStaticText4textEv text()
extern "C"
QString*
C_ZNK11QStaticText4textEv(void *qthis) {
  auto ret =
  ((QStaticText*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 67, column 10>
//   // proto:  void QStaticText::setTextFormat(Qt::TextFormat textFormat);
// _ZN11QStaticText13setTextFormatEN2Qt10TextFormatE setTextFormat(Qt::TextFormat)
extern "C"
void
C_ZN11QStaticText13setTextFormatEN2Qt10TextFormatE(void *qthis,
Qt::TextFormat* arg1) {
  ((QStaticText*)qthis)->setTextFormat(*((Qt::TextFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 68, column 20>
//   // proto:  Qt::TextFormat QStaticText::textFormat();
// _ZNK11QStaticText10textFormatEv textFormat()
extern "C"
Qt::TextFormat
C_ZNK11QStaticText10textFormatEv(void *qthis) {
  auto ret =
  ((QStaticText*)qthis)->textFormat();
  return ret; // 0 TypeKind.ENUM
}
//   // proto:  void QStaticText::~QStaticText();
extern "C"
void C_ZN11QStaticTextD2Ev(void *qthis) {
  delete (QStaticText*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 81, column 21>
//   // proto:  QStaticText::PerformanceHint QStaticText::performanceHint();
// _ZNK11QStaticText15performanceHintEv performanceHint()
extern "C"
QStaticText::PerformanceHint
C_ZNK11QStaticText15performanceHintEv(void *qthis) {
  auto ret =
  ((QStaticText*)qthis)->performanceHint();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 64, column 10>
//   // proto:  void QStaticText::setText(const QString & text);
// _ZN11QStaticText7setTextERK7QString setText(const class QString &)
extern "C"
void
C_ZN11QStaticText7setTextERK7QString(void *qthis,
const QString* arg1) {
  ((QStaticText*)qthis)->setText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 57, column 5>
//   // proto:  void QStaticText::QStaticText();
extern "C"
QStaticText*
C_ZN11QStaticTextC2Ev() {
  auto ret = new QStaticText();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 78, column 10>
//   // proto:  void QStaticText::prepare(const QTransform & matrix, const QFont & font);
// _ZN11QStaticText7prepareERK10QTransformRK5QFont prepare(const class QTransform &, const class QFont &)
extern "C"
void
C_ZN11QStaticText7prepareERK10QTransformRK5QFont(void *qthis,
const QTransform* arg1,
const QFont* arg2) {
  ((QStaticText*)qthis)->prepare(*((const QTransform*)arg1),
*((const QFont*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 73, column 10>
//   // proto:  void QStaticText::setTextOption(const QTextOption & textOption);
// _ZN11QStaticText13setTextOptionERK11QTextOption setTextOption(const class QTextOption &)
extern "C"
void
C_ZN11QStaticText13setTextOptionERK11QTextOption(void *qthis,
const QTextOption* arg1) {
  ((QStaticText*)qthis)->setTextOption(*((const QTextOption*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 70, column 10>
//   // proto:  void QStaticText::setTextWidth(qreal textWidth);
// _ZN11QStaticText12setTextWidthEd setTextWidth(qreal)
extern "C"
void
C_ZN11QStaticText12setTextWidthEd(void *qthis,
qreal arg1) {
  ((QStaticText*)qthis)->setTextWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 71, column 11>
//   // proto:  qreal QStaticText::textWidth();
// _ZNK11QStaticText9textWidthEv textWidth()
extern "C"
double
C_ZNK11QStaticText9textWidthEv(void *qthis) {
  auto ret =
  ((QStaticText*)qthis)->textWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 62, column 10>
//   // proto:  void QStaticText::swap(QStaticText & other);
// _ZN11QStaticText4swapERS_ swap(class QStaticText &)
extern "C"
void
C_ZN11QStaticText4swapERS_(void *qthis,
QStaticText* arg1) {
  ((QStaticText*)qthis)->swap(*((QStaticText*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 74, column 17>
//   // proto:  QTextOption QStaticText::textOption();
// _ZNK11QStaticText10textOptionEv textOption()
extern "C"
QTextOption*
C_ZNK11QStaticText10textOptionEv(void *qthis) {
  auto ret =
  ((QStaticText*)qthis)->textOption();
  return new QTextOption(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qstatictext.h', line 59, column 5>
//   // proto:  void QStaticText::QStaticText(const QStaticText & other);
extern "C"
QStaticText*
C_ZN11QStaticTextC2ERKS_(const QStaticText* arg1) {
  auto ret = new QStaticText(*((const QStaticText*)arg1));
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

