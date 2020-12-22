//  header block begin

// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextFormat is pure virtual: false false
// QTextFormat has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextFormat_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextFormat_t qt_meta_stringdata_MyQTextFormat = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTextFormat"
  },
  "MyQTextFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextFormat[] = {
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
class Q_DECL_EXPORT MyQTextFormat : public QTextFormat {
public:
  virtual ~MyQTextFormat() {}
// void QTextFormat()
MyQTextFormat() : QTextFormat() {}
// void QTextFormat(int)
MyQTextFormat(int type_) : QTextFormat(type_) {}
// void QTextFormat(const QTextFormat &)
MyQTextFormat(const QTextFormat & rhs) : QTextFormat(rhs) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:314
// [-2] void QTextFormat() 
// (12)qm4038954802 (20)_ZN11QTextFormatC2Ev
/*void* qm4038954802()*/{
  ;
  this_ =  new QTextFormat();
  this_ =  new MyQTextFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:316
// [-2] void QTextFormat(int) 
// (12)qm2109047495 (20)_ZN11QTextFormatC2Ei
/*void* qm2109047495(int type_)*/{
  int type_ = *(int*)this_;
  this_ =  new QTextFormat(type_);
  this_ =  new MyQTextFormat(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:318
// [-2] void QTextFormat(const QTextFormat &) 
// (12)qm3904420627 (23)_ZN11QTextFormatC2ERKS_
/*void* qm3904420627(const QTextFormat & rhs)*/{
  const QTextFormat & rhs = *(const QTextFormat *)this_;
  this_ =  new QTextFormat(rhs);
  this_ =  new MyQTextFormat(rhs);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:322
// [-2] void swap(QTextFormat &) 
// (12)qm1903897779 (25)_ZN11QTextFormat4swapERS_
//static
/*void qm1903897779(QTextFormat & other)*/ {
  QTextFormat & other = *(QTextFormat *)this_;
  (void) ((QTextFormat*)this_)->swap(other);
   auto xptr = (void (QTextFormat::*)(QTextFormat&) ) &QTextFormat::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:327
// [1] bool isValid() const
// (12)qm1866757144 (27)_ZNK11QTextFormat7isValidEv
//static
/*void qm1866757144()*/ {
  ;
  (void) ((QTextFormat*)this_)->isValid();
   auto xptr = (bool (QTextFormat::*)() const ) &QTextFormat::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:328
// [1] bool isEmpty() const
// (12)qm1563293650 (27)_ZNK11QTextFormat7isEmptyEv
//static
/*void qm1563293650()*/ {
  ;
  (void) ((QTextFormat*)this_)->isEmpty();
   auto xptr = (bool (QTextFormat::*)() const ) &QTextFormat::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:355
// [-2] void setObjectType(int) 
// (12)qm1305600823 (33)_ZN11QTextFormat13setObjectTypeEi
//static
/*void qm1305600823(int type_)*/ {
  int type_ = *(int*)this_;
  (void) ((QTextFormat*)this_)->setObjectType(type_);
   auto xptr = (void (QTextFormat::*)(int) ) &QTextFormat::setObjectType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:356
// [4] int objectType() const
// (12)qm2964927935 (31)_ZNK11QTextFormat10objectTypeEv
//static
/*void qm2964927935()*/ {
  ;
  (void) ((QTextFormat*)this_)->objectType();
   auto xptr = (int (QTextFormat::*)() const ) &QTextFormat::objectType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:359
// [1] bool isCharFormat() const
// (11)qm731226773 (33)_ZNK11QTextFormat12isCharFormatEv
//static
/*void qm731226773()*/ {
  ;
  (void) ((QTextFormat*)this_)->isCharFormat();
   auto xptr = (bool (QTextFormat::*)() const ) &QTextFormat::isCharFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:360
// [1] bool isBlockFormat() const
// (11)qm322144932 (34)_ZNK11QTextFormat13isBlockFormatEv
//static
/*void qm322144932()*/ {
  ;
  (void) ((QTextFormat*)this_)->isBlockFormat();
   auto xptr = (bool (QTextFormat::*)() const ) &QTextFormat::isBlockFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:361
// [1] bool isListFormat() const
// (12)qm3368995451 (33)_ZNK11QTextFormat12isListFormatEv
//static
/*void qm3368995451()*/ {
  ;
  (void) ((QTextFormat*)this_)->isListFormat();
   auto xptr = (bool (QTextFormat::*)() const ) &QTextFormat::isListFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:362
// [1] bool isFrameFormat() const
// (12)qm3000901367 (34)_ZNK11QTextFormat13isFrameFormatEv
//static
/*void qm3000901367()*/ {
  ;
  (void) ((QTextFormat*)this_)->isFrameFormat();
   auto xptr = (bool (QTextFormat::*)() const ) &QTextFormat::isFrameFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:363
// [1] bool isImageFormat() const
// (12)qm4227869062 (34)_ZNK11QTextFormat13isImageFormatEv
//static
/*void qm4227869062()*/ {
  ;
  (void) ((QTextFormat*)this_)->isImageFormat();
   auto xptr = (bool (QTextFormat::*)() const ) &QTextFormat::isImageFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:364
// [1] bool isTableFormat() const
// (12)qm1797472085 (34)_ZNK11QTextFormat13isTableFormatEv
//static
/*void qm1797472085()*/ {
  ;
  (void) ((QTextFormat*)this_)->isTableFormat();
   auto xptr = (bool (QTextFormat::*)() const ) &QTextFormat::isTableFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:365
// [1] bool isTableCellFormat() const
// (12)qm4038795547 (38)_ZNK11QTextFormat17isTableCellFormatEv
//static
/*void qm4038795547()*/ {
  ;
  (void) ((QTextFormat*)this_)->isTableCellFormat();
   auto xptr = (bool (QTextFormat::*)() const ) &QTextFormat::isTableCellFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:376
// [1] bool operator!=(const QTextFormat &) const
// (12)qm3753946630 (24)_ZNK11QTextFormatneERKS_
//static
/*void qm3753946630(const QTextFormat & rhs)*/ {
  const QTextFormat & rhs = *(const QTextFormat *)this_;
  (void) ((QTextFormat*)this_)->operator!=(rhs);
  // auto xptr = (bool (QTextFormat::*)(QTextFormat const&) const ) &QTextFormat::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:379
// [-2] void setLayoutDirection(Qt::LayoutDirection) 
// (12)qm2286328667 (59)_ZN11QTextFormat18setLayoutDirectionEN2Qt15LayoutDirectionE
//static
/*void qm2286328667(Qt::LayoutDirection direction)*/ {
  Qt::LayoutDirection direction = *(Qt::LayoutDirection*)this_;
  (void) ((QTextFormat*)this_)->setLayoutDirection(direction);
   auto xptr = (void (QTextFormat::*)(Qt::LayoutDirection) ) &QTextFormat::setLayoutDirection;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:381
// [4] Qt::LayoutDirection layoutDirection() const
// (12)qm1998940245 (36)_ZNK11QTextFormat15layoutDirectionEv
//static
/*void qm1998940245()*/ {
  ;
  (void) ((QTextFormat*)this_)->layoutDirection();
   auto xptr = (Qt::LayoutDirection (QTextFormat::*)() const ) &QTextFormat::layoutDirection;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:384
// [-2] void setBackground(const QBrush &) 
// (12)qm2211279915 (41)_ZN11QTextFormat13setBackgroundERK6QBrush
//static
/*void qm2211279915(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QTextFormat*)this_)->setBackground(brush);
   auto xptr = (void (QTextFormat::*)(QBrush const&) ) &QTextFormat::setBackground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:386
// [8] QBrush background() const
// (12)qm2129709372 (31)_ZNK11QTextFormat10backgroundEv
//static
/*void qm2129709372()*/ {
  ;
  (void) ((QTextFormat*)this_)->background();
   auto xptr = (QBrush (QTextFormat::*)() const ) &QTextFormat::background;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:388
// [-2] void clearBackground() 
// (12)qm1859192946 (35)_ZN11QTextFormat15clearBackgroundEv
//static
/*void qm1859192946()*/ {
  ;
  (void) ((QTextFormat*)this_)->clearBackground();
   auto xptr = (void (QTextFormat::*)() ) &QTextFormat::clearBackground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:391
// [-2] void setForeground(const QBrush &) 
// (12)qm3649608587 (41)_ZN11QTextFormat13setForegroundERK6QBrush
//static
/*void qm3649608587(const QBrush & brush)*/ {
  const QBrush & brush = *(const QBrush *)this_;
  (void) ((QTextFormat*)this_)->setForeground(brush);
   auto xptr = (void (QTextFormat::*)(QBrush const&) ) &QTextFormat::setForeground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:393
// [8] QBrush foreground() const
// (11)qm791603201 (31)_ZNK11QTextFormat10foregroundEv
//static
/*void qm791603201()*/ {
  ;
  (void) ((QTextFormat*)this_)->foreground();
   auto xptr = (QBrush (QTextFormat::*)() const ) &QTextFormat::foreground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:395
// [-2] void clearForeground() 
// (12)qm1057958223 (35)_ZN11QTextFormat15clearForegroundEv
//static
/*void qm1057958223()*/ {
  ;
  (void) ((QTextFormat*)this_)->clearForeground();
   auto xptr = (void (QTextFormat::*)() ) &QTextFormat::clearForeground;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QTextFormatD2Ev(void *this_)*/ {
  delete (QTextFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
