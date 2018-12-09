//  header block begin

// /usr/include/qt/QtGui/qtextdocumentfragment.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextdocumentfragment.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextDocumentFragment is pure virtual: false
// QTextDocumentFragment has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextDocumentFragment_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextDocumentFragment_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextDocumentFragment_t qt_meta_stringdata_MyQTextDocumentFragment = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQTextDocumentFragment"
  },
  "MyQTextDocumentFragment"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextDocumentFragment[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQTextDocumentFragment : public QTextDocumentFragment {
public:
  virtual ~MyQTextDocumentFragment() {}
// void QTextDocumentFragment()
MyQTextDocumentFragment() : QTextDocumentFragment() {}
// void QTextDocumentFragment(const QTextDocument *)
MyQTextDocumentFragment(const QTextDocument * document) : QTextDocumentFragment(document) {}
// void QTextDocumentFragment(const QTextCursor &)
MyQTextDocumentFragment(const QTextCursor & range_) : QTextDocumentFragment(range_) {}
// void QTextDocumentFragment(const QTextDocumentFragment &)
MyQTextDocumentFragment(const QTextDocumentFragment & rhs) : QTextDocumentFragment(rhs) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:57
// [-2] void QTextDocumentFragment()
extern "C" Q_DECL_EXPORT
void* C_ZN21QTextDocumentFragmentC2Ev() {
  return  new QTextDocumentFragment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:58
// [-2] void QTextDocumentFragment(const QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QTextDocumentFragmentC2EPK13QTextDocument(const QTextDocument * document) {
  return  new QTextDocumentFragment(document);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:59
// [-2] void QTextDocumentFragment(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QTextDocumentFragmentC2ERK11QTextCursor(QTextCursor* range_) {
  return  new QTextDocumentFragment(*range_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:60
// [-2] void QTextDocumentFragment(const QTextDocumentFragment &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QTextDocumentFragmentC2ERKS_(QTextDocumentFragment* rhs) {
  return  new QTextDocumentFragment(*rhs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:61
// [8] QTextDocumentFragment & operator=(const QTextDocumentFragment &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QTextDocumentFragmentaSERKS_(void *this_, QTextDocumentFragment* rhs) {
  auto& rv = ((QTextDocumentFragment*)this_)->operator=(*rhs);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:62
// [-2] void ~QTextDocumentFragment()
extern "C" Q_DECL_EXPORT
void C_ZN21QTextDocumentFragmentD2Ev(void *this_) {
  delete (QTextDocumentFragment*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:64
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QTextDocumentFragment7isEmptyEv(void *this_) {
  return (bool)((QTextDocumentFragment*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:66
// [8] QString toPlainText()
extern "C" Q_DECL_EXPORT
void* C_ZNK21QTextDocumentFragment11toPlainTextEv(void *this_) {
  auto rv = ((QTextDocumentFragment*)this_)->toPlainText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextdocumentfragment.h:68
// [8] QString toHtml(const QByteArray &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK21QTextDocumentFragment6toHtmlERK10QByteArray(void *this_, QByteArray* encoding) {
  auto rv = ((QTextDocumentFragment*)this_)->toHtml(*encoding);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:71
// [8] QTextDocumentFragment fromPlainText(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QTextDocumentFragment13fromPlainTextERK7QString(QString* plainText) {
  auto rv = QTextDocumentFragment::fromPlainText(*plainText);
return new QTextDocumentFragment(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentfragment.h:73
// [8] QTextDocumentFragment fromHtml(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QTextDocumentFragment8fromHtmlERK7QString(QString* html) {
  auto rv = QTextDocumentFragment::fromHtml(*html);
return new QTextDocumentFragment(rv);
}

// Public static Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtextdocumentfragment.h:74
// [8] QTextDocumentFragment fromHtml(const QString &, const QTextDocument *)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN21QTextDocumentFragment8fromHtmlERK7QStringPK13QTextDocument(QString* html, const QTextDocument * resourceProvider) {
  auto rv = QTextDocumentFragment::fromHtml(*html, resourceProvider);
return new QTextDocumentFragment(rv);
}
#endif // QT_VERSION >= 0x040200

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
