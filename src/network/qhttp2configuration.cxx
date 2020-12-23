//  header block begin

#ifndef QT_MINIMAL
#include <QtNetwork/qtnetworkglobal.h>
#if QT_CONFIG(http)
// /usr/include/qt/QtNetwork/qhttp2configuration.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhttp2configuration.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHttp2Configuration is pure virtual: false false
// QHttp2Configuration has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhttp2configuration(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttp2configuration.h:59
// [-2] void QHttp2Configuration() 
// (12)qm2256097718 (28)_ZN19QHttp2ConfigurationC2Ev
/*void* qm2256097718()*/{
  ;
  this_ =  new QHttp2Configuration();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttp2configuration.h:60
// [-2] void QHttp2Configuration(const QHttp2Configuration &) 
// (12)qm2369185281 (31)_ZN19QHttp2ConfigurationC2ERKS_
/*void* qm2369185281(const QHttp2Configuration & other)*/{
  const QHttp2Configuration & other = *(const QHttp2Configuration *)this_;
  this_ =  new QHttp2Configuration(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttp2configuration.h:61
// [-2] void QHttp2Configuration(QHttp2Configuration &&) 
// (12)qm2933022775 (30)_ZN19QHttp2ConfigurationC2EOS_
/*void* qm2933022775(QHttp2Configuration && other)*/{
  QHttp2Configuration && other =  static_cast<QHttp2Configuration &&>(*(QHttp2Configuration *)this_);
  this_ =  new QHttp2Configuration(other);
}


/*void C_ZN19QHttp2ConfigurationD2Ev(void *this_)*/ {
  delete (QHttp2Configuration*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhttp2configuration
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(http)
#endif // #ifndef QT_MINIMAL
//  footer block end
