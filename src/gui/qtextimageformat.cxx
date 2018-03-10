//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextImageFormat is pure virtual: false
// QTextImageFormat has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextImageFormat : public QTextImageFormat {
public:
  virtual ~MyQTextImageFormat() {}
// void QTextImageFormat()
MyQTextImageFormat() : QTextImageFormat() {}
// void QTextImageFormat(const class QTextFormat &)
MyQTextImageFormat(const QTextFormat & format) : QTextImageFormat(format) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:735
// [-2] void QTextImageFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN16QTextImageFormatC2Ev() {
  return  new QTextImageFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:737
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QTextImageFormat7isValidEv(void *this_) {
  return (bool)((QTextImageFormat*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:739
// [-2] void setName(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextImageFormat7setNameERK7QString(void *this_, QString* name) {
  ((QTextImageFormat*)this_)->setName(*name);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:740
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QTextImageFormat4nameEv(void *this_) {
  auto rv = ((QTextImageFormat*)this_)->name();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:743
// [-2] void setWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextImageFormat8setWidthEd(void *this_, qreal width) {
  ((QTextImageFormat*)this_)->setWidth(width);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:744
// [8] qreal width()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextImageFormat5widthEv(void *this_) {
  return (qreal)((QTextImageFormat*)this_)->width();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:747
// [-2] void setHeight(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QTextImageFormat9setHeightEd(void *this_, qreal height) {
  ((QTextImageFormat*)this_)->setHeight(height);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:748
// [8] qreal height()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QTextImageFormat6heightEv(void *this_) {
  return (qreal)((QTextImageFormat*)this_)->height();
}


extern "C" Q_DECL_EXPORT
void C_ZN16QTextImageFormatD2Ev(void *this_) {
  delete (QTextImageFormat*)(this_);
}
//  main block end
