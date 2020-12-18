//  header block begin

// /usr/include/qt/QtGui/qtextlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextlayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextLayout is pure virtual: false false
// QTextLayout has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextLayout_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextLayout_t qt_meta_stringdata_MyQTextLayout = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTextLayout"
  },
  "MyQTextLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextLayout[] = {
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
class Q_DECL_EXPORT MyQTextLayout : public QTextLayout {
public:
  virtual ~MyQTextLayout() {}
// void QTextLayout()
MyQTextLayout() : QTextLayout() {}
// void QTextLayout(const QString &)
MyQTextLayout(const QString & text) : QTextLayout(text) {}
// void QTextLayout(const QString &, const QFont &, QPaintDevice *)
MyQTextLayout(const QString & text, const QFont & font, QPaintDevice * paintdevice) : QTextLayout(text, font, paintdevice) {}
// void QTextLayout(const QTextBlock &)
MyQTextLayout(const QTextBlock & b) : QTextLayout(b) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:205
// [8] QTextEngine * engine() const
// (12)qm1811354036 (26)_ZNK11QTextLayout6engineEv
//static
/*void qm1811354036()*/ {
  ;
  (void) ((QTextLayout*)this_)->engine();
   auto xptr = (QTextEngine * (QTextLayout::*)() const ) &QTextLayout::engine;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QTextLayoutD2Ev(void *this_)*/ {
  delete (QTextLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextlayout
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
