//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(textcodec)
// /usr/include/qt/QtCore/qtextcodec.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextcodec.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextEncoder is pure virtual: false false
// QTextEncoder has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextencoder(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:140
// [-2] void QTextEncoder(const QTextCodec *) 
// (12)qm1182899304 (34)_ZN12QTextEncoderC2EPK10QTextCodec
/*void* qm1182899304(const QTextCodec * codec)*/{
  const QTextCodec * codec = *(const QTextCodec **)this_;
  this_ =  new QTextEncoder(codec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:141
// [-2] void QTextEncoder(const QTextCodec *, QTextCodec::ConversionFlags) 
// (12)qm2442542204 (64)_ZN12QTextEncoderC2EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE
/*void* qm2442542204(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags)*/{
  const QTextCodec * codec = *(const QTextCodec **)this_; QFlags<QTextCodec::ConversionFlag> flags = *(QFlags<QTextCodec::ConversionFlag>*)this_;
  this_ =  new QTextEncoder(codec, flags);
}


/*void C_ZN12QTextEncoderD2Ev(void *this_)*/ {
  delete (QTextEncoder*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextencoder
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(textcodec)
#endif // #ifndef QT_MINIMAL
//  footer block end
