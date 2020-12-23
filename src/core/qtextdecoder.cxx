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

// QTextDecoder is pure virtual: false false
// QTextDecoder has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextdecoder(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:157
// [-2] void QTextDecoder(const QTextCodec *) 
// (12)qm2985853780 (34)_ZN12QTextDecoderC2EPK10QTextCodec
/*void* qm2985853780(const QTextCodec * codec)*/{
  const QTextCodec * codec = *(const QTextCodec **)this_;
  this_ =  new QTextDecoder(codec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:158
// [-2] void QTextDecoder(const QTextCodec *, QTextCodec::ConversionFlags) 
// (12)qm1400753027 (64)_ZN12QTextDecoderC2EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE
/*void* qm1400753027(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags)*/{
  const QTextCodec * codec = *(const QTextCodec **)this_; QFlags<QTextCodec::ConversionFlag> flags = *(QFlags<QTextCodec::ConversionFlag>*)this_;
  this_ =  new QTextDecoder(codec, flags);
}


/*void C_ZN12QTextDecoderD2Ev(void *this_)*/ {
  delete (QTextDecoder*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextdecoder
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
