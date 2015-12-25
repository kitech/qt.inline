// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtGui/qtextlist.h
// dst-file: /src/gui/qtextlist.cxx
//

// header block begin =>
#include <qtextlist.h>

extern "C" {

// ~QTextList()
void dedtor_ZN9QTextListD0Ev(QTextList* that)
{
  QTextList* rthis = (QTextList*)that;
  delete rthis;
}

// QTextList(class QTextDocument *)
QTextList* dector_ZN9QTextListC1EP13QTextDocument(QTextDocument * doc)
{
  // static_assert(sizeof(QTextList) == 32, "tyszerr");
  QTextList* rthis = new QTextList(doc);
  return rthis;
}

  // proto:  void QTextList::setFormat(const QTextListFormat & format);
void _ZN9QTextList9setFormatERK15QTextListFormat(void *that, const QTextListFormat & format)
{
  QTextList *cthat = (QTextList *)that;
   cthat->setFormat(format);
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

