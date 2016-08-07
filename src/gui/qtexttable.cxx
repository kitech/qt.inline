// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qtexttable.h
// dst-file: /src/gui/qtexttable.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtexttable.h>


#include <qtextobject.h>
#include <qtextformat.h>
#include <qtextcursor.h>
// <= header block end

// main block begin =>
void __keep_qtexttable_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 59, column 5>
//   // proto:  void QTextTableCell::QTextTableCell(const QTextTableCell & o);
if (true) {
  auto f = [](const QTextTableCell & arg1) {
    new QTextTableCell(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 72, column 17>
//   // proto:  bool QTextTableCell::isValid();
if (true) {
  auto f = [](QTextTableCell flythis) {
    ((QTextTableCell*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK14QTextTableCell7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 57, column 5>
//   // proto:  void QTextTableCell::QTextTableCell();
if (true) {
  auto f = []() {
    new QTextTableCell();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 128, column 22>
//   // proto:  QTextTableFormat QTextTable::format();
if (true) {
  auto f = [](QTextTable flythis) {
    ((QTextTable*)0)->format();
    flythis.format();
  };
  if (f == nullptr){}
}
// _ZNK10QTextTable6formatEv format()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextTableCell_Class_Size()
{
  return sizeof(QTextTableCell);
}

extern "C"
int QTextTable_Class_Size()
{
  return sizeof(QTextTable);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 59, column 5>
//   // proto:  void QTextTableCell::QTextTableCell(const QTextTableCell & o);
extern "C"
QTextTableCell*
C_ZN14QTextTableCellC2ERKS_(const QTextTableCell* arg1) {
  auto ret = new QTextTableCell(*((const QTextTableCell*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 63, column 10>
//   // proto:  void QTextTableCell::setFormat(const QTextCharFormat & format);
// _ZN14QTextTableCell9setFormatERK15QTextCharFormat setFormat(const class QTextCharFormat &)
extern "C"
void
C_ZN14QTextTableCell9setFormatERK15QTextCharFormat(void *qthis,
const QTextCharFormat* arg1) {
  ((QTextTableCell*)qthis)->setFormat(*((const QTextCharFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 77, column 9>
//   // proto:  int QTextTableCell::lastPosition();
// _ZNK14QTextTableCell12lastPositionEv lastPosition()
extern "C"
int
C_ZNK14QTextTableCell12lastPositionEv(void *qthis) {
  auto ret =
  ((QTextTableCell*)qthis)->lastPosition();
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QTextTableCell::~QTextTableCell();
extern "C"
void C_ZN14QTextTableCellD2Ev(void *qthis) {
  delete (QTextTableCell*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 69, column 9>
//   // proto:  int QTextTableCell::rowSpan();
// _ZNK14QTextTableCell7rowSpanEv rowSpan()
extern "C"
int
C_ZNK14QTextTableCell7rowSpanEv(void *qthis) {
  auto ret =
  ((QTextTableCell*)qthis)->rowSpan();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 76, column 9>
//   // proto:  int QTextTableCell::firstPosition();
// _ZNK14QTextTableCell13firstPositionEv firstPosition()
extern "C"
int
C_ZNK14QTextTableCell13firstPositionEv(void *qthis) {
  auto ret =
  ((QTextTableCell*)qthis)->firstPosition();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 84, column 26>
//   // proto:  QTextFrame::iterator QTextTableCell::begin();
// _ZNK14QTextTableCell5beginEv begin()
extern "C"
QTextFrame::iterator*
C_ZNK14QTextTableCell5beginEv(void *qthis) {
  auto ret =
  ((QTextTableCell*)qthis)->begin();
  return new QTextFrame::iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 85, column 26>
//   // proto:  QTextFrame::iterator QTextTableCell::end();
// _ZNK14QTextTableCell3endEv end()
extern "C"
QTextFrame::iterator*
C_ZNK14QTextTableCell3endEv(void *qthis) {
  auto ret =
  ((QTextTableCell*)qthis)->end();
  return new QTextFrame::iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 87, column 9>
//   // proto:  int QTextTableCell::tableCellFormatIndex();
// _ZNK14QTextTableCell20tableCellFormatIndexEv tableCellFormatIndex()
extern "C"
int
C_ZNK14QTextTableCell20tableCellFormatIndexEv(void *qthis) {
  auto ret =
  ((QTextTableCell*)qthis)->tableCellFormatIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 70, column 9>
//   // proto:  int QTextTableCell::columnSpan();
// _ZNK14QTextTableCell10columnSpanEv columnSpan()
extern "C"
int
C_ZNK14QTextTableCell10columnSpanEv(void *qthis) {
  auto ret =
  ((QTextTableCell*)qthis)->columnSpan();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 64, column 21>
//   // proto:  QTextCharFormat QTextTableCell::format();
// _ZNK14QTextTableCell6formatEv format()
extern "C"
QTextCharFormat*
C_ZNK14QTextTableCell6formatEv(void *qthis) {
  auto ret =
  ((QTextTableCell*)qthis)->format();
  return new QTextCharFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 66, column 9>
//   // proto:  int QTextTableCell::row();
// _ZNK14QTextTableCell3rowEv row()
extern "C"
int
C_ZNK14QTextTableCell3rowEv(void *qthis) {
  auto ret =
  ((QTextTableCell*)qthis)->row();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 72, column 17>
//   // proto:  bool QTextTableCell::isValid();
// _ZNK14QTextTableCell7isValidEv isValid()
extern "C"
bool
C_ZNK14QTextTableCell7isValidEv(void *qthis) {
  auto ret =
  ((QTextTableCell*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 75, column 17>
//   // proto:  QTextCursor QTextTableCell::lastCursorPosition();
// _ZNK14QTextTableCell18lastCursorPositionEv lastCursorPosition()
extern "C"
QTextCursor*
C_ZNK14QTextTableCell18lastCursorPositionEv(void *qthis) {
  auto ret =
  ((QTextTableCell*)qthis)->lastCursorPosition();
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 67, column 9>
//   // proto:  int QTextTableCell::column();
// _ZNK14QTextTableCell6columnEv column()
extern "C"
int
C_ZNK14QTextTableCell6columnEv(void *qthis) {
  auto ret =
  ((QTextTableCell*)qthis)->column();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 74, column 17>
//   // proto:  QTextCursor QTextTableCell::firstCursorPosition();
// _ZNK14QTextTableCell19firstCursorPositionEv firstCursorPosition()
extern "C"
QTextCursor*
C_ZNK14QTextTableCell19firstCursorPositionEv(void *qthis) {
  auto ret =
  ((QTextTableCell*)qthis)->firstCursorPosition();
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 57, column 5>
//   // proto:  void QTextTableCell::QTextTableCell();
extern "C"
QTextTableCell*
C_ZN14QTextTableCellC2Ev() {
  auto ret = new QTextTableCell();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 120, column 20>
//   // proto:  QTextTableCell QTextTable::cellAt(int row, int col);
// _ZNK10QTextTable6cellAtEii cellAt(int, int)
extern "C"
QTextTableCell*
C_ZNK10QTextTable6cellAtEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QTextTable*)qthis)->cellAt(arg1,
arg2);
  return new QTextTableCell(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 117, column 9>
//   // proto:  int QTextTable::rows();
// _ZNK10QTextTable4rowsEv rows()
extern "C"
int
C_ZNK10QTextTable4rowsEv(void *qthis) {
  auto ret =
  ((QTextTable*)qthis)->rows();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 110, column 10>
//   // proto:  void QTextTable::removeRows(int pos, int num);
// _ZN10QTextTable10removeRowsEii removeRows(int, int)
extern "C"
void
C_ZN10QTextTable10removeRowsEii(void *qthis,
int arg1,
int arg2) {
  ((QTextTable*)qthis)->removeRows(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 118, column 9>
//   // proto:  int QTextTable::columns();
// _ZNK10QTextTable7columnsEv columns()
extern "C"
int
C_ZNK10QTextTable7columnsEv(void *qthis) {
  auto ret =
  ((QTextTable*)qthis)->columns();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 108, column 10>
//   // proto:  void QTextTable::appendRows(int count);
// _ZN10QTextTable10appendRowsEi appendRows(int)
extern "C"
void
C_ZN10QTextTable10appendRowsEi(void *qthis,
int arg1) {
  ((QTextTable*)qthis)->appendRows(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 105, column 10>
//   // proto:  void QTextTable::resize(int rows, int cols);
// _ZN10QTextTable6resizeEii resize(int, int)
extern "C"
void
C_ZN10QTextTable6resizeEii(void *qthis,
int arg1,
int arg2) {
  ((QTextTable*)qthis)->resize(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 122, column 20>
//   // proto:  QTextTableCell QTextTable::cellAt(const QTextCursor & c);
// _ZNK10QTextTable6cellAtERK11QTextCursor cellAt(const class QTextCursor &)
extern "C"
QTextTableCell*
C_ZNK10QTextTable6cellAtERK11QTextCursor(void *qthis,
const QTextCursor* arg1) {
  auto ret =
  ((QTextTable*)qthis)->cellAt(*((const QTextCursor*)arg1));
  return new QTextTableCell(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 127, column 10>
//   // proto:  void QTextTable::setFormat(const QTextTableFormat & format);
// _ZN10QTextTable9setFormatERK16QTextTableFormat setFormat(const class QTextTableFormat &)
extern "C"
void
C_ZN10QTextTable9setFormatERK16QTextTableFormat(void *qthis,
const QTextTableFormat* arg1) {
  ((QTextTable*)qthis)->setFormat(*((const QTextTableFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 107, column 10>
//   // proto:  void QTextTable::insertColumns(int pos, int num);
// _ZN10QTextTable13insertColumnsEii insertColumns(int, int)
extern "C"
void
C_ZN10QTextTable13insertColumnsEii(void *qthis,
int arg1,
int arg2) {
  ((QTextTable*)qthis)->insertColumns(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 115, column 10>
//   // proto:  void QTextTable::splitCell(int row, int col, int numRows, int numCols);
// _ZN10QTextTable9splitCellEiiii splitCell(int, int, int, int)
extern "C"
void
C_ZN10QTextTable9splitCellEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QTextTable*)qthis)->splitCell(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 113, column 10>
//   // proto:  void QTextTable::mergeCells(int row, int col, int numRows, int numCols);
// _ZN10QTextTable10mergeCellsEiiii mergeCells(int, int, int, int)
extern "C"
void
C_ZN10QTextTable10mergeCellsEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QTextTable*)qthis)->mergeCells(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 106, column 10>
//   // proto:  void QTextTable::insertRows(int pos, int num);
// _ZN10QTextTable10insertRowsEii insertRows(int, int)
extern "C"
void
C_ZN10QTextTable10insertRowsEii(void *qthis,
int arg1,
int arg2) {
  ((QTextTable*)qthis)->insertRows(arg1,
arg2);
}
//   // proto:  void QTextTable::~QTextTable();
extern "C"
void C_ZN10QTextTableD2Ev(void *qthis) {
  delete (QTextTable*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 102, column 14>
//   // proto:  void QTextTable::QTextTable(QTextDocument * doc);
extern "C"
QTextTable*
C_ZN10QTextTableC2EP13QTextDocument(QTextDocument * arg1) {
  auto ret = new QTextTable(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 121, column 20>
//   // proto:  QTextTableCell QTextTable::cellAt(int position);
// _ZNK10QTextTable6cellAtEi cellAt(int)
extern "C"
QTextTableCell*
C_ZNK10QTextTable6cellAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextTable*)qthis)->cellAt(arg1);
  return new QTextTableCell(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 124, column 17>
//   // proto:  QTextCursor QTextTable::rowStart(const QTextCursor & c);
// _ZNK10QTextTable8rowStartERK11QTextCursor rowStart(const class QTextCursor &)
extern "C"
QTextCursor*
C_ZNK10QTextTable8rowStartERK11QTextCursor(void *qthis,
const QTextCursor* arg1) {
  auto ret =
  ((QTextTable*)qthis)->rowStart(*((const QTextCursor*)arg1));
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 128, column 22>
//   // proto:  QTextTableFormat QTextTable::format();
// _ZNK10QTextTable6formatEv format()
extern "C"
QTextTableFormat*
C_ZNK10QTextTable6formatEv(void *qthis) {
  auto ret =
  ((QTextTable*)qthis)->format();
  return new QTextTableFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 125, column 17>
//   // proto:  QTextCursor QTextTable::rowEnd(const QTextCursor & c);
// _ZNK10QTextTable6rowEndERK11QTextCursor rowEnd(const class QTextCursor &)
extern "C"
QTextCursor*
C_ZNK10QTextTable6rowEndERK11QTextCursor(void *qthis,
const QTextCursor* arg1) {
  auto ret =
  ((QTextTable*)qthis)->rowEnd(*((const QTextCursor*)arg1));
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 100, column 5>
//   // proto:  const QMetaObject * QTextTable::metaObject();
// _ZNK10QTextTable10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QTextTable10metaObjectEv(void *qthis) {
  auto ret =
  ((QTextTable*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 111, column 10>
//   // proto:  void QTextTable::removeColumns(int pos, int num);
// _ZN10QTextTable13removeColumnsEii removeColumns(int, int)
extern "C"
void
C_ZN10QTextTable13removeColumnsEii(void *qthis,
int arg1,
int arg2) {
  ((QTextTable*)qthis)->removeColumns(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 109, column 10>
//   // proto:  void QTextTable::appendColumns(int count);
// _ZN10QTextTable13appendColumnsEi appendColumns(int)
extern "C"
void
C_ZN10QTextTable13appendColumnsEi(void *qthis,
int arg1) {
  ((QTextTable*)qthis)->appendColumns(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtexttable.h', line 114, column 10>
//   // proto:  void QTextTable::mergeCells(const QTextCursor & cursor);
// _ZN10QTextTable10mergeCellsERK11QTextCursor mergeCells(const class QTextCursor &)
extern "C"
void
C_ZN10QTextTable10mergeCellsERK11QTextCursor(void *qthis,
const QTextCursor* arg1) {
  ((QTextTable*)qthis)->mergeCells(*((const QTextCursor*)arg1));
}
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

