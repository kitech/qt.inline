// /usr/include/qt/QtGui/qtexttable.h
#include <qtexttable.h>
#include <QtGui>

// virtual
// /usr/include/qt/QtGui/qtexttable.h:100
// const QMetaObject * metaObject()
extern "C"
void C_ZNK10QTextTable10metaObjectEv(void *this_) {
  /*return*/ ((QTextTable*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qtexttable.h:102
// void QTextTable(class QTextDocument *)
extern "C"
void* C_ZN10QTextTableC1EP13QTextDocument(QTextDocument * doc) {
  return new QTextTable(doc);
}
// virtual
// /usr/include/qt/QtGui/qtexttable.h:103
// void ~QTextTable()
extern "C"
void C_ZN10QTextTableD1Ev(void *this_) {
  delete (QTextTable*)(this_);
}
// /usr/include/qt/QtGui/qtexttable.h:105
// void resize(int, int)
extern "C"
void C_ZN10QTextTable6resizeEii(void *this_, int rows, int cols) {
  ((QTextTable*)this_)->resize(rows, cols);
}
// /usr/include/qt/QtGui/qtexttable.h:106
// void insertRows(int, int)
extern "C"
void C_ZN10QTextTable10insertRowsEii(void *this_, int pos, int num) {
  ((QTextTable*)this_)->insertRows(pos, num);
}
// /usr/include/qt/QtGui/qtexttable.h:107
// void insertColumns(int, int)
extern "C"
void C_ZN10QTextTable13insertColumnsEii(void *this_, int pos, int num) {
  ((QTextTable*)this_)->insertColumns(pos, num);
}
// /usr/include/qt/QtGui/qtexttable.h:108
// void appendRows(int)
extern "C"
void C_ZN10QTextTable10appendRowsEi(void *this_, int count) {
  ((QTextTable*)this_)->appendRows(count);
}
// /usr/include/qt/QtGui/qtexttable.h:109
// void appendColumns(int)
extern "C"
void C_ZN10QTextTable13appendColumnsEi(void *this_, int count) {
  ((QTextTable*)this_)->appendColumns(count);
}
// /usr/include/qt/QtGui/qtexttable.h:110
// void removeRows(int, int)
extern "C"
void C_ZN10QTextTable10removeRowsEii(void *this_, int pos, int num) {
  ((QTextTable*)this_)->removeRows(pos, num);
}
// /usr/include/qt/QtGui/qtexttable.h:111
// void removeColumns(int, int)
extern "C"
void C_ZN10QTextTable13removeColumnsEii(void *this_, int pos, int num) {
  ((QTextTable*)this_)->removeColumns(pos, num);
}
// /usr/include/qt/QtGui/qtexttable.h:113
// void mergeCells(int, int, int, int)
extern "C"
void C_ZN10QTextTable10mergeCellsEiiii(void *this_, int row, int col, int numRows, int numCols) {
  ((QTextTable*)this_)->mergeCells(row, col, numRows, numCols);
}
// /usr/include/qt/QtGui/qtexttable.h:114
// void mergeCells(const class QTextCursor &)
extern "C"
void C_ZN10QTextTable10mergeCellsERK11QTextCursor(void *this_, const QTextCursor & cursor) {
  ((QTextTable*)this_)->mergeCells(cursor);
}
// /usr/include/qt/QtGui/qtexttable.h:115
// void splitCell(int, int, int, int)
extern "C"
void C_ZN10QTextTable9splitCellEiiii(void *this_, int row, int col, int numRows, int numCols) {
  ((QTextTable*)this_)->splitCell(row, col, numRows, numCols);
}
// /usr/include/qt/QtGui/qtexttable.h:117
// int rows()
extern "C"
void C_ZNK10QTextTable4rowsEv(void *this_) {
  /*return*/ ((QTextTable*)this_)->rows();
}
// /usr/include/qt/QtGui/qtexttable.h:118
// int columns()
extern "C"
void C_ZNK10QTextTable7columnsEv(void *this_) {
  /*return*/ ((QTextTable*)this_)->columns();
}
// /usr/include/qt/QtGui/qtexttable.h:120
// QTextTableCell cellAt(int, int)
extern "C"
void C_ZNK10QTextTable6cellAtEii(void *this_, int row, int col) {
  /*return*/ ((QTextTable*)this_)->cellAt(row, col);
}
// /usr/include/qt/QtGui/qtexttable.h:121
// QTextTableCell cellAt(int)
extern "C"
void C_ZNK10QTextTable6cellAtEi(void *this_, int position) {
  /*return*/ ((QTextTable*)this_)->cellAt(position);
}
// /usr/include/qt/QtGui/qtexttable.h:122
// QTextTableCell cellAt(const class QTextCursor &)
extern "C"
void C_ZNK10QTextTable6cellAtERK11QTextCursor(void *this_, const QTextCursor & c) {
  /*return*/ ((QTextTable*)this_)->cellAt(c);
}
// /usr/include/qt/QtGui/qtexttable.h:124
// QTextCursor rowStart(const class QTextCursor &)
extern "C"
void C_ZNK10QTextTable8rowStartERK11QTextCursor(void *this_, const QTextCursor & c) {
  /*return*/ ((QTextTable*)this_)->rowStart(c);
}
// /usr/include/qt/QtGui/qtexttable.h:125
// QTextCursor rowEnd(const class QTextCursor &)
extern "C"
void C_ZNK10QTextTable6rowEndERK11QTextCursor(void *this_, const QTextCursor & c) {
  /*return*/ ((QTextTable*)this_)->rowEnd(c);
}
// /usr/include/qt/QtGui/qtexttable.h:127
// void setFormat(const class QTextTableFormat &)
extern "C"
void C_ZN10QTextTable9setFormatERK16QTextTableFormat(void *this_, const QTextTableFormat & format) {
  ((QTextTable*)this_)->setFormat(format);
}
// inline
// /usr/include/qt/QtGui/qtexttable.h:128
// QTextTableFormat format()
extern "C"
void C_ZNK10QTextTable6formatEv(void *this_) {
  /*return*/ ((QTextTable*)this_)->format();
}