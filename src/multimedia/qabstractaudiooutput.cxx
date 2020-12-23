//  header block begin

// /usr/include/qt/QtMultimedia/qaudiosystem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiosystem.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractAudioOutput is pure virtual: true true
// QAbstractAudioOutput has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractaudiooutput(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:72
// [8] QString tr(const char *, const char *, int) 
// (12)qm3523582835 (36)_ZN20QAbstractAudioOutput2trEPKcS1_i
//static
/*void qm3523582835(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractAudioOutput::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractAudioOutput::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline virtual Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:93
// [-2] void setVolume(qreal) 
// (11)qm651057111 (37)_ZN20QAbstractAudioOutput9setVolumeEd
//static
/*void qm651057111(double arg0)*/ {
  double arg0 = *(double*)this_;
  (void) ((QAbstractAudioOutput*)this_)->setVolume(arg0);
   auto xptr = (void (QAbstractAudioOutput::*)(double) ) &QAbstractAudioOutput::setVolume;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline virtual Direct Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:94
// [8] qreal volume() const
// (12)qm1306221737 (35)_ZNK20QAbstractAudioOutput6volumeEv
//static
/*void qm1306221737()*/ {
  ;
  (void) ((QAbstractAudioOutput*)this_)->volume();
   auto xptr = (double (QAbstractAudioOutput::*)() const ) &QAbstractAudioOutput::volume;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline virtual Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:95
// [8] QString category() const
// (12)qm1989253784 (37)_ZNK20QAbstractAudioOutput8categoryEv
//static
/*void qm1989253784()*/ {
  ;
  (void) ((QAbstractAudioOutput*)this_)->category();
   auto xptr = (QString (QAbstractAudioOutput::*)() const ) &QAbstractAudioOutput::category;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline virtual Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiosystem.h:96
// [-2] void setCategory(const QString &) 
// (12)qm3480664766 (49)_ZN20QAbstractAudioOutput11setCategoryERK7QString
//static
/*void qm3480664766(const QString & arg0)*/ {
  const QString & arg0 = *(const QString *)this_;
  (void) ((QAbstractAudioOutput*)this_)->setCategory(arg0);
   auto xptr = (void (QAbstractAudioOutput::*)(QString const&) ) &QAbstractAudioOutput::setCategory;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QAbstractAudioOutputD2Ev(void *this_)*/ {
  delete (QAbstractAudioOutput*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractaudiooutput
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
