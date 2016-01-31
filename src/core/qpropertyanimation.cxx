// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtCore/qpropertyanimation.h
// dst-file: /src/core/qpropertyanimation.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpropertyanimation.h>


#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qpropertyanimation_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPropertyAnimation_Class_Size()
{
  return sizeof(QPropertyAnimation);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qpropertyanimation.h', line 59, column 16>
//   // proto:  QByteArray QPropertyAnimation::propertyName();
// _ZNK18QPropertyAnimation12propertyNameEv propertyName()
extern "C"
QByteArray*
C_ZNK18QPropertyAnimation12propertyNameEv(void *qthis) {
  auto ret =
  ((QPropertyAnimation*)qthis)->propertyName();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qpropertyanimation.h', line 57, column 10>
//   // proto:  void QPropertyAnimation::setTargetObject(QObject * target);
// _ZN18QPropertyAnimation15setTargetObjectEP7QObject setTargetObject(class QObject *)
extern "C"
void
C_ZN18QPropertyAnimation15setTargetObjectEP7QObject(void *qthis,
QObject * arg1) {
  ((QPropertyAnimation*)qthis)->setTargetObject(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qpropertyanimation.h', line 52, column 5>
//   // proto:  void QPropertyAnimation::QPropertyAnimation(QObject * parent);
extern "C"
QPropertyAnimation*
C_ZN18QPropertyAnimationC2EP7QObject(QObject * arg1) {
  auto ret = new QPropertyAnimation(arg1);
  return ret;
}
//   // proto:  void QPropertyAnimation::~QPropertyAnimation();
extern "C"
void C_ZN18QPropertyAnimationD2Ev(void *qthis) {
  delete (QPropertyAnimation*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qpropertyanimation.h', line 56, column 14>
//   // proto:  QObject * QPropertyAnimation::targetObject();
// _ZNK18QPropertyAnimation12targetObjectEv targetObject()
extern "C"
void*
C_ZNK18QPropertyAnimation12targetObjectEv(void *qthis) {
  auto ret =
  ((QPropertyAnimation*)qthis)->targetObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qpropertyanimation.h', line 47, column 5>
//   // proto:  const QMetaObject * QPropertyAnimation::metaObject();
// _ZNK18QPropertyAnimation10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QPropertyAnimation10metaObjectEv(void *qthis) {
  auto ret =
  ((QPropertyAnimation*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qpropertyanimation.h', line 53, column 5>
//   // proto:  void QPropertyAnimation::QPropertyAnimation(QObject * target, const QByteArray & propertyName, QObject * parent);
extern "C"
QPropertyAnimation*
C_ZN18QPropertyAnimationC2EP7QObjectRK10QByteArrayS1_(QObject * arg1,
const QByteArray* arg2,
QObject * arg3) {
  auto ret = new QPropertyAnimation(arg1,
*((const QByteArray*)arg2),
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qpropertyanimation.h', line 60, column 10>
//   // proto:  void QPropertyAnimation::setPropertyName(const QByteArray & propertyName);
// _ZN18QPropertyAnimation15setPropertyNameERK10QByteArray setPropertyName(const class QByteArray &)
extern "C"
void
C_ZN18QPropertyAnimation15setPropertyNameERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  ((QPropertyAnimation*)qthis)->setPropertyName(*((const QByteArray*)arg1));
}
// <= ext block end

// body block begin =>
// QPropertyAnimation_SlotProxy here
class QPropertyAnimation_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPropertyAnimation_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qpropertyanimation.moc"

extern "C" {
  QPropertyAnimation_SlotProxy* QPropertyAnimation_SlotProxy_new()
  {
    return new QPropertyAnimation_SlotProxy();
  }
};

// <= body block end

