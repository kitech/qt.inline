//  header block begin
// /usr/include/qt/QtGui/qtextdocumentfragment.h
#include <qtextdocumentfragment.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qtextdocumentfragment.h:56
// void QTextDocumentFragment()
extern "C"
void* C_ZN21QTextDocumentFragmentC1Ev() {
  return new QTextDocumentFragment();
}
// /usr/include/qt/QtGui/qtextdocumentfragment.h:57
// void QTextDocumentFragment(const class QTextDocument *)
extern "C"
void* C_ZN21QTextDocumentFragmentC1EPK13QTextDocument(const QTextDocument * document) {
  return new QTextDocumentFragment(document);
}
// /usr/include/qt/QtGui/qtextdocumentfragment.h:58
// void QTextDocumentFragment(const class QTextCursor &)
extern "C"
void* C_ZN21QTextDocumentFragmentC1ERK11QTextCursor(const QTextCursor & range) {
  return new QTextDocumentFragment(range);
}
// /usr/include/qt/QtGui/qtextdocumentfragment.h:61
// void ~QTextDocumentFragment()
extern "C"
void C_ZN21QTextDocumentFragmentD1Ev(void *this_) {
  delete (QTextDocumentFragment*)(this_);
}
// /usr/include/qt/QtGui/qtextdocumentfragment.h:63
// bool isEmpty()
extern "C"
void C_ZNK21QTextDocumentFragment7isEmptyEv(void *this_) {
  /*return*/ ((QTextDocumentFragment*)this_)->isEmpty();
}
// /usr/include/qt/QtGui/qtextdocumentfragment.h:65
// QString toPlainText()
extern "C"
void C_ZNK21QTextDocumentFragment11toPlainTextEv(void *this_) {
  /*return*/ ((QTextDocumentFragment*)this_)->toPlainText();
}
// /usr/include/qt/QtGui/qtextdocumentfragment.h:67
// QString toHtml(const class QByteArray &)
extern "C"
void C_ZNK21QTextDocumentFragment6toHtmlERK10QByteArray(void *this_, const QByteArray & encoding) {
  /*return*/ ((QTextDocumentFragment*)this_)->toHtml(encoding);
}
// static
// /usr/include/qt/QtGui/qtextdocumentfragment.h:70
// QTextDocumentFragment fromPlainText(const class QString &)
extern "C"
void C_ZN21QTextDocumentFragment13fromPlainTextERK7QString(const QString & plainText) {
  /*return*/ QTextDocumentFragment::fromPlainText(plainText);
}
// static
// /usr/include/qt/QtGui/qtextdocumentfragment.h:72
// QTextDocumentFragment fromHtml(const class QString &)
extern "C"
void C_ZN21QTextDocumentFragment8fromHtmlERK7QString(const QString & html) {
  /*return*/ QTextDocumentFragment::fromHtml(html);
}
// static
// /usr/include/qt/QtGui/qtextdocumentfragment.h:73
// QTextDocumentFragment fromHtml(const class QString &, const class QTextDocument *)
extern "C"
void C_ZN21QTextDocumentFragment8fromHtmlERK7QStringPK13QTextDocument(const QString & html, const QTextDocument * resourceProvider) {
  /*return*/ QTextDocumentFragment::fromHtml(html, resourceProvider);
}
//  main block end
