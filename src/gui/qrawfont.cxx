//  header block begin

// /usr/include/qt/QtGui/qrawfont.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrawfont.h>
#include <QtGui>
#include "callback_inherit.h"

// QRawFont is pure virtual: false false
// QRawFont has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qrawfont(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:74
// [-2] void QRawFont() 
// (12)qm2410357999 (16)_ZN8QRawFontC2Ev
/*void* qm2410357999()*/{
  ;
  this_ =  new QRawFont();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:75
// [-2] void QRawFont(const QString &, qreal, QFont::HintingPreference) 
// (12)qm2375333881 (53)_ZN8QRawFontC2ERK7QStringdN5QFont17HintingPreferenceE
/*void* qm2375333881(const QString & fileName, double pixelSize, QFont::HintingPreference hintingPreference)*/{
  const QString & fileName = *(const QString *)this_; double pixelSize = *(double*)this_; QFont::HintingPreference hintingPreference = *(QFont::HintingPreference*)this_;
  this_ =  new QRawFont(fileName, pixelSize, hintingPreference);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:78
// [-2] void QRawFont(const QByteArray &, qreal, QFont::HintingPreference) 
// (12)qm3687950224 (57)_ZN8QRawFontC2ERK10QByteArraydN5QFont17HintingPreferenceE
/*void* qm3687950224(const QByteArray & fontData, double pixelSize, QFont::HintingPreference hintingPreference)*/{
  const QByteArray & fontData = *(const QByteArray *)this_; double pixelSize = *(double*)this_; QFont::HintingPreference hintingPreference = *(QFont::HintingPreference*)this_;
  this_ =  new QRawFont(fontData, pixelSize, hintingPreference);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:81
// [-2] void QRawFont(const QRawFont &) 
// (12)qm3570322812 (19)_ZN8QRawFontC2ERKS_
/*void* qm3570322812(const QRawFont & other)*/{
  const QRawFont & other = *(const QRawFont *)this_;
  this_ =  new QRawFont(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:82
// [8] QRawFont & operator=(QRawFont &&) 
// (11)qm200470667 (18)_ZN8QRawFontaSEOS_
//static
/*void qm200470667(QRawFont && other)*/ {
  QRawFont && other =  static_cast<QRawFont &&>(*(QRawFont *)this_);
  (void) ((QRawFont*)this_)->operator=(other);
  // auto xptr = (QRawFont & (QRawFont::*)(QRawFont&&) ) &QRawFont::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:86
// [-2] void swap(QRawFont &) 
// (11)qm712553380 (21)_ZN8QRawFont4swapERS_
//static
/*void qm712553380(QRawFont & other)*/ {
  QRawFont & other = *(QRawFont *)this_;
  (void) ((QRawFont*)this_)->swap(other);
   auto xptr = (void (QRawFont::*)(QRawFont&) ) &QRawFont::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:91
// [1] bool operator!=(const QRawFont &) const
// (12)qm4168904375 (20)_ZNK8QRawFontneERKS_
//static
/*void qm4168904375(const QRawFont & other)*/ {
  const QRawFont & other = *(const QRawFont *)this_;
  (void) ((QRawFont*)this_)->operator!=(other);
  // auto xptr = (bool (QRawFont::*)(QRawFont const&) const ) &QRawFont::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:101
// [8] QVector<QPointF> advancesForGlyphIndexes(const QVector<quint32> &) const
// (12)qm1807071504 (52)_ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE
//static
/*void qm1807071504(const QVector<unsigned int> & glyphIndexes)*/ {
  const QVector<unsigned int> & glyphIndexes = *(const QVector<unsigned int> *)this_;
  (void) ((QRawFont*)this_)->advancesForGlyphIndexes(glyphIndexes);
   auto xptr = (QVector<QPointF> (QRawFont::*)(QVector<unsigned int> const&) const ) &QRawFont::advancesForGlyphIndexes;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:102
// [8] QVector<QPointF> advancesForGlyphIndexes(const QVector<quint32> &, QRawFont::LayoutFlags) const
// (12)qm3352113993 (77)_ZNK8QRawFont23advancesForGlyphIndexesERK7QVectorIjE6QFlagsINS_10LayoutFlagEE
//static
/*void qm3352113993(const QVector<unsigned int> & glyphIndexes, QFlags<QRawFont::LayoutFlag> layoutFlags)*/ {
  const QVector<unsigned int> & glyphIndexes = *(const QVector<unsigned int> *)this_; QFlags<QRawFont::LayoutFlag> layoutFlags = *(QFlags<QRawFont::LayoutFlag>*)this_;
  (void) ((QRawFont*)this_)->advancesForGlyphIndexes(glyphIndexes, layoutFlags);
   auto xptr = (QVector<QPointF> (QRawFont::*)(QVector<unsigned int> const&, QFlags<QRawFont::LayoutFlag>) const ) &QRawFont::advancesForGlyphIndexes;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QRawFontD2Ev(void *this_)*/ {
  delete (QRawFont*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qrawfont
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
