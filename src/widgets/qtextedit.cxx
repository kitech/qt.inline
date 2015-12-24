// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtWidgets/qtextedit.h
// dst-file: /src/widgets/qtextedit.cxx
//

// header block begin =>
#include <qtextedit.h>

extern "C" {

  // proto:  void QTextEdit::setDocumentTitle(const QString & title);
void _ZN9QTextEdit16setDocumentTitleERK7QString(void *that, const QString & title)

{
  QTextEdit *cthat = (QTextEdit *)that;
   cthat->setDocumentTitle(title);
}

  // proto:  QString QTextEdit::documentTitle();
QString* _ZNK9QTextEdit13documentTitleEv(void *that)

{
  QTextEdit *cthat = (QTextEdit *)that;
  auto recret = cthat->documentTitle();
  return new QString(recret);
}

  // proto:  bool QTextEdit::isUndoRedoEnabled();
bool _ZNK9QTextEdit17isUndoRedoEnabledEv(void *that)

{
  QTextEdit *cthat = (QTextEdit *)that;
  return cthat->isUndoRedoEnabled();
}

  // proto:  void QTextEdit::setUndoRedoEnabled(bool enable);
void _ZN9QTextEdit18setUndoRedoEnabledEb(void *that, bool enable)

{
  QTextEdit *cthat = (QTextEdit *)that;
   cthat->setUndoRedoEnabled(enable);
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

