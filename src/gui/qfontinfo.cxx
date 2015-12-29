// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtGui/qfontinfo.h
// dst-file: /src/gui/qfontinfo.cxx
//

// header block begin =>
#include <qfontinfo.h>

extern "C" {

int QFontInfo_Class_Size()
{
  return sizeof(QFontInfo);
}

// QFontInfo(const class QFontInfo &)
QFontInfo* dector_ZN9QFontInfoC1ERKS_(const QFontInfo & arg1)
{
  // static_assert(sizeof(QFontInfo) == 32, "tyszerr");
  QFontInfo* rthis = new QFontInfo(arg1);
  return rthis;
}

// QFontInfo(const class QFont &)
QFontInfo* dector_ZN9QFontInfoC1ERK5QFont(const QFont & arg1)
{
  // static_assert(sizeof(QFontInfo) == 32, "tyszerr");
  QFontInfo* rthis = new QFontInfo(arg1);
  return rthis;
}

// ~QFontInfo()
void dedtor_ZN9QFontInfoD0Ev(QFontInfo* that)
{
  QFontInfo* rthis = (QFontInfo*)that;
  delete rthis;
}

  // proto:  bool QFontInfo::bold();
bool demth_ZNK9QFontInfo4boldEv(void *that)
{
  QFontInfo *cthat = (QFontInfo *)that;
  return cthat->bold();
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

