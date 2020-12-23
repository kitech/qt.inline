//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QFileOpenEvent is pure virtual: false false
// QFileOpenEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfileopenevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:780
// [-2] void QFileOpenEvent(const QString &) 
// (12)qm3741341417 (32)_ZN14QFileOpenEventC2ERK7QString
/*void* qm3741341417(const QString & file)*/{
  const QString & file = *(const QString *)this_;
  this_ =  new QFileOpenEvent(file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:781
// [-2] void QFileOpenEvent(const QUrl &) 
// (12)qm2717622172 (29)_ZN14QFileOpenEventC2ERK4QUrl
/*void* qm2717622172(const QUrl & url)*/{
  const QUrl & url = *(const QUrl *)this_;
  this_ =  new QFileOpenEvent(url);
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:784
// [8] QString file() const
// (12)qm1192897722 (27)_ZNK14QFileOpenEvent4fileEv
//static
/*void qm1192897722()*/ {
  ;
  (void) ((QFileOpenEvent*)this_)->file();
   auto xptr = (QString (QFileOpenEvent::*)() const ) &QFileOpenEvent::file;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:785
// [8] QUrl url() const
// (11)qm813759870 (26)_ZNK14QFileOpenEvent3urlEv
//static
/*void qm813759870()*/ {
  ;
  (void) ((QFileOpenEvent*)this_)->url();
   auto xptr = (QUrl (QFileOpenEvent::*)() const ) &QFileOpenEvent::url;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QFileOpenEventD2Ev(void *this_)*/ {
  delete (QFileOpenEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfileopenevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
