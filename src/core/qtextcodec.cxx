// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtCore/qtextcodec.h
// dst-file: /src/core/qtextcodec.cxx
//

// header block begin =>
#include <qtextcodec.h>

extern "C" {

// ~QTextEncoder()
void dedtor_ZN12QTextEncoderD0Ev(QTextEncoder* that)
{
  QTextEncoder* rthis = (QTextEncoder*)that;
  delete rthis;
}

// QTextEncoder(const class QTextCodec *, class QTextCodec::ConversionFlags)
QTextEncoder* dector_ZN12QTextEncoderC1EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE(const QTextCodec * codec, QTextCodec::ConversionFlags flags)
{
  // static_assert(sizeof(QTextEncoder) == 32, "tyszerr");
  QTextEncoder* rthis = new QTextEncoder(codec, flags);
  return rthis;
}

// QTextDecoder(const class QTextCodec *, class QTextCodec::ConversionFlags)
QTextDecoder* dector_ZN12QTextDecoderC1EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE(const QTextCodec * codec, QTextCodec::ConversionFlags flags)
{
  // static_assert(sizeof(QTextDecoder) == 32, "tyszerr");
  QTextDecoder* rthis = new QTextDecoder(codec, flags);
  return rthis;
}

// ~QTextDecoder()
void dedtor_ZN12QTextDecoderD0Ev(QTextDecoder* that)
{
  QTextDecoder* rthis = (QTextDecoder*)that;
  delete rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

