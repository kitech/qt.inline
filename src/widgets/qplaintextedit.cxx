// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
// src-file: /QtWidgets/qplaintextedit.h
// dst-file: /src/widgets/qplaintextedit.cxx
//

// header block begin =>
#include <qplaintextedit.h>

extern "C" {

int QPlainTextDocumentLayout_Class_Size()
{
  return sizeof(QPlainTextDocumentLayout);
}

// ~QPlainTextDocumentLayout()
void dedtor_ZN24QPlainTextDocumentLayoutD0Ev(QPlainTextDocumentLayout* that)
{
  QPlainTextDocumentLayout* rthis = (QPlainTextDocumentLayout*)that;
  delete rthis;
}

// QPlainTextDocumentLayout(class QTextDocument *)
QPlainTextDocumentLayout* dector_ZN24QPlainTextDocumentLayoutC1EP13QTextDocument(QTextDocument * document)
{
  // static_assert(sizeof(QPlainTextDocumentLayout) == 32, "tyszerr");
  QPlainTextDocumentLayout* rthis = new QPlainTextDocumentLayout(document);
  return rthis;
}

int QPlainTextEdit_Class_Size()
{
  return sizeof(QPlainTextEdit);
}

// QPlainTextEdit(const class QString &, class QWidget *)
QPlainTextEdit* dector_ZN14QPlainTextEditC1ERK7QStringP7QWidget(const QString & text, QWidget * parent)
{
  // static_assert(sizeof(QPlainTextEdit) == 32, "tyszerr");
  QPlainTextEdit* rthis = new QPlainTextEdit(text, parent);
  return rthis;
}

// ~QPlainTextEdit()
void dedtor_ZN14QPlainTextEditD0Ev(QPlainTextEdit* that)
{
  QPlainTextEdit* rthis = (QPlainTextEdit*)that;
  delete rthis;
}

// QPlainTextEdit(class QWidget *)
QPlainTextEdit* dector_ZN14QPlainTextEditC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QPlainTextEdit) == 32, "tyszerr");
  QPlainTextEdit* rthis = new QPlainTextEdit(parent);
  return rthis;
}

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

