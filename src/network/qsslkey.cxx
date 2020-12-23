//  header block begin

// /usr/include/qt/QtNetwork/qsslkey.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslkey.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslKey is pure virtual: false false
// QSslKey has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsslkey(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:63
// [-2] void QSslKey() 
// (11)qm176985637 (15)_ZN7QSslKeyC2Ev
/*void* qm176985637()*/{
  ;
  this_ =  new QSslKey();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:64
// [-2] void QSslKey(const QByteArray &, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray &) 
// (10)qm68009653 (86)_ZN7QSslKeyC2ERK10QByteArrayN4QSsl12KeyAlgorithmENS3_14EncodingFormatENS3_7KeyTypeES2_
/*void* qm68009653(const QByteArray & encoded, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type_, const QByteArray & passPhrase)*/{
  const QByteArray & encoded = *(const QByteArray *)this_; QSsl::KeyAlgorithm algorithm = *(QSsl::KeyAlgorithm*)this_; QSsl::EncodingFormat format = *(QSsl::EncodingFormat*)this_; QSsl::KeyType type_ = *(QSsl::KeyType*)this_; const QByteArray & passPhrase = *(const QByteArray *)this_;
  this_ =  new QSslKey(encoded, algorithm, format, type_, passPhrase);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:68
// [-2] void QSslKey(QIODevice *, QSsl::KeyAlgorithm, QSsl::EncodingFormat, QSsl::KeyType, const QByteArray &) 
// (12)qm4041924596 (94)_ZN7QSslKeyC2EP9QIODeviceN4QSsl12KeyAlgorithmENS2_14EncodingFormatENS2_7KeyTypeERK10QByteArray
/*void* qm4041924596(QIODevice * device, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type_, const QByteArray & passPhrase)*/{
  QIODevice * device = *(QIODevice **)this_; QSsl::KeyAlgorithm algorithm = *(QSsl::KeyAlgorithm*)this_; QSsl::EncodingFormat format = *(QSsl::EncodingFormat*)this_; QSsl::KeyType type_ = *(QSsl::KeyType*)this_; const QByteArray & passPhrase = *(const QByteArray *)this_;
  this_ =  new QSslKey(device, algorithm, format, type_, passPhrase);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:72
// [-2] void QSslKey(Qt::HANDLE, QSsl::KeyType) 
// (12)qm3271984934 (31)_ZN7QSslKeyC2EPvN4QSsl7KeyTypeE
/*void* qm3271984934(void * handle, QSsl::KeyType type_)*/{
  void * handle = *(void **)this_; QSsl::KeyType type_ = *(QSsl::KeyType*)this_;
  this_ =  new QSslKey(handle, type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:73
// [-2] void QSslKey(const QSslKey &) 
// (11)qm990881598 (18)_ZN7QSslKeyC2ERKS_
/*void* qm990881598(const QSslKey & other)*/{
  const QSslKey & other = *(const QSslKey *)this_;
  this_ =  new QSslKey(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:74
// [-2] void QSslKey(QSslKey &&) 
// (12)qm4055785992 (17)_ZN7QSslKeyC2EOS_
/*void* qm4055785992(QSslKey && other)*/{
  QSslKey && other =  static_cast<QSslKey &&>(*(QSslKey *)this_);
  this_ =  new QSslKey(other);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:79
// [-2] void swap(QSslKey &) 
// (12)qm1162934692 (20)_ZN7QSslKey4swapERS_
//static
/*void qm1162934692(QSslKey & other)*/ {
  QSslKey & other = *(QSslKey *)this_;
  (void) ((QSslKey*)this_)->swap(other);
   auto xptr = (void (QSslKey::*)(QSslKey&) ) &QSslKey::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:94
// [1] bool operator!=(const QSslKey &) const
// (12)qm3738337952 (19)_ZNK7QSslKeyneERKS_
//static
/*void qm3738337952(const QSslKey & key)*/ {
  const QSslKey & key = *(const QSslKey *)this_;
  (void) ((QSslKey*)this_)->operator!=(key);
  // auto xptr = (bool (QSslKey::*)(QSslKey const&) const ) &QSslKey::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QSslKeyD2Ev(void *this_)*/ {
  delete (QSslKey*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsslkey
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
