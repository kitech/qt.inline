// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qinputmethod.h
// dst-file: /src/gui/qinputmethod.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qinputmethod.h>


#include <qrect.h>
#include <qtransform.h>
#include <qnamespace.h>
#include <qvariant.h>
#include <qlocale.h>
// <= header block end

// main block begin =>
void __keep_qinputmethod_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QInputMethod_Class_Size()
{
  return sizeof(QInputMethod);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 62, column 12>
//   // proto:  QRectF QInputMethod::inputItemRectangle();
// _ZNK12QInputMethod18inputItemRectangleEv inputItemRectangle()
extern "C"
QRectF*
C_ZNK12QInputMethod18inputItemRectangleEv(void *qthis) {
  auto ret =
  ((QInputMethod*)qthis)->inputItemRectangle();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 49, column 5>
//   // proto:  const QMetaObject * QInputMethod::metaObject();
// _ZNK12QInputMethod10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QInputMethod10metaObjectEv(void *qthis) {
  auto ret =
  ((QInputMethod*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 59, column 16>
//   // proto:  QTransform QInputMethod::inputItemTransform();
// _ZNK12QInputMethod18inputItemTransformEv inputItemTransform()
extern "C"
QTransform*
C_ZNK12QInputMethod18inputItemTransformEv(void *qthis) {
  auto ret =
  ((QInputMethod*)qthis)->inputItemTransform();
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 100, column 10>
//   // proto:  void QInputMethod::visibleChanged();
// _ZN12QInputMethod14visibleChangedEv visibleChanged()
extern "C"
void
C_ZN12QInputMethod14visibleChangedEv(void *qthis) {
  ((QInputMethod*)qthis)->visibleChanged();
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 89, column 10>
//   // proto:  void QInputMethod::hide();
// _ZN12QInputMethod4hideEv hide()
extern "C"
void
C_ZN12QInputMethod4hideEv(void *qthis) {
  ((QInputMethod*)qthis)->hide();
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 69, column 12>
//   // proto:  QRectF QInputMethod::keyboardRectangle();
// _ZNK12QInputMethod17keyboardRectangleEv keyboardRectangle()
extern "C"
QRectF*
C_ZNK12QInputMethod17keyboardRectangleEv(void *qthis) {
  auto ret =
  ((QInputMethod*)qthis)->keyboardRectangle();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 99, column 10>
//   // proto:  void QInputMethod::keyboardRectangleChanged();
// _ZN12QInputMethod24keyboardRectangleChangedEv keyboardRectangleChanged()
extern "C"
void
C_ZN12QInputMethod24keyboardRectangleChangedEv(void *qthis) {
  ((QInputMethod*)qthis)->keyboardRectangleChanged();
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 88, column 10>
//   // proto:  void QInputMethod::show();
// _ZN12QInputMethod4showEv show()
extern "C"
void
C_ZN12QInputMethod4showEv(void *qthis) {
  ((QInputMethod*)qthis)->show();
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 83, column 25>
//   // proto:  Qt::LayoutDirection QInputMethod::inputDirection();
// _ZNK12QInputMethod14inputDirectionEv inputDirection()
extern "C"
Qt::LayoutDirection
C_ZNK12QInputMethod14inputDirectionEv(void *qthis) {
  auto ret =
  ((QInputMethod*)qthis)->inputDirection();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 80, column 10>
//   // proto:  bool QInputMethod::isAnimating();
// _ZNK12QInputMethod11isAnimatingEv isAnimating()
extern "C"
bool
C_ZNK12QInputMethod11isAnimatingEv(void *qthis) {
  auto ret =
  ((QInputMethod*)qthis)->isAnimating();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 85, column 21>
//   // proto: static QVariant QInputMethod::queryFocusObject(Qt::InputMethodQuery query, QVariant argument);
// _ZN12QInputMethod16queryFocusObjectEN2Qt16InputMethodQueryE8QVariant queryFocusObject(Qt::InputMethodQuery, class QVariant)
extern "C"
QVariant*
C_ZN12QInputMethod16queryFocusObjectEN2Qt16InputMethodQueryE8QVariant(Qt::InputMethodQuery* arg1,
QVariant* arg2) {
  auto ret =
  QInputMethod::queryFocusObject(*((Qt::InputMethodQuery*)arg1),
*((QVariant*)arg2));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 101, column 10>
//   // proto:  void QInputMethod::animatingChanged();
// _ZN12QInputMethod16animatingChangedEv animatingChanged()
extern "C"
void
C_ZN12QInputMethod16animatingChangedEv(void *qthis) {
  ((QInputMethod*)qthis)->animatingChanged();
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 103, column 10>
//   // proto:  void QInputMethod::inputDirectionChanged(Qt::LayoutDirection newDirection);
// _ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE inputDirectionChanged(Qt::LayoutDirection)
extern "C"
void
C_ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(void *qthis,
Qt::LayoutDirection* arg1) {
  ((QInputMethod*)qthis)->inputDirectionChanged(*((Qt::LayoutDirection*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 78, column 10>
//   // proto:  void QInputMethod::setVisible(bool visible);
// _ZN12QInputMethod10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN12QInputMethod10setVisibleEb(void *qthis,
bool arg1) {
  ((QInputMethod*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 63, column 10>
//   // proto:  void QInputMethod::setInputItemRectangle(const QRectF & rect);
// _ZN12QInputMethod21setInputItemRectangleERK6QRectF setInputItemRectangle(const class QRectF &)
extern "C"
void
C_ZN12QInputMethod21setInputItemRectangleERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QInputMethod*)qthis)->setInputItemRectangle(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 102, column 10>
//   // proto:  void QInputMethod::localeChanged();
// _ZN12QInputMethod13localeChangedEv localeChanged()
extern "C"
void
C_ZN12QInputMethod13localeChangedEv(void *qthis) {
  ((QInputMethod*)qthis)->localeChanged();
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 93, column 10>
//   // proto:  void QInputMethod::commit();
// _ZN12QInputMethod6commitEv commit()
extern "C"
void
C_ZN12QInputMethod6commitEv(void *qthis) {
  ((QInputMethod*)qthis)->commit();
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 60, column 10>
//   // proto:  void QInputMethod::setInputItemTransform(const QTransform & transform);
// _ZN12QInputMethod21setInputItemTransformERK10QTransform setInputItemTransform(const class QTransform &)
extern "C"
void
C_ZN12QInputMethod21setInputItemTransformERK10QTransform(void *qthis,
const QTransform* arg1) {
  ((QInputMethod*)qthis)->setInputItemTransform(*((const QTransform*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 95, column 10>
//   // proto:  void QInputMethod::invokeAction(QInputMethod::Action a, int cursorPosition);
// _ZN12QInputMethod12invokeActionENS_6ActionEi invokeAction(enum QInputMethod::Action, int)
extern "C"
void
C_ZN12QInputMethod12invokeActionENS_6ActionEi(void *qthis,
QInputMethod::Action arg1,
int arg2) {
  ((QInputMethod*)qthis)->invokeAction(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 66, column 12>
//   // proto:  QRectF QInputMethod::cursorRectangle();
// _ZNK12QInputMethod15cursorRectangleEv cursorRectangle()
extern "C"
QRectF*
C_ZNK12QInputMethod15cursorRectangleEv(void *qthis) {
  auto ret =
  ((QInputMethod*)qthis)->cursorRectangle();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 77, column 10>
//   // proto:  bool QInputMethod::isVisible();
// _ZNK12QInputMethod9isVisibleEv isVisible()
extern "C"
bool
C_ZNK12QInputMethod9isVisibleEv(void *qthis) {
  auto ret =
  ((QInputMethod*)qthis)->isVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 98, column 10>
//   // proto:  void QInputMethod::cursorRectangleChanged();
// _ZN12QInputMethod22cursorRectangleChangedEv cursorRectangleChanged()
extern "C"
void
C_ZN12QInputMethod22cursorRectangleChangedEv(void *qthis) {
  ((QInputMethod*)qthis)->cursorRectangleChanged();
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 82, column 13>
//   // proto:  QLocale QInputMethod::locale();
// _ZNK12QInputMethod6localeEv locale()
extern "C"
QLocale*
C_ZNK12QInputMethod6localeEv(void *qthis) {
  auto ret =
  ((QInputMethod*)qthis)->locale();
  return new QLocale(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 92, column 10>
//   // proto:  void QInputMethod::reset();
// _ZN12QInputMethod5resetEv reset()
extern "C"
void
C_ZN12QInputMethod5resetEv(void *qthis) {
  ((QInputMethod*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtGui/qinputmethod.h', line 91, column 10>
//   // proto:  void QInputMethod::update(Qt::InputMethodQueries queries);
// _ZN12QInputMethod6updateE6QFlagsIN2Qt16InputMethodQueryEE update(Qt::InputMethodQueries)
extern "C"
void
C_ZN12QInputMethod6updateE6QFlagsIN2Qt16InputMethodQueryEE(void *qthis,
Qt::InputMethodQueries* arg1) {
  ((QInputMethod*)qthis)->update(*((Qt::InputMethodQueries*)arg1));
}
// <= ext block end

// body block begin =>
// QInputMethod_SlotProxy here
class QInputMethod_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QInputMethod_SlotProxy():QObject(){}

public slots:
  // cursorRectangleChanged()
  void slot_proxy_func__ZN12QInputMethod22cursorRectangleChangedEv();
public:
  void (*slot_func__ZN12QInputMethod22cursorRectangleChangedEv)(void* rsfptr) = NULL;
public slots:
  // localeChanged()
  void slot_proxy_func__ZN12QInputMethod13localeChangedEv();
public:
  void (*slot_func__ZN12QInputMethod13localeChangedEv)(void* rsfptr) = NULL;
public slots:
  // visibleChanged()
  void slot_proxy_func__ZN12QInputMethod14visibleChangedEv();
public:
  void (*slot_func__ZN12QInputMethod14visibleChangedEv)(void* rsfptr) = NULL;
public slots:
  // keyboardRectangleChanged()
  void slot_proxy_func__ZN12QInputMethod24keyboardRectangleChangedEv();
public:
  void (*slot_func__ZN12QInputMethod24keyboardRectangleChangedEv)(void* rsfptr) = NULL;
public slots:
  // inputDirectionChanged(Qt::LayoutDirection)
  void slot_proxy_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(Qt::LayoutDirection arg0);
public:
  void (*slot_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE)(void* rsfptr, Qt::LayoutDirection arg0) = NULL;
public slots:
  // animatingChanged()
  void slot_proxy_func__ZN12QInputMethod16animatingChangedEv();
public:
  void (*slot_func__ZN12QInputMethod16animatingChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qinputmethod.moc"

extern "C" {
  QInputMethod_SlotProxy* QInputMethod_SlotProxy_new()
  {
    return new QInputMethod_SlotProxy();
  }
};

void QInputMethod_SlotProxy::slot_proxy_func__ZN12QInputMethod22cursorRectangleChangedEv() {
  if (this->slot_func__ZN12QInputMethod22cursorRectangleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QInputMethod22cursorRectangleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QInputMethod_SlotProxy_connect__ZN12QInputMethod22cursorRectangleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputMethod_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputMethod22cursorRectangleChangedEv = (decltype(that->slot_func__ZN12QInputMethod22cursorRectangleChangedEv))ffifptr;
  QObject::connect((QInputMethod*)sender, SIGNAL(cursorRectangleChanged()), that, SLOT(slot_proxy_func__ZN12QInputMethod22cursorRectangleChangedEv()));
  return that;
}
extern "C"
void QInputMethod_SlotProxy_disconnect__ZN12QInputMethod22cursorRectangleChangedEv(QInputMethod_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputMethod_SlotProxy::slot_proxy_func__ZN12QInputMethod13localeChangedEv() {
  if (this->slot_func__ZN12QInputMethod13localeChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QInputMethod13localeChangedEv(this->rsfptr);
  }
}
extern "C"
void* QInputMethod_SlotProxy_connect__ZN12QInputMethod13localeChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputMethod_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputMethod13localeChangedEv = (decltype(that->slot_func__ZN12QInputMethod13localeChangedEv))ffifptr;
  QObject::connect((QInputMethod*)sender, SIGNAL(localeChanged()), that, SLOT(slot_proxy_func__ZN12QInputMethod13localeChangedEv()));
  return that;
}
extern "C"
void QInputMethod_SlotProxy_disconnect__ZN12QInputMethod13localeChangedEv(QInputMethod_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputMethod_SlotProxy::slot_proxy_func__ZN12QInputMethod14visibleChangedEv() {
  if (this->slot_func__ZN12QInputMethod14visibleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QInputMethod14visibleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QInputMethod_SlotProxy_connect__ZN12QInputMethod14visibleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputMethod_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputMethod14visibleChangedEv = (decltype(that->slot_func__ZN12QInputMethod14visibleChangedEv))ffifptr;
  QObject::connect((QInputMethod*)sender, SIGNAL(visibleChanged()), that, SLOT(slot_proxy_func__ZN12QInputMethod14visibleChangedEv()));
  return that;
}
extern "C"
void QInputMethod_SlotProxy_disconnect__ZN12QInputMethod14visibleChangedEv(QInputMethod_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputMethod_SlotProxy::slot_proxy_func__ZN12QInputMethod24keyboardRectangleChangedEv() {
  if (this->slot_func__ZN12QInputMethod24keyboardRectangleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QInputMethod24keyboardRectangleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QInputMethod_SlotProxy_connect__ZN12QInputMethod24keyboardRectangleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputMethod_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputMethod24keyboardRectangleChangedEv = (decltype(that->slot_func__ZN12QInputMethod24keyboardRectangleChangedEv))ffifptr;
  QObject::connect((QInputMethod*)sender, SIGNAL(keyboardRectangleChanged()), that, SLOT(slot_proxy_func__ZN12QInputMethod24keyboardRectangleChangedEv()));
  return that;
}
extern "C"
void QInputMethod_SlotProxy_disconnect__ZN12QInputMethod24keyboardRectangleChangedEv(QInputMethod_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputMethod_SlotProxy::slot_proxy_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(Qt::LayoutDirection arg0) {
  if (this->slot_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE != NULL) {
    // do smth...
    this->slot_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(this->rsfptr, arg0);
  }
}
extern "C"
void* QInputMethod_SlotProxy_connect__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputMethod_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE = (decltype(that->slot_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE))ffifptr;
  QObject::connect((QInputMethod*)sender, SIGNAL(inputDirectionChanged(Qt::LayoutDirection)), that, SLOT(slot_proxy_func__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(Qt::LayoutDirection arg0)));
  return that;
}
extern "C"
void QInputMethod_SlotProxy_disconnect__ZN12QInputMethod21inputDirectionChangedEN2Qt15LayoutDirectionE(QInputMethod_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QInputMethod_SlotProxy::slot_proxy_func__ZN12QInputMethod16animatingChangedEv() {
  if (this->slot_func__ZN12QInputMethod16animatingChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN12QInputMethod16animatingChangedEv(this->rsfptr);
  }
}
extern "C"
void* QInputMethod_SlotProxy_connect__ZN12QInputMethod16animatingChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QInputMethod_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QInputMethod16animatingChangedEv = (decltype(that->slot_func__ZN12QInputMethod16animatingChangedEv))ffifptr;
  QObject::connect((QInputMethod*)sender, SIGNAL(animatingChanged()), that, SLOT(slot_proxy_func__ZN12QInputMethod16animatingChangedEv()));
  return that;
}
extern "C"
void QInputMethod_SlotProxy_disconnect__ZN12QInputMethod16animatingChangedEv(QInputMethod_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

