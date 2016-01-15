#include <qtextformat.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qtexttable.h
// dst-file: /src/gui/qtexttable.cxx
//

// header block begin =>
#include <qatomic.h>
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

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qtexttable_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 53, column 5>
//   // proto:  void QTextTableCell::QTextTableCell(const QTextTableCell & o);
if (false) {
  auto f = [](const QTextTableCell & arg1) {
    new QTextTableCell(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 66, column 17>
//   // proto:  bool QTextTableCell::isValid();
if (false) {
  auto f = []() {
    ((QTextTableCell*)0)->isValid();
  };
}
// _ZNK14QTextTableCell7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 51, column 5>
//   // proto:  void QTextTableCell::QTextTableCell();
if (false) {
  auto f = []() {
    new QTextTableCell();
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 122, column 22>
//   // proto:  QTextTableFormat QTextTable::format();
if (false) {
  auto f = []() {
    ((QTextTable*)0)->format();
  };
}
// _ZNK10QTextTable6formatEv format()
} // <= main block end

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

