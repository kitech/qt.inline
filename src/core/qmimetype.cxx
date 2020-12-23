//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(mimetype)
// /usr/include/qt/QtCore/qmimetype.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmimetype.h>
#include <QtCore>
#include "callback_inherit.h"

// QMimeType is pure virtual: false false
// QMimeType has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmimetype(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:78
// [-2] void QMimeType() 
// (12)qm1349917557 (17)_ZN9QMimeTypeC2Ev
/*void* qm1349917557()*/{
  ;
  this_ =  new QMimeType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:79
// [-2] void QMimeType(const QMimeType &) 
// (12)qm2230744272 (20)_ZN9QMimeTypeC2ERKS_
/*void* qm2230744272(const QMimeType & other)*/{
  const QMimeType & other = *(const QMimeType *)this_;
  this_ =  new QMimeType(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:81
// [8] QMimeType & operator=(QMimeType &&) 
// (11)qm909795579 (19)_ZN9QMimeTypeaSEOS_
//static
/*void qm909795579(QMimeType && other)*/ {
  QMimeType && other =  static_cast<QMimeType &&>(*(QMimeType *)this_);
  (void) ((QMimeType*)this_)->operator=(other);
  // auto xptr = (QMimeType & (QMimeType::*)(QMimeType&&) ) &QMimeType::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:82
// [-2] void swap(QMimeType &) 
// (12)qm2591497041 (22)_ZN9QMimeType4swapERS_
//static
/*void qm2591497041(QMimeType & other)*/ {
  QMimeType & other = *(QMimeType *)this_;
  (void) ((QMimeType*)this_)->swap(other);
   auto xptr = (void (QMimeType::*)(QMimeType&) ) &QMimeType::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:86
// [-2] void QMimeType(const QMimeTypePrivate &) 
// (12)qm1415262850 (36)_ZN9QMimeTypeC2ERK16QMimeTypePrivate
/*void* qm1415262850(const QMimeTypePrivate & dd)*/{
  const QMimeTypePrivate & dd = *(const QMimeTypePrivate *)this_;
  this_ =  new QMimeType(dd);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:91
// [1] bool operator!=(const QMimeType &) const
// (12)qm3012304358 (21)_ZNK9QMimeTypeneERKS_
//static
/*void qm3012304358(const QMimeType & other)*/ {
  const QMimeType & other = *(const QMimeType *)this_;
  (void) ((QMimeType*)this_)->operator!=(other);
  // auto xptr = (bool (QMimeType::*)(QMimeType const&) const ) &QMimeType::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QMimeTypeD2Ev(void *this_)*/ {
  delete (QMimeType*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmimetype
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(mimetype)
#endif // #ifndef QT_MINIMAL
//  footer block end
