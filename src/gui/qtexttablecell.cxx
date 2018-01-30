//  header block begin
// /usr/include/qt/QtGui/qtexttable.h
#include <qtexttable.h>
#include <QtGui>

// QTextTableCell is pure virtual: false
// QTextTableCell has virtual projected: false
//  header block end

//  main block begin

class MyQTextTableCell : public QTextTableCell {
public:
  virtual ~MyQTextTableCell() {}
// void QTextTableCell()
MyQTextTableCell() : QTextTableCell() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:57
// [-2] void QTextTableCell()
extern "C"
void* C_ZN14QTextTableCellC2Ev() {
  return  new QTextTableCell();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:58
// [-2] void ~QTextTableCell()
extern "C"
void C_ZN14QTextTableCellD2Ev(void *this_) {
  delete (QTextTableCell*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:63
// [-2] void setFormat(const class QTextCharFormat &)
extern "C"
void C_ZN14QTextTableCell9setFormatERK15QTextCharFormat(void *this_, const QTextCharFormat & format) {
  ((QTextTableCell*)this_)->setFormat(format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:64
// [16] QTextCharFormat format()
extern "C"
void* C_ZNK14QTextTableCell6formatEv(void *this_) {
  auto rv = ((QTextTableCell*)this_)->format();
return new QTextCharFormat(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:66
// [4] int row()
extern "C"
int C_ZNK14QTextTableCell3rowEv(void *this_) {
  return (int)((QTextTableCell*)this_)->row();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:67
// [4] int column()
extern "C"
int C_ZNK14QTextTableCell6columnEv(void *this_) {
  return (int)((QTextTableCell*)this_)->column();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:69
// [4] int rowSpan()
extern "C"
int C_ZNK14QTextTableCell7rowSpanEv(void *this_) {
  return (int)((QTextTableCell*)this_)->rowSpan();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:70
// [4] int columnSpan()
extern "C"
int C_ZNK14QTextTableCell10columnSpanEv(void *this_) {
  return (int)((QTextTableCell*)this_)->columnSpan();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:72
// [1] bool isValid()
extern "C"
bool C_ZNK14QTextTableCell7isValidEv(void *this_) {
  return (bool)((QTextTableCell*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:74
// [8] QTextCursor firstCursorPosition()
extern "C"
void* C_ZNK14QTextTableCell19firstCursorPositionEv(void *this_) {
  auto rv = ((QTextTableCell*)this_)->firstCursorPosition();
return new QTextCursor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:75
// [8] QTextCursor lastCursorPosition()
extern "C"
void* C_ZNK14QTextTableCell18lastCursorPositionEv(void *this_) {
  auto rv = ((QTextTableCell*)this_)->lastCursorPosition();
return new QTextCursor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:76
// [4] int firstPosition()
extern "C"
int C_ZNK14QTextTableCell13firstPositionEv(void *this_) {
  return (int)((QTextTableCell*)this_)->firstPosition();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:77
// [4] int lastPosition()
extern "C"
int C_ZNK14QTextTableCell12lastPositionEv(void *this_) {
  return (int)((QTextTableCell*)this_)->lastPosition();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:84
// [32] QTextFrame::iterator begin()
extern "C"
QTextFrame::iterator C_ZNK14QTextTableCell5beginEv(void *this_) {
  return (QTextFrame::iterator)((QTextTableCell*)this_)->begin();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:85
// [32] QTextFrame::iterator end()
extern "C"
QTextFrame::iterator C_ZNK14QTextTableCell3endEv(void *this_) {
  return (QTextFrame::iterator)((QTextTableCell*)this_)->end();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:87
// [4] int tableCellFormatIndex()
extern "C"
int C_ZNK14QTextTableCell20tableCellFormatIndexEv(void *this_) {
  return (int)((QTextTableCell*)this_)->tableCellFormatIndex();
}
//  main block end
