//  header block begin

// /usr/include/qt/QtGui/qregion.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qregion.h>
#include <QtGui>
#include "callback_inherit.h"

// QRegion is pure virtual: false false
// QRegion has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRegion_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRegion_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRegion_t qt_meta_stringdata_MyQRegion = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQRegion"
  },
  "MyQRegion"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRegion[] = {
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
class Q_DECL_EXPORT MyQRegion : public QRegion {
public:
  virtual ~MyQRegion() {}
// void QRegion()
MyQRegion() : QRegion() {}
// void QRegion(int, int, int, int, QRegion::RegionType)
MyQRegion(int x, int y, int w, int h, QRegion::RegionType t) : QRegion(x, y, w, h, t) {}
// void QRegion(const QRect &, QRegion::RegionType)
MyQRegion(const QRect & r, QRegion::RegionType t) : QRegion(r, t) {}
// void QRegion(const QPolygon &, Qt::FillRule)
MyQRegion(const QPolygon & pa, Qt::FillRule fillRule) : QRegion(pa, fillRule) {}
// void QRegion(const QRegion &)
MyQRegion(const QRegion & region) : QRegion(region) {}
// void QRegion(QRegion &&)
MyQRegion(QRegion && other) : QRegion(other) {}
// void QRegion(const QBitmap &)
MyQRegion(const QBitmap & bitmap) : QRegion(bitmap) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qregion(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:67
// [-2] void QRegion() 
// (12)qm1283955447 (15)_ZN7QRegionC2Ev
/*void* qm1283955447()*/{
  ;
  this_ =  new QRegion();
  this_ =  new MyQRegion();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:68
// [-2] void QRegion(int, int, int, int, QRegion::RegionType) 
// (12)qm3346632747 (34)_ZN7QRegionC2EiiiiNS_10RegionTypeE
/*void* qm3346632747(int x, int y, int w, int h, QRegion::RegionType t)*/{
  int x = *(int*)this_; int y = *(int*)this_; int w = *(int*)this_; int h = *(int*)this_; QRegion::RegionType t = *(QRegion::RegionType*)this_;
  this_ =  new QRegion(x, y, w, h, t);
  this_ =  new MyQRegion(x, y, w, h, t);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:69
// [-2] void QRegion(const QRect &, QRegion::RegionType) 
// (11)qm732856443 (38)_ZN7QRegionC2ERK5QRectNS_10RegionTypeE
/*void* qm732856443(const QRect & r, QRegion::RegionType t)*/{
  const QRect & r = *(const QRect *)this_; QRegion::RegionType t = *(QRegion::RegionType*)this_;
  this_ =  new QRegion(r, t);
  this_ =  new MyQRegion(r, t);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:70
// [-2] void QRegion(const QPolygon &, Qt::FillRule) 
// (12)qm2484957508 (39)_ZN7QRegionC2ERK8QPolygonN2Qt8FillRuleE
/*void* qm2484957508(const QPolygon & pa, Qt::FillRule fillRule)*/{
  const QPolygon & pa = *(const QPolygon *)this_; Qt::FillRule fillRule = *(Qt::FillRule*)this_;
  this_ =  new QRegion(pa, fillRule);
  this_ =  new MyQRegion(pa, fillRule);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:71
// [-2] void QRegion(const QRegion &) 
// (12)qm2389037218 (18)_ZN7QRegionC2ERKS_
/*void* qm2389037218(const QRegion & region)*/{
  const QRegion & region = *(const QRegion *)this_;
  this_ =  new QRegion(region);
  this_ =  new MyQRegion(region);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:72
// [-2] void QRegion(QRegion &&) 
// (12)qm1258737589 (17)_ZN7QRegionC2EOS_
/*void* qm1258737589(QRegion && other)*/{
  QRegion && other =  static_cast<QRegion &&>(*(QRegion *)this_);
  this_ =  new QRegion(other);
  this_ =  new MyQRegion(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:74
// [-2] void QRegion(const QBitmap &) 
// (12)qm3509416065 (24)_ZN7QRegionC2ERK7QBitmap
/*void* qm3509416065(const QBitmap & bitmap)*/{
  const QBitmap & bitmap = *(const QBitmap *)this_;
  this_ =  new QRegion(bitmap);
  this_ =  new MyQRegion(bitmap);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:77
// [8] QRegion & operator=(QRegion &&) 
// (12)qm2771400053 (17)_ZN7QRegionaSEOS_
//static
/*void qm2771400053(QRegion && other)*/ {
  QRegion && other =  static_cast<QRegion &&>(*(QRegion *)this_);
  (void) ((QRegion*)this_)->operator=(other);
  // auto xptr = (QRegion & (QRegion::*)(QRegion&&) ) &QRegion::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:79
// [-2] void swap(QRegion &) 
// (12)qm1455779143 (20)_ZN7QRegion4swapERS_
//static
/*void qm1455779143(QRegion & other)*/ {
  QRegion & other = *(QRegion *)this_;
  (void) ((QRegion*)this_)->swap(other);
   auto xptr = (void (QRegion::*)(QRegion&) ) &QRegion::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:87
// [8] QRegion::const_iterator cbegin() const
// (12)qm1763436267 (21)_ZNK7QRegion6cbeginEv
//static
/*void qm1763436267()*/ {
  ;
  (void) ((QRegion*)this_)->cbegin();
   auto xptr = (const QRect * (QRegion::*)() const ) &QRegion::cbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:89
// [8] QRegion::const_iterator cend() const
// (11)qm742646947 (19)_ZNK7QRegion4cendEv
//static
/*void qm742646947()*/ {
  ;
  (void) ((QRegion*)this_)->cend();
   auto xptr = (const QRect * (QRegion::*)() const ) &QRegion::cend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:90
// [8] QRegion::const_reverse_iterator rbegin() const
// (12)qm3641366366 (21)_ZNK7QRegion6rbeginEv
//static
/*void qm3641366366()*/ {
  ;
  (void) ((QRegion*)this_)->rbegin();
   auto xptr = (std::reverse_iterator<const QRect *> (QRegion::*)() const ) &QRegion::rbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:91
// [8] QRegion::const_reverse_iterator crbegin() const
// (12)qm2773980395 (22)_ZNK7QRegion7crbeginEv
//static
/*void qm2773980395()*/ {
  ;
  (void) ((QRegion*)this_)->crbegin();
   auto xptr = (std::reverse_iterator<const QRect *> (QRegion::*)() const ) &QRegion::crbegin;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:92
// [8] QRegion::const_reverse_iterator rend() const
// (12)qm3838391709 (19)_ZNK7QRegion4rendEv
//static
/*void qm3838391709()*/ {
  ;
  (void) ((QRegion*)this_)->rend();
   auto xptr = (std::reverse_iterator<const QRect *> (QRegion::*)() const ) &QRegion::rend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:93
// [8] QRegion::const_reverse_iterator crend() const
// (11)qm593960989 (20)_ZNK7QRegion5crendEv
//static
/*void qm593960989()*/ {
  ;
  (void) ((QRegion*)this_)->crend();
   auto xptr = (std::reverse_iterator<const QRect *> (QRegion::*)() const ) &QRegion::crend;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:99
// [-2] void translate(const QPoint &) 
// (12)qm1110886501 (31)_ZN7QRegion9translateERK6QPoint
//static
/*void qm1110886501(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRegion*)this_)->translate(p);
   auto xptr = (void (QRegion::*)(QPoint const&) ) &QRegion::translate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:101
// [8] QRegion translated(const QPoint &) const
// (11)qm669997334 (34)_ZNK7QRegion10translatedERK6QPoint
//static
/*void qm669997334(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) ((QRegion*)this_)->translated(p);
   auto xptr = (QRegion (QRegion::*)(QPoint const&) const ) &QRegion::translated;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:156
// [1] bool operator!=(const QRegion &) const
// (12)qm1807283516 (19)_ZNK7QRegionneERKS_
//static
/*void qm1807283516(const QRegion & r)*/ {
  const QRegion & r = *(const QRegion *)this_;
  (void) ((QRegion*)this_)->operator!=(r);
  // auto xptr = (bool (QRegion::*)(QRegion const&) const ) &QRegion::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QRegionD2Ev(void *this_)*/ {
  delete (QRegion*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qregion
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
