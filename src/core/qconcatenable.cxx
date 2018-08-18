//  header block begin
// /usr/include/qt/QtCore/qstringbuilder.h
#ifndef protected
#define protected public
#endif
#include <qstringbuilder.h>
#include <QtCore>
#include "callback_inherit.h"

// QConcatenable is pure virtual: false
// QConcatenable has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQConcatenable : public QConcatenable<QByteArray> {
public:
  virtual ~MyQConcatenable() {}
};

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:333
// [4] int size(const QByteArray &)
extern "C" Q_DECL_EXPORT
int C_ZN13QConcatenableI10QByteArrayE4sizeERKS0_(QByteArray* ba) {
  return (int)QConcatenable<QByteArray>::size(*ba);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:335
// [-2] void appendTo(const QByteArray &, QChar *&)
extern "C" Q_DECL_EXPORT
void C_ZN13QConcatenableI10QByteArrayE8appendToERKS0_RP5QChar(QByteArray* ba, QChar *& out) {
  QConcatenable<QByteArray>::appendTo(*ba, out);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:340
// [-2] void appendTo(const QByteArray &, char *&)
extern "C" Q_DECL_EXPORT
void C_ZN13QConcatenableI10QByteArrayE8appendToERKS0_RPc(QByteArray* ba, char *& out) {
  QConcatenable<QByteArray>::appendTo(*ba, out);
}


extern "C" Q_DECL_EXPORT
void C_ZN13QConcatenableD2Ev(void *this_) {
  delete (QConcatenable<QByteArray>*)(this_);
}
//  main block end
