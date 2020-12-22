//  header block begin

// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextImageFormat is pure virtual: false false
// QTextImageFormat has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextImageFormat_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextImageFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextImageFormat_t qt_meta_stringdata_MyQTextImageFormat = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQTextImageFormat"
  },
  "MyQTextImageFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextImageFormat[] = {
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
class Q_DECL_EXPORT MyQTextImageFormat : public QTextImageFormat {
public:
  virtual ~MyQTextImageFormat() {}
// void QTextImageFormat()
MyQTextImageFormat() : QTextImageFormat() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextimageformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:791
// [-2] void QTextImageFormat() 
// (12)qm2873797915 (25)_ZN16QTextImageFormatC2Ev
/*void* qm2873797915()*/{
  ;
  this_ =  new QTextImageFormat();
  this_ =  new MyQTextImageFormat();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:793
// [1] bool isValid() const
// (12)qm2473075575 (32)_ZNK16QTextImageFormat7isValidEv
//static
/*void qm2473075575()*/ {
  ;
  (void) ((QTextImageFormat*)this_)->isValid();
   auto xptr = (bool (QTextImageFormat::*)() const ) &QTextImageFormat::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:795
// [-2] void setName(const QString &) 
// (12)qm4233313110 (40)_ZN16QTextImageFormat7setNameERK7QString
//static
/*void qm4233313110(const QString & name)*/ {
  const QString & name = *(const QString *)this_;
  (void) ((QTextImageFormat*)this_)->setName(name);
   auto xptr = (void (QTextImageFormat::*)(QString const&) ) &QTextImageFormat::setName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:796
// [8] QString name() const
// (11)qm721801921 (29)_ZNK16QTextImageFormat4nameEv
//static
/*void qm721801921()*/ {
  ;
  (void) ((QTextImageFormat*)this_)->name();
   auto xptr = (QString (QTextImageFormat::*)() const ) &QTextImageFormat::name;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:799
// [-2] void setWidth(qreal) 
// (12)qm2042764309 (32)_ZN16QTextImageFormat8setWidthEd
//static
/*void qm2042764309(double width)*/ {
  double width = *(double*)this_;
  (void) ((QTextImageFormat*)this_)->setWidth(width);
   auto xptr = (void (QTextImageFormat::*)(double) ) &QTextImageFormat::setWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:800
// [8] qreal width() const
// (12)qm1960342934 (30)_ZNK16QTextImageFormat5widthEv
//static
/*void qm1960342934()*/ {
  ;
  (void) ((QTextImageFormat*)this_)->width();
   auto xptr = (double (QTextImageFormat::*)() const ) &QTextImageFormat::width;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:803
// [-2] void setHeight(qreal) 
// (12)qm1041173871 (33)_ZN16QTextImageFormat9setHeightEd
//static
/*void qm1041173871(double height)*/ {
  double height = *(double*)this_;
  (void) ((QTextImageFormat*)this_)->setHeight(height);
   auto xptr = (void (QTextImageFormat::*)(double) ) &QTextImageFormat::setHeight;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:804
// [8] qreal height() const
// (12)qm1675015341 (31)_ZNK16QTextImageFormat6heightEv
//static
/*void qm1675015341()*/ {
  ;
  (void) ((QTextImageFormat*)this_)->height();
   auto xptr = (double (QTextImageFormat::*)() const ) &QTextImageFormat::height;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:807
// [-2] void setQuality(int) 
// (12)qm3446712617 (35)_ZN16QTextImageFormat10setQualityEi
//static
/*void qm3446712617(int quality)*/ {
  int quality = *(int*)this_;
  (void) ((QTextImageFormat*)this_)->setQuality(quality);
   auto xptr = (void (QTextImageFormat::*)(int) ) &QTextImageFormat::setQuality;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:808
// [4] int quality() const
// (12)qm3978850954 (32)_ZNK16QTextImageFormat7qualityEv
//static
/*void qm3978850954()*/ {
  ;
  (void) ((QTextImageFormat*)this_)->quality();
   auto xptr = (int (QTextImageFormat::*)() const ) &QTextImageFormat::quality;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QTextImageFormatD2Ev(void *this_)*/ {
  delete (QTextImageFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextimageformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
