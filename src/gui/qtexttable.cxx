// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtGui/qtexttable.h
// dst-file: /src/gui/qtexttable.cxx
//

// header block begin =>
#include <qtexttable.h>

extern "C" {

int QTextTableCell_Class_Size()
{
  return sizeof(QTextTableCell);
}

int QTextTable_Class_Size()
{
  return sizeof(QTextTable);
}

// ~QTextTable()
void dedtor_ZN10QTextTableD0Ev(QTextTable* that)
{
  QTextTable* rthis = (QTextTable*)that;
  delete rthis;
}

// QTextTable(class QTextDocument *)
QTextTable* dector_ZN10QTextTableC1EP13QTextDocument(QTextDocument * doc)
{
  // static_assert(sizeof(QTextTable) == 32, "tyszerr");
  QTextTable* rthis = new QTextTable(doc);
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

