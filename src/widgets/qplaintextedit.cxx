// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtWidgets/qplaintextedit.h
// dst-file: /src/widgets/qplaintextedit.cxx
//

// header block begin =>
#include <qplaintextedit.h>

extern "C" {

  // proto:  QString QPlainTextEdit::toPlainText();
QString* _ZNK14QPlainTextEdit11toPlainTextEv(void *that)

{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
  auto recret = cthat->toPlainText();
  return new QString(recret);
}

  // proto:  int QPlainTextEdit::maximumBlockCount();
int _ZNK14QPlainTextEdit17maximumBlockCountEv(void *that)

{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
  return cthat->maximumBlockCount();
}

  // proto:  void QPlainTextEdit::setMaximumBlockCount(int maximum);
void _ZN14QPlainTextEdit20setMaximumBlockCountEi(void *that, int maximum)

{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
   cthat->setMaximumBlockCount(maximum);
}

  // proto:  QString QPlainTextEdit::documentTitle();
QString* _ZNK14QPlainTextEdit13documentTitleEv(void *that)

{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
  auto recret = cthat->documentTitle();
  return new QString(recret);
}

  // proto:  void QPlainTextEdit::setUndoRedoEnabled(bool enable);
void _ZN14QPlainTextEdit18setUndoRedoEnabledEb(void *that, bool enable)

{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
   cthat->setUndoRedoEnabled(enable);
}

  // proto:  void QPlainTextEdit::setDocumentTitle(const QString & title);
void _ZN14QPlainTextEdit16setDocumentTitleERK7QString(void *that, const QString & title)

{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
   cthat->setDocumentTitle(title);
}

  // proto:  bool QPlainTextEdit::isUndoRedoEnabled();
bool _ZNK14QPlainTextEdit17isUndoRedoEnabledEv(void *that)

{
  QPlainTextEdit *cthat = (QPlainTextEdit *)that;
  return cthat->isUndoRedoEnabled();
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

