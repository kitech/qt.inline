//  header block begin

// /usr/include/qt/QtCore/qxmlstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qxmlstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QXmlStreamWriter is pure virtual: false false
// QXmlStreamWriter has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qxmlstreamwriter(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:468
// [-2] void QXmlStreamWriter() 
// (11)qm354441112 (25)_ZN16QXmlStreamWriterC2Ev
/*void* qm354441112()*/{
  ;
  this_ =  new QXmlStreamWriter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:469
// [-2] void QXmlStreamWriter(QIODevice *) 
// (12)qm1331899125 (35)_ZN16QXmlStreamWriterC2EP9QIODevice
/*void* qm1331899125(QIODevice * device)*/{
  QIODevice * device = *(QIODevice **)this_;
  this_ =  new QXmlStreamWriter(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:470
// [-2] void QXmlStreamWriter(QByteArray *) 
// (12)qm2930265000 (37)_ZN16QXmlStreamWriterC2EP10QByteArray
/*void* qm2930265000(QByteArray * array)*/{
  QByteArray * array = *(QByteArray **)this_;
  this_ =  new QXmlStreamWriter(array);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:471
// [-2] void QXmlStreamWriter(QString *) 
// (10)qm50917282 (33)_ZN16QXmlStreamWriterC2EP7QString
/*void* qm50917282(QString * string)*/{
  QString * string = *(QString **)this_;
  this_ =  new QXmlStreamWriter(string);
}


/*void C_ZN16QXmlStreamWriterD2Ev(void *this_)*/ {
  delete (QXmlStreamWriter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qxmlstreamwriter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
