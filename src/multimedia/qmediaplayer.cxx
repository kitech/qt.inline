//  header block begin

// /usr/include/qt/QtMultimedia/qmediaplayer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaplayer.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaPlayer is pure virtual: false false
// QMediaPlayer has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaplayer(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:62
// [8] QString tr(const char *, const char *, int) 
// (12)qm3749014757 (28)_ZN12QMediaPlayer2trEPKcS1_i
//static
/*void qm3749014757(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QMediaPlayer::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QMediaPlayer::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:124
// [-2] void QMediaPlayer(QObject *, QMediaPlayer::Flags) 
// (12)qm1371021590 (47)_ZN12QMediaPlayerC2EP7QObject6QFlagsINS_4FlagEE
/*void* qm1371021590(QObject * parent, QFlags<QMediaPlayer::Flag> flags)*/{
  QObject * parent = *(QObject **)this_; QFlags<QMediaPlayer::Flag> flags = *(QFlags<QMediaPlayer::Flag>*)this_;
  this_ =  new QMediaPlayer(parent, flags);
}


/*void C_ZN12QMediaPlayerD2Ev(void *this_)*/ {
  delete (QMediaPlayer*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaplayer
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
