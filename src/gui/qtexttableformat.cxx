//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#include <qtextformat.h>
#include <QtGui>

// QTextTableFormat is pure virtual: false
// QTextTableFormat has virtual projected: false
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:923
// [-2] void QTextTableFormat(const class QTextFormat &)
extern "C"
void* callback_ZN16QTextTableFormatC1ERK11QTextFormat = 0;
extern "C" void set_callback_ZN16QTextTableFormatC1ERK11QTextFormat(void*cbfn)
{ callback_ZN16QTextTableFormatC1ERK11QTextFormat = cbfn; }

class MyQTextTableFormat : public QTextTableFormat {
public:
  virtual ~MyQTextTableFormat() {}
// void QTextTableFormat()
MyQTextTableFormat() : QTextTableFormat() {}
// void QTextTableFormat(const class QTextFormat &)
MyQTextTableFormat(const QTextFormat & fmt) : QTextTableFormat(fmt) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:887
// [-2] void QTextTableFormat()
extern "C"
void* C_ZN16QTextTableFormatC2Ev() {
  return  new QTextTableFormat();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:889
// [1] bool isValid()
extern "C"
bool C_ZNK16QTextTableFormat7isValidEv(void *this_) {
  return (bool)((QTextTableFormat*)this_)->isValid();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:891
// [4] int columns()
extern "C"
int C_ZNK16QTextTableFormat7columnsEv(void *this_) {
  return (int)((QTextTableFormat*)this_)->columns();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:893
// [-2] void setColumns(int)
extern "C"
void C_ZN16QTextTableFormat10setColumnsEi(void *this_, int columns) {
  ((QTextTableFormat*)this_)->setColumns(columns);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:901
// [-2] void clearColumnWidthConstraints()
extern "C"
void C_ZN16QTextTableFormat27clearColumnWidthConstraintsEv(void *this_) {
  ((QTextTableFormat*)this_)->clearColumnWidthConstraints();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:904
// [8] qreal cellSpacing()
extern "C"
qreal C_ZNK16QTextTableFormat11cellSpacingEv(void *this_) {
  return (qreal)((QTextTableFormat*)this_)->cellSpacing();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:906
// [-2] void setCellSpacing(qreal)
extern "C"
void C_ZN16QTextTableFormat14setCellSpacingEd(void *this_, qreal spacing) {
  ((QTextTableFormat*)this_)->setCellSpacing(spacing);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:909
// [8] qreal cellPadding()
extern "C"
qreal C_ZNK16QTextTableFormat11cellPaddingEv(void *this_) {
  return (qreal)((QTextTableFormat*)this_)->cellPadding();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:911
// [-2] void setCellPadding(qreal)
extern "C"
void C_ZN16QTextTableFormat14setCellPaddingEd(void *this_, qreal padding) {
  ((QTextTableFormat*)this_)->setCellPadding(padding);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:914
// [4] Qt::Alignment alignment()
extern "C"
Qt::Alignment C_ZNK16QTextTableFormat9alignmentEv(void *this_) {
  return (Qt::Alignment)((QTextTableFormat*)this_)->alignment();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:917
// [-2] void setHeaderRowCount(int)
extern "C"
void C_ZN16QTextTableFormat17setHeaderRowCountEi(void *this_, int count) {
  ((QTextTableFormat*)this_)->setHeaderRowCount(count);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:919
// [4] int headerRowCount()
extern "C"
int C_ZNK16QTextTableFormat14headerRowCountEv(void *this_) {
  return (int)((QTextTableFormat*)this_)->headerRowCount();
}
//  main block end
