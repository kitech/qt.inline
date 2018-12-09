//  header block begin

// since 0x040400
// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextTableCellFormat is pure virtual: false
// QTextTableCellFormat has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextTableCellFormat_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextTableCellFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextTableCellFormat_t qt_meta_stringdata_MyQTextTableCellFormat = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQTextTableCellFormat"
  },
  "MyQTextTableCellFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextTableCellFormat[] = {
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
class Q_DECL_EXPORT MyQTextTableCellFormat : public QTextTableCellFormat {
public:
  virtual ~MyQTextTableCellFormat() {}
// void QTextTableCellFormat()
MyQTextTableCellFormat() : QTextTableCellFormat() {}
};

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:945
// [-2] void QTextTableCellFormat()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZN20QTextTableCellFormatC2Ev() {
  return  new QTextTableCellFormat();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:947
// [1] bool isValid()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
bool C_ZNK20QTextTableCellFormat7isValidEv(void *this_) {
  return (bool)((QTextTableCellFormat*)this_)->isValid();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:949
// [-2] void setTopPadding(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN20QTextTableCellFormat13setTopPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setTopPadding(padding);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:950
// [8] qreal topPadding()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK20QTextTableCellFormat10topPaddingEv(void *this_) {
  return (qreal)((QTextTableCellFormat*)this_)->topPadding();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:952
// [-2] void setBottomPadding(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN20QTextTableCellFormat16setBottomPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setBottomPadding(padding);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:953
// [8] qreal bottomPadding()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK20QTextTableCellFormat13bottomPaddingEv(void *this_) {
  return (qreal)((QTextTableCellFormat*)this_)->bottomPadding();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:955
// [-2] void setLeftPadding(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN20QTextTableCellFormat14setLeftPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setLeftPadding(padding);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:956
// [8] qreal leftPadding()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK20QTextTableCellFormat11leftPaddingEv(void *this_) {
  return (qreal)((QTextTableCellFormat*)this_)->leftPadding();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:958
// [-2] void setRightPadding(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN20QTextTableCellFormat15setRightPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setRightPadding(padding);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:959
// [8] qreal rightPadding()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK20QTextTableCellFormat12rightPaddingEv(void *this_) {
  return (qreal)((QTextTableCellFormat*)this_)->rightPadding();
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qtextformat.h:961
// [-2] void setPadding(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN20QTextTableCellFormat10setPaddingEd(void *this_, qreal padding) {
  ((QTextTableCellFormat*)this_)->setPadding(padding);
}
#endif // QT_VERSION >= 0x040400


extern "C" Q_DECL_EXPORT
void C_ZN20QTextTableCellFormatD2Ev(void *this_) {
  delete (QTextTableCellFormat*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
