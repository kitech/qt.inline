// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
// src-file: /QtWidgets/qtextedit.h
// dst-file: /src/widgets/qtextedit.cxx
//

// header block begin =>
#include <qtextedit.h>

extern "C" {

int QTextEdit_Class_Size()
{
  return sizeof(QTextEdit);
}

// ~QTextEdit()
void dedtor_ZN9QTextEditD0Ev(QTextEdit* that)
{
  QTextEdit* rthis = (QTextEdit*)that;
  delete rthis;
}

// QTextEdit(const class QString &, class QWidget *)
QTextEdit* dector_ZN9QTextEditC1ERK7QStringP7QWidget(const QString & text, QWidget * parent)
{
  // static_assert(sizeof(QTextEdit) == 32, "tyszerr");
  QTextEdit* rthis = new QTextEdit(text, parent);
  return rthis;
}

// QTextEdit(class QWidget *)
QTextEdit* dector_ZN9QTextEditC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QTextEdit) == 32, "tyszerr");
  QTextEdit* rthis = new QTextEdit(parent);
  return rthis;
}

  // proto:  void QTextEdit::setDocumentTitle(const QString & title);
void demth_ZN9QTextEdit16setDocumentTitleERK7QString(void *that, const QString & title)
{
  QTextEdit *cthat = (QTextEdit *)that;
   cthat->setDocumentTitle(title);
}

  // proto:  QString QTextEdit::documentTitle();
QString* demth_ZNK9QTextEdit13documentTitleEv(void *that)
{
  QTextEdit *cthat = (QTextEdit *)that;
  auto recret = cthat->documentTitle();
  return new QString(recret);
}

  // proto:  bool QTextEdit::isUndoRedoEnabled();
bool demth_ZNK9QTextEdit17isUndoRedoEnabledEv(void *that)
{
  QTextEdit *cthat = (QTextEdit *)that;
  return cthat->isUndoRedoEnabled();
}

  // proto:  void QTextEdit::setUndoRedoEnabled(bool enable);
void demth_ZN9QTextEdit18setUndoRedoEnabledEb(void *that, bool enable)
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

