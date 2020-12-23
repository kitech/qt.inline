//  header block begin

// /usr/include/qt/QtGui/qtextdocumentwriter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextdocumentwriter.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextDocumentWriter is pure virtual: false false
// QTextDocumentWriter has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextdocumentwriter(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:57
// [-2] void QTextDocumentWriter() 
// (11)qm901236453 (28)_ZN19QTextDocumentWriterC2Ev
/*void* qm901236453()*/{
  ;
  this_ =  new QTextDocumentWriter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:58
// [-2] void QTextDocumentWriter(QIODevice *, const QByteArray &) 
// (12)qm2132002729 (52)_ZN19QTextDocumentWriterC2EP9QIODeviceRK10QByteArray
/*void* qm2132002729(QIODevice * device, const QByteArray & format)*/{
  QIODevice * device = *(QIODevice **)this_; const QByteArray & format = *(const QByteArray *)this_;
  this_ =  new QTextDocumentWriter(device, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocumentwriter.h:59
// [-2] void QTextDocumentWriter(const QString &, const QByteArray &) 
// (12)qm4181703022 (51)_ZN19QTextDocumentWriterC2ERK7QStringRK10QByteArray
/*void* qm4181703022(const QString & fileName, const QByteArray & format)*/{
  const QString & fileName = *(const QString *)this_; const QByteArray & format = *(const QByteArray *)this_;
  this_ =  new QTextDocumentWriter(fileName, format);
}


/*void C_ZN19QTextDocumentWriterD2Ev(void *this_)*/ {
  delete (QTextDocumentWriter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextdocumentwriter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
