//  header block begin
// /usr/include/qt/QtGui/qtexttable.h
#include <qtexttable.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qtexttable.h:57
// void QTextTableCell()
extern "C"
void* C_ZN14QTextTableCellC1Ev() {
  return new QTextTableCell();
}
// inline
// /usr/include/qt/QtGui/qtexttable.h:58
// void ~QTextTableCell()
extern "C"
void C_ZN14QTextTableCellD1Ev(void *this_) {
  delete (QTextTableCell*)(this_);
}
// /usr/include/qt/QtGui/qtexttable.h:63
// void setFormat(const class QTextCharFormat &)
extern "C"
void C_ZN14QTextTableCell9setFormatERK15QTextCharFormat(void *this_, const QTextCharFormat & format) {
  ((QTextTableCell*)this_)->setFormat(format);
}
// /usr/include/qt/QtGui/qtexttable.h:64
// QTextCharFormat format()
extern "C"
void C_ZNK14QTextTableCell6formatEv(void *this_) {
  /*return*/ ((QTextTableCell*)this_)->format();
}
// /usr/include/qt/QtGui/qtexttable.h:66
// int row()
extern "C"
void C_ZNK14QTextTableCell3rowEv(void *this_) {
  /*return*/ ((QTextTableCell*)this_)->row();
}
// /usr/include/qt/QtGui/qtexttable.h:67
// int column()
extern "C"
void C_ZNK14QTextTableCell6columnEv(void *this_) {
  /*return*/ ((QTextTableCell*)this_)->column();
}
// /usr/include/qt/QtGui/qtexttable.h:69
// int rowSpan()
extern "C"
void C_ZNK14QTextTableCell7rowSpanEv(void *this_) {
  /*return*/ ((QTextTableCell*)this_)->rowSpan();
}
// /usr/include/qt/QtGui/qtexttable.h:70
// int columnSpan()
extern "C"
void C_ZNK14QTextTableCell10columnSpanEv(void *this_) {
  /*return*/ ((QTextTableCell*)this_)->columnSpan();
}
// inline
// /usr/include/qt/QtGui/qtexttable.h:72
// bool isValid()
extern "C"
void C_ZNK14QTextTableCell7isValidEv(void *this_) {
  /*return*/ ((QTextTableCell*)this_)->isValid();
}
// /usr/include/qt/QtGui/qtexttable.h:74
// QTextCursor firstCursorPosition()
extern "C"
void C_ZNK14QTextTableCell19firstCursorPositionEv(void *this_) {
  /*return*/ ((QTextTableCell*)this_)->firstCursorPosition();
}
// /usr/include/qt/QtGui/qtexttable.h:75
// QTextCursor lastCursorPosition()
extern "C"
void C_ZNK14QTextTableCell18lastCursorPositionEv(void *this_) {
  /*return*/ ((QTextTableCell*)this_)->lastCursorPosition();
}
// /usr/include/qt/QtGui/qtexttable.h:76
// int firstPosition()
extern "C"
void C_ZNK14QTextTableCell13firstPositionEv(void *this_) {
  /*return*/ ((QTextTableCell*)this_)->firstPosition();
}
// /usr/include/qt/QtGui/qtexttable.h:77
// int lastPosition()
extern "C"
void C_ZNK14QTextTableCell12lastPositionEv(void *this_) {
  /*return*/ ((QTextTableCell*)this_)->lastPosition();
}
// /usr/include/qt/QtGui/qtexttable.h:84
// QTextFrame::iterator begin()
extern "C"
void C_ZNK14QTextTableCell5beginEv(void *this_) {
  /*return*/ ((QTextTableCell*)this_)->begin();
}
// /usr/include/qt/QtGui/qtexttable.h:85
// QTextFrame::iterator end()
extern "C"
void C_ZNK14QTextTableCell3endEv(void *this_) {
  /*return*/ ((QTextTableCell*)this_)->end();
}
// /usr/include/qt/QtGui/qtexttable.h:87
// int tableCellFormatIndex()
extern "C"
void C_ZNK14QTextTableCell20tableCellFormatIndexEv(void *this_) {
  /*return*/ ((QTextTableCell*)this_)->tableCellFormatIndex();
}
//  main block end
