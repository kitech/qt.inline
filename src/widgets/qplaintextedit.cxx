// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qplaintextedit.h
// dst-file: /src/widgets/qplaintextedit.cxx
//

// header block begin =>
#include <qplaintextedit.h>

extern "C" {

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

