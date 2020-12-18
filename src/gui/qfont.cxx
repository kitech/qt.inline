//  header block begin

// /usr/include/qt/QtGui/qfont.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfont.h>
#include <QtGui>
#include "callback_inherit.h"

// QFont is pure virtual: false false
// QFont has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFont_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFont_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFont_t qt_meta_stringdata_MyQFont = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQFont"
  },
  "MyQFont"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFont[] = {
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
class Q_DECL_EXPORT MyQFont : public QFont {
public:
  virtual ~MyQFont() {}
// void QFont()
MyQFont() : QFont() {}
// void QFont(const QString &, int, int, bool)
MyQFont(const QString & family, int pointSize, int weight, bool italic) : QFont(family, pointSize, weight, italic) {}
// void QFont(const QFont &, QPaintDevice *)
MyQFont(const QFont & font, QPaintDevice * pd) : QFont(font, pd) {}
// void QFont(const QFont &, const QPaintDevice *)
MyQFont(const QFont & font, const QPaintDevice * pd) : QFont(font, pd) {}
// void QFont(const QFont &)
MyQFont(const QFont & font) : QFont(font) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfont(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:184
// [-2] void swap(QFont &) 
// (12)qm1728098725 (18)_ZN5QFont4swapERS_
//static
/*void qm1728098725(QFont & other)*/ {
  QFont & other = *(QFont *)this_;
  (void) ((QFont*)this_)->swap(other);
   auto xptr = (void (QFont::*)(QFont&) ) &QFont::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:207
// [1] bool bold() const
// (12)qm1200580973 (17)_ZNK5QFont4boldEv
//static
/*void qm1200580973()*/ {
  ;
  (void) ((QFont*)this_)->bold();
   auto xptr = (bool (QFont::*)() const ) &QFont::bold;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:208
// [-2] void setBold(bool) 
// (12)qm1947504972 (19)_ZN5QFont7setBoldEb
//static
/*void qm1947504972(bool arg0)*/ {
  bool arg0 = *(bool*)this_;
  (void) ((QFont*)this_)->setBold(arg0);
   auto xptr = (void (QFont::*)(bool) ) &QFont::setBold;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:213
// [1] bool italic() const
// (12)qm4214105033 (19)_ZNK5QFont6italicEv
//static
/*void qm4214105033()*/ {
  ;
  (void) ((QFont*)this_)->italic();
   auto xptr = (bool (QFont::*)() const ) &QFont::italic;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:214
// [-2] void setItalic(bool) 
// (10)qm48585686 (21)_ZN5QFont9setItalicEb
//static
/*void qm48585686(bool b)*/ {
  bool b = *(bool*)this_;
  (void) ((QFont*)this_)->setItalic(b);
   auto xptr = (void (QFont::*)(bool) ) &QFont::setItalic;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:266
// [16] QFont & operator=(QFont &&) 
// (12)qm1178787170 (15)_ZN5QFontaSEOS_
//static
/*void qm1178787170(QFont && other)*/ {
  QFont && other =  static_cast<QFont &&>(*(QFont *)this_);
  (void) ((QFont*)this_)->operator=(other);
  // auto xptr = (QFont & (QFont::*)(QFont&&) ) &QFont::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:300
// [4] uint resolve() const
// (12)qm3988069840 (20)_ZNK5QFont7resolveEv
//static
/*void qm3988069840()*/ {
  ;
  (void) ((QFont*)this_)->resolve();
   auto xptr = (unsigned int (QFont::*)() const ) &QFont::resolve;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:301
// [-2] void resolve(uint) 
// (12)qm1793557063 (19)_ZN5QFont7resolveEj
//static
/*void qm1793557063(unsigned int mask)*/ {
  unsigned int mask = *(unsigned int*)this_;
  (void) ((QFont*)this_)->resolve(mask);
   auto xptr = (void (QFont::*)(unsigned int) ) &QFont::resolve;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN5QFontD2Ev(void *this_)*/ {
  delete (QFont*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfont
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
