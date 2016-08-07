// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qsyntaxhighlighter.h
// dst-file: /src/gui/qsyntaxhighlighter.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsyntaxhighlighter.h>


// <= header block end

// main block begin =>
void __keep_qsyntaxhighlighter_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSyntaxHighlighter_Class_Size()
{
  return sizeof(QSyntaxHighlighter);
}

// <= use block end

// ext block begin =>
//   // proto:  void QSyntaxHighlighter::~QSyntaxHighlighter();
extern "C"
void C_ZN18QSyntaxHighlighterD2Ev(void *qthis) {
  delete (QSyntaxHighlighter*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qsyntaxhighlighter.h', line 73, column 10>
//   // proto:  void QSyntaxHighlighter::rehighlight();
// _ZN18QSyntaxHighlighter11rehighlightEv rehighlight()
extern "C"
void
C_ZN18QSyntaxHighlighter11rehighlightEv(void *qthis) {
  ((QSyntaxHighlighter*)qthis)->rehighlight();
}
// <SourceLocation file '/usr/include/qt/QtGui/qsyntaxhighlighter.h', line 65, column 14>
//   // proto:  void QSyntaxHighlighter::QSyntaxHighlighter(QObject * parent);
extern "C"
QSyntaxHighlighter*
C_ZN18QSyntaxHighlighterC2EP7QObject(QObject * arg1) {
  // auto ret = new QSyntaxHighlighter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsyntaxhighlighter.h', line 74, column 10>
//   // proto:  void QSyntaxHighlighter::rehighlightBlock(const QTextBlock & block);
// _ZN18QSyntaxHighlighter16rehighlightBlockERK10QTextBlock rehighlightBlock(const class QTextBlock &)
extern "C"
void
C_ZN18QSyntaxHighlighter16rehighlightBlockERK10QTextBlock(void *qthis,
const QTextBlock* arg1) {
  ((QSyntaxHighlighter*)qthis)->rehighlightBlock(*((const QTextBlock*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qsyntaxhighlighter.h', line 69, column 10>
//   // proto:  void QSyntaxHighlighter::setDocument(QTextDocument * doc);
// _ZN18QSyntaxHighlighter11setDocumentEP13QTextDocument setDocument(class QTextDocument *)
extern "C"
void
C_ZN18QSyntaxHighlighter11setDocumentEP13QTextDocument(void *qthis,
QTextDocument * arg1) {
  ((QSyntaxHighlighter*)qthis)->setDocument(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsyntaxhighlighter.h', line 66, column 14>
//   // proto:  void QSyntaxHighlighter::QSyntaxHighlighter(QTextDocument * parent);
extern "C"
QSyntaxHighlighter*
C_ZN18QSyntaxHighlighterC2EP13QTextDocument(QTextDocument * arg1) {
  // auto ret = new QSyntaxHighlighter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qsyntaxhighlighter.h', line 62, column 5>
//   // proto:  const QMetaObject * QSyntaxHighlighter::metaObject();
// _ZNK18QSyntaxHighlighter10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QSyntaxHighlighter10metaObjectEv(void *qthis) {
  auto ret =
  ((QSyntaxHighlighter*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qsyntaxhighlighter.h', line 70, column 20>
//   // proto:  QTextDocument * QSyntaxHighlighter::document();
// _ZNK18QSyntaxHighlighter8documentEv document()
extern "C"
void*
C_ZNK18QSyntaxHighlighter8documentEv(void *qthis) {
  auto ret =
  ((QSyntaxHighlighter*)qthis)->document();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QSyntaxHighlighter_SlotProxy here
class QSyntaxHighlighter_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSyntaxHighlighter_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qsyntaxhighlighter.moc"

extern "C" {
  QSyntaxHighlighter_SlotProxy* QSyntaxHighlighter_SlotProxy_new()
  {
    return new QSyntaxHighlighter_SlotProxy();
  }
};

// <= body block end

