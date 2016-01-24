// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qtextdocumentfragment.h
// dst-file: /src/gui/qtextdocumentfragment.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtextdocumentfragment.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qtextdocumentfragment_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextDocumentFragment_Class_Size()
{
  return sizeof(QTextDocumentFragment);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentfragment.h', line 67, column 34>
//   // proto: static QTextDocumentFragment QTextDocumentFragment::fromHtml(const QString & html, const QTextDocument * resourceProvider);
// _ZN21QTextDocumentFragment8fromHtmlERK7QStringPK13QTextDocument fromHtml(const class QString &, const class QTextDocument *)
extern "C"
QTextDocumentFragment*
C_ZN21QTextDocumentFragment8fromHtmlERK7QStringPK13QTextDocument(const QString* arg1,
const QTextDocument * arg2) {
  auto ret =
  QTextDocumentFragment::fromHtml(*((const QString*)arg1),
arg2);
  return new QTextDocumentFragment(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentfragment.h', line 53, column 5>
//   // proto:  void QTextDocumentFragment::QTextDocumentFragment(const QTextDocumentFragment & rhs);
extern "C"
QTextDocumentFragment*
C_ZN21QTextDocumentFragmentC2ERKS_(const QTextDocumentFragment* arg1) {
  auto ret = new QTextDocumentFragment(*((const QTextDocumentFragment*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentfragment.h', line 64, column 34>
//   // proto: static QTextDocumentFragment QTextDocumentFragment::fromPlainText(const QString & plainText);
// _ZN21QTextDocumentFragment13fromPlainTextERK7QString fromPlainText(const class QString &)
extern "C"
QTextDocumentFragment*
C_ZN21QTextDocumentFragment13fromPlainTextERK7QString(const QString* arg1) {
  auto ret =
  QTextDocumentFragment::fromPlainText(*((const QString*)arg1));
  return new QTextDocumentFragment(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentfragment.h', line 61, column 13>
//   // proto:  QString QTextDocumentFragment::toHtml(const QByteArray & encoding);
// _ZNK21QTextDocumentFragment6toHtmlERK10QByteArray toHtml(const class QByteArray &)
extern "C"
QString*
C_ZNK21QTextDocumentFragment6toHtmlERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QTextDocumentFragment*)qthis)->toHtml(*((const QByteArray*)arg1));
  return new QString(ret); // 5
}
//   // proto:  void QTextDocumentFragment::~QTextDocumentFragment();
extern "C"
void C_ZN21QTextDocumentFragmentD2Ev(void *qthis) {
  delete (QTextDocumentFragment*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentfragment.h', line 66, column 34>
//   // proto: static QTextDocumentFragment QTextDocumentFragment::fromHtml(const QString & html);
// _ZN21QTextDocumentFragment8fromHtmlERK7QString fromHtml(const class QString &)
extern "C"
QTextDocumentFragment*
C_ZN21QTextDocumentFragment8fromHtmlERK7QString(const QString* arg1) {
  auto ret =
  QTextDocumentFragment::fromHtml(*((const QString*)arg1));
  return new QTextDocumentFragment(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentfragment.h', line 50, column 5>
//   // proto:  void QTextDocumentFragment::QTextDocumentFragment();
extern "C"
QTextDocumentFragment*
C_ZN21QTextDocumentFragmentC2Ev() {
  auto ret = new QTextDocumentFragment();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentfragment.h', line 59, column 13>
//   // proto:  QString QTextDocumentFragment::toPlainText();
// _ZNK21QTextDocumentFragment11toPlainTextEv toPlainText()
extern "C"
QString*
C_ZNK21QTextDocumentFragment11toPlainTextEv(void *qthis) {
  auto ret =
  ((QTextDocumentFragment*)qthis)->toPlainText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentfragment.h', line 52, column 14>
//   // proto:  void QTextDocumentFragment::QTextDocumentFragment(const QTextCursor & range);
extern "C"
QTextDocumentFragment*
C_ZN21QTextDocumentFragmentC2ERK11QTextCursor(const QTextCursor* arg1) {
  auto ret = new QTextDocumentFragment(*((const QTextCursor*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentfragment.h', line 51, column 14>
//   // proto:  void QTextDocumentFragment::QTextDocumentFragment(const QTextDocument * document);
extern "C"
QTextDocumentFragment*
C_ZN21QTextDocumentFragmentC2EPK13QTextDocument(const QTextDocument * arg1) {
  auto ret = new QTextDocumentFragment(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextdocumentfragment.h', line 57, column 10>
//   // proto:  bool QTextDocumentFragment::isEmpty();
// _ZNK21QTextDocumentFragment7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK21QTextDocumentFragment7isEmptyEv(void *qthis) {
  auto ret =
  ((QTextDocumentFragment*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

