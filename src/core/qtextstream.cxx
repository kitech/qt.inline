//  header block begin

// /usr/include/qt/QtCore/qtextstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextStream is pure virtual: false false
// QTextStream has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextstream(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:93
// [-2] void QTextStream() 
// (12)qm1102095014 (20)_ZN11QTextStreamC2Ev
/*void* qm1102095014()*/{
  ;
  this_ =  new QTextStream();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:94
// [-2] void QTextStream(QIODevice *) 
// (11)qm488794110 (30)_ZN11QTextStreamC2EP9QIODevice
/*void* qm488794110(QIODevice * device)*/{
  QIODevice * device = *(QIODevice **)this_;
  this_ =  new QTextStream(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:95
// [-2] void QTextStream(FILE *, QIODevice::OpenMode) 
// (12)qm2803988053 (64)_ZN11QTextStreamC2EP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEE
/*void* qm2803988053(_IO_FILE * fileHandle, QFlags<QIODevice::OpenModeFlag> openMode)*/{
  _IO_FILE * fileHandle = *(_IO_FILE **)this_; QFlags<QIODevice::OpenModeFlag> openMode = *(QFlags<QIODevice::OpenModeFlag>*)this_;
  this_ =  new QTextStream(fileHandle, openMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:96
// [-2] void QTextStream(QString *, QIODevice::OpenMode) 
// (12)qm1628970897 (63)_ZN11QTextStreamC2EP7QString6QFlagsIN9QIODevice12OpenModeFlagEE
/*void* qm1628970897(QString * string, QFlags<QIODevice::OpenModeFlag> openMode)*/{
  QString * string = *(QString **)this_; QFlags<QIODevice::OpenModeFlag> openMode = *(QFlags<QIODevice::OpenModeFlag>*)this_;
  this_ =  new QTextStream(string, openMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:97
// [-2] void QTextStream(QByteArray *, QIODevice::OpenMode) 
// (12)qm3935249134 (67)_ZN11QTextStreamC2EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE
/*void* qm3935249134(QByteArray * array, QFlags<QIODevice::OpenModeFlag> openMode)*/{
  QByteArray * array = *(QByteArray **)this_; QFlags<QIODevice::OpenModeFlag> openMode = *(QFlags<QIODevice::OpenModeFlag>*)this_;
  this_ =  new QTextStream(array, openMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:98
// [-2] void QTextStream(const QByteArray &, QIODevice::OpenMode) 
// (11)qm700417304 (68)_ZN11QTextStreamC2ERK10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE
/*void* qm700417304(const QByteArray & array, QFlags<QIODevice::OpenModeFlag> openMode)*/{
  const QByteArray & array = *(const QByteArray *)this_; QFlags<QIODevice::OpenModeFlag> openMode = *(QFlags<QIODevice::OpenModeFlag>*)this_;
  this_ =  new QTextStream(array, openMode);
}


/*void C_ZN11QTextStreamD2Ev(void *this_)*/ {
  delete (QTextStream*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextstream
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
