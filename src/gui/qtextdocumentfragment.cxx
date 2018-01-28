//  header block begin
// /usr/include/qt/QtGui/qtextdocumentfragment.h
#include <qtextdocumentfragment.h>
#include <QtGui>

// QTextDocumentFragment is pure virtual: false
//  header block end

//  main block begin

class MyQTextDocumentFragment : public QTextDocumentFragment {
public:
MyQTextDocumentFragment() : QTextDocumentFragment() {}
MyQTextDocumentFragment(const QTextDocument * document) : QTextDocumentFragment(document) {}
MyQTextDocumentFragment(const QTextCursor & range) : QTextDocumentFragment(range) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:57
// [-2] void QTextDocumentFragment()
extern "C"
void* C_ZN21QTextDocumentFragmentC1Ev() {
  (MyQTextDocumentFragment*)(0);
  return  new MyQTextDocumentFragment();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:58
// [-2] void QTextDocumentFragment(const class QTextDocument *)
extern "C"
void* C_ZN21QTextDocumentFragmentC1EPK13QTextDocument(const QTextDocument * document) {
  (MyQTextDocumentFragment*)(0);
  return  new MyQTextDocumentFragment(document);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:59
// [-2] void QTextDocumentFragment(const class QTextCursor &)
extern "C"
void* C_ZN21QTextDocumentFragmentC1ERK11QTextCursor(const QTextCursor & range) {
  (MyQTextDocumentFragment*)(0);
  return  new MyQTextDocumentFragment(range);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:62
// [-2] void ~QTextDocumentFragment()
extern "C"
void C_ZN21QTextDocumentFragmentD1Ev(void *this_) {
  delete (QTextDocumentFragment*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:64
// [1] bool isEmpty()
extern "C"
bool C_ZNK21QTextDocumentFragment7isEmptyEv(void *this_) {
  return (bool)((QTextDocumentFragment*)this_)->isEmpty();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:66
// [8] QString toPlainText()
extern "C"
void* C_ZNK21QTextDocumentFragment11toPlainTextEv(void *this_) {
  auto rv = ((QTextDocumentFragment*)this_)->toPlainText();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:68
// [8] QString toHtml(const class QByteArray &)
extern "C"
void* C_ZNK21QTextDocumentFragment6toHtmlERK10QByteArray(void *this_, const QByteArray & encoding) {
  auto rv = ((QTextDocumentFragment*)this_)->toHtml(encoding);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:71
// [8] QTextDocumentFragment fromPlainText(const class QString &)
extern "C"
void* C_ZN21QTextDocumentFragment13fromPlainTextERK7QString(const QString & plainText) {
  auto rv = QTextDocumentFragment::fromPlainText(plainText);
return new QTextDocumentFragment(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:73
// [8] QTextDocumentFragment fromHtml(const class QString &)
extern "C"
void* C_ZN21QTextDocumentFragment8fromHtmlERK7QString(const QString & html) {
  auto rv = QTextDocumentFragment::fromHtml(html);
return new QTextDocumentFragment(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:74
// [8] QTextDocumentFragment fromHtml(const class QString &, const class QTextDocument *)
extern "C"
void* C_ZN21QTextDocumentFragment8fromHtmlERK7QStringPK13QTextDocument(const QString & html, const QTextDocument * resourceProvider) {
  auto rv = QTextDocumentFragment::fromHtml(html, resourceProvider);
return new QTextDocumentFragment(rv);
}
//  main block end
