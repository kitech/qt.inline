//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(cborstreamwriter)
// /usr/include/qt/QtCore/qcborstreamwriter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborstreamwriter.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborStreamWriter is pure virtual: false false
// QCborStreamWriter has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcborstreamwriter(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamwriter.h:68
// [-2] void QCborStreamWriter(QIODevice *) 
// (12)qm3565469453 (36)_ZN17QCborStreamWriterC2EP9QIODevice
/*void* qm3565469453(QIODevice * device)*/{
  QIODevice * device = *(QIODevice **)this_;
  this_ = 0; // new QCborStreamWriter(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamwriter.h:69
// [-2] void QCborStreamWriter(QByteArray *) 
// (12)qm4071152689 (38)_ZN17QCborStreamWriterC2EP10QByteArray
/*void* qm4071152689(QByteArray * data)*/{
  QByteArray * data = *(QByteArray **)this_;
  this_ = 0; // new QCborStreamWriter(data);
}

// Public inline Visibility=Default Availability=NotAvailable
// /usr/include/qt/QtCore/qcborstreamwriter.h:71
// [-2] void QCborStreamWriter(const QCborStreamWriter &) 
// (12)qm1302577443 (29)_ZN17QCborStreamWriterC2ERKS_
/*void* qm1302577443(const QCborStreamWriter & arg0)*/{
  const QCborStreamWriter & arg0 = *(const QCborStreamWriter *)this_;
  this_ = 0; // new QCborStreamWriter(arg0);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamwriter.h:79
// [-2] void append(const QByteArray &) 
// (10)qm59480320 (44)_ZN17QCborStreamWriter6appendERK10QByteArray
//static
/*void qm59480320(const QByteArray & ba)*/ {
  const QByteArray & ba = *(const QByteArray *)this_;
  (void) ((QCborStreamWriter*)this_)->append(ba);
   auto xptr = (void (QCborStreamWriter::*)(QByteArray const&) ) &QCborStreamWriter::append;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamwriter.h:83
// [-2] void append(QCborKnownTags) 
// (11)qm656852345 (46)_ZN17QCborStreamWriter6appendE14QCborKnownTags
//static
/*void qm656852345(QCborKnownTags tag)*/ {
  QCborKnownTags tag = *(QCborKnownTags*)this_;
  (void) ((QCborStreamWriter*)this_)->append(tag);
   auto xptr = (void (QCborStreamWriter::*)(QCborKnownTags) ) &QCborStreamWriter::append;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamwriter.h:85
// [-2] void append(std::nullptr_t) 
// (12)qm2646056412 (32)_ZN17QCborStreamWriter6appendEDn
//static
/*void qm2646056412(nullptr_t arg0)*/ {
  nullptr_t arg0 = *(nullptr_t*)this_;
  (void) ((QCborStreamWriter*)this_)->append(arg0);
   auto xptr = (void (QCborStreamWriter::*)(decltype(nullptr)) ) &QCborStreamWriter::append;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamwriter.h:96
// [-2] void append(bool) 
// (12)qm3096282672 (31)_ZN17QCborStreamWriter6appendEb
//static
/*void qm3096282672(bool b)*/ {
  bool b = *(bool*)this_;
  (void) ((QCborStreamWriter*)this_)->append(b);
   auto xptr = (void (QCborStreamWriter::*)(bool) ) &QCborStreamWriter::append;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamwriter.h:97
// [-2] void appendNull() 
// (12)qm2994580077 (36)_ZN17QCborStreamWriter10appendNullEv
//static
/*void qm2994580077()*/ {
  ;
  (void) ((QCborStreamWriter*)this_)->appendNull();
   auto xptr = (void (QCborStreamWriter::*)() ) &QCborStreamWriter::appendNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamwriter.h:98
// [-2] void appendUndefined() 
// (12)qm1088502298 (41)_ZN17QCborStreamWriter15appendUndefinedEv
//static
/*void qm1088502298()*/ {
  ;
  (void) ((QCborStreamWriter*)this_)->appendUndefined();
   auto xptr = (void (QCborStreamWriter::*)() ) &QCborStreamWriter::appendUndefined;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamwriter.h:102
// [-2] void append(int) 
// (11)qm794779576 (31)_ZN17QCborStreamWriter6appendEi
//static
/*void qm794779576(int i)*/ {
  int i = *(int*)this_;
  (void) ((QCborStreamWriter*)this_)->append(i);
   auto xptr = (void (QCborStreamWriter::*)(int) ) &QCborStreamWriter::append;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamwriter.h:103
// [-2] void append(uint) 
// (12)qm3059092994 (31)_ZN17QCborStreamWriter6appendEj
//static
/*void qm3059092994(unsigned int u)*/ {
  unsigned int u = *(unsigned int*)this_;
  (void) ((QCborStreamWriter*)this_)->append(u);
   auto xptr = (void (QCborStreamWriter::*)(unsigned int) ) &QCborStreamWriter::append;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstreamwriter.h:106
// [-2] void append(const char *, qsizetype) 
// (11)qm320433931 (34)_ZN17QCborStreamWriter6appendEPKcx
//static
/*void qm320433931(const char * str, long long size)*/ {
  const char * str = *(const char **)this_; long long size = *(long long*)this_;
  (void) ((QCborStreamWriter*)this_)->append(str, size);
   auto xptr = (void (QCborStreamWriter::*)(char const*, long long) ) &QCborStreamWriter::append;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qcborstreamwriter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(cborstreamwriter)
#endif // #ifndef QT_MINIMAL
//  footer block end
