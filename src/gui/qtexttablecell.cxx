//  header block begin
// /usr/include/qt/QtGui/qtexttable.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtexttable.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextTableCell is pure virtual: false
// QTextTableCell has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTextTableCell_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextTableCell_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextTableCell_t qt_meta_stringdata_MyQTextTableCell = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQTextTableCell"
  },
  "MyQTextTableCell"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextTableCell[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQTextTableCell : public QTextTableCell {
public:
  virtual ~MyQTextTableCell() {}
// void QTextTableCell()
MyQTextTableCell() : QTextTableCell() {}
// void QTextTableCell(const QTextTableCell &)
MyQTextTableCell(const QTextTableCell & o) : QTextTableCell(o) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:57
// [-2] void QTextTableCell()
extern "C" Q_DECL_EXPORT
void* C_ZN14QTextTableCellC2Ev() {
  return  new QTextTableCell();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:58
// [-2] void ~QTextTableCell()
extern "C" Q_DECL_EXPORT
void C_ZN14QTextTableCellD2Ev(void *this_) {
  delete (QTextTableCell*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:59
// [-2] void QTextTableCell(const QTextTableCell &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QTextTableCellC2ERKS_(QTextTableCell* o) {
  return  new QTextTableCell(*o);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:60
// [16] QTextTableCell & operator=(const QTextTableCell &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QTextTableCellaSERKS_(void *this_, QTextTableCell* o) {
  auto& rv = ((QTextTableCell*)this_)->operator=(*o);
return &rv;
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qtexttable.h:63
// [-2] void setFormat(const QTextCharFormat &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN14QTextTableCell9setFormatERK15QTextCharFormat(void *this_, QTextCharFormat* format) {
  ((QTextTableCell*)this_)->setFormat(*format);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:64
// [16] QTextCharFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QTextTableCell6formatEv(void *this_) {
  auto rv = ((QTextTableCell*)this_)->format();
return new QTextCharFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:66
// [4] int row()
extern "C" Q_DECL_EXPORT
int C_ZNK14QTextTableCell3rowEv(void *this_) {
  return (int)((QTextTableCell*)this_)->row();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:67
// [4] int column()
extern "C" Q_DECL_EXPORT
int C_ZNK14QTextTableCell6columnEv(void *this_) {
  return (int)((QTextTableCell*)this_)->column();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:69
// [4] int rowSpan()
extern "C" Q_DECL_EXPORT
int C_ZNK14QTextTableCell7rowSpanEv(void *this_) {
  return (int)((QTextTableCell*)this_)->rowSpan();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:70
// [4] int columnSpan()
extern "C" Q_DECL_EXPORT
int C_ZNK14QTextTableCell10columnSpanEv(void *this_) {
  return (int)((QTextTableCell*)this_)->columnSpan();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:72
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QTextTableCell7isValidEv(void *this_) {
  return (bool)((QTextTableCell*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:74
// [8] QTextCursor firstCursorPosition()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QTextTableCell19firstCursorPositionEv(void *this_) {
  auto rv = ((QTextTableCell*)this_)->firstCursorPosition();
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:75
// [8] QTextCursor lastCursorPosition()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QTextTableCell18lastCursorPositionEv(void *this_) {
  auto rv = ((QTextTableCell*)this_)->lastCursorPosition();
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:76
// [4] int firstPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK14QTextTableCell13firstPositionEv(void *this_) {
  return (int)((QTextTableCell*)this_)->firstPosition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:77
// [4] int lastPosition()
extern "C" Q_DECL_EXPORT
int C_ZNK14QTextTableCell12lastPositionEv(void *this_) {
  return (int)((QTextTableCell*)this_)->lastPosition();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:79
// [1] bool operator==(const QTextTableCell &)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QTextTableCelleqERKS_(void *this_, QTextTableCell* other) {
  return (bool)((QTextTableCell*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:81
// [1] bool operator!=(const QTextTableCell &)
extern "C" Q_DECL_EXPORT
bool C_ZNK14QTextTableCellneERKS_(void *this_, QTextTableCell* other) {
  return (bool)((QTextTableCell*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:84
// [32] QTextFrame::iterator begin()
extern "C" Q_DECL_EXPORT
QTextFrame::iterator C_ZNK14QTextTableCell5beginEv(void *this_) {
  return (QTextFrame::iterator)((QTextTableCell*)this_)->begin();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:85
// [32] QTextFrame::iterator end()
extern "C" Q_DECL_EXPORT
QTextFrame::iterator C_ZNK14QTextTableCell3endEv(void *this_) {
  return (QTextFrame::iterator)((QTextTableCell*)this_)->end();
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtexttable.h:87
// [4] int tableCellFormatIndex()
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
int C_ZNK14QTextTableCell20tableCellFormatIndexEv(void *this_) {
  return (int)((QTextTableCell*)this_)->tableCellFormatIndex();
}
#endif // QT_VERSION >= 0x040500

//  main block end
