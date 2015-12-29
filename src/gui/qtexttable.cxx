// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
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

// QTextTableCell(const class QTextTableCell &)
QTextTableCell* dector_ZN14QTextTableCellC1ERKS_(const QTextTableCell & o)
{
  // static_assert(sizeof(QTextTableCell) == 32, "tyszerr");
  QTextTableCell* rthis = new QTextTableCell(o);
  return rthis;
}

// ~QTextTableCell()
void dedtor_ZN14QTextTableCellD0Ev(QTextTableCell* that)
{
  QTextTableCell* rthis = (QTextTableCell*)that;
  delete rthis;
}

// QTextTableCell()
QTextTableCell* dector_ZN14QTextTableCellC1Ev()
{
  // static_assert(sizeof(QTextTableCell) == 32, "tyszerr");
  QTextTableCell* rthis = new QTextTableCell();
  return rthis;
}

  // proto:  bool QTextTableCell::isValid();
bool demth_ZNK14QTextTableCell7isValidEv(void *that)
{
  QTextTableCell *cthat = (QTextTableCell *)that;
  return cthat->isValid();
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
// QTextTable_SlotProxy here
class QTextTable_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTextTable_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qtexttable.moc"

extern "C" {
  QTextTable_SlotProxy* QTextTable_SlotProxy_new()
  {
    return new QTextTable_SlotProxy();
  }
};

// <= body block end

