//  header block begin
// /usr/include/qt/QtCore/qstringbuilder.h
#ifndef protected
#define protected public
#endif
#include <qstringbuilder.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringBuilder is pure virtual: false
// QStringBuilder has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQStringBuilder : public QStringBuilder<QByteArray, QByteArray> {
public:
  virtual ~MyQStringBuilder() {}
// void QStringBuilder(const QByteArray &, const QByteArray &)
MyQStringBuilder(const QByteArray & a_, const QByteArray & b_) : QStringBuilder<QByteArray, QByteArray>(a_, b_) {}
// void QStringBuilder(const QStringBuilder<QByteArray, QByteArray> &)
MyQStringBuilder(const QStringBuilder<QByteArray, QByteArray> & other) : QStringBuilder<QByteArray, QByteArray>(other) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:160
// [-2] void QStringBuilder(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStringBuilderI10QByteArrayS0_EC2ERKS0_S3_(QByteArray* a_, QByteArray* b_) {
  return  new QStringBuilder<QByteArray, QByteArray>(*a_, *b_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringbuilder.h:161
// [-2] void QStringBuilder(const QStringBuilder<QByteArray, QByteArray> &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStringBuilderI10QByteArrayS0_EC2ERKS1_(const QStringBuilder<QByteArray, QByteArray>* other) {
  return  new QStringBuilder<QByteArray, QByteArray>(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN14QStringBuilderD2Ev(void *this_) {
  delete (QStringBuilder<QByteArray, QByteArray>*)(this_);
}
//  main block end
