// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qclipboard.h
// dst-file: /src/gui/qclipboard.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qclipboard.h>


#include <qimage.h>
#include <qpixmap.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qclipboard_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QClipboard_Class_Size()
{
  return sizeof(QClipboard);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 74, column 12>
//   // proto:  QImage QClipboard::image(QClipboard::Mode mode);
// _ZNK10QClipboard5imageENS_4ModeE image(enum QClipboard::Mode)
extern "C"
QImage*
C_ZNK10QClipboard5imageENS_4ModeE(void *qthis,
QClipboard::Mode arg1) {
  auto ret =
  ((QClipboard*)qthis)->image(arg1);
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 69, column 10>
//   // proto:  void QClipboard::setText(const QString & , QClipboard::Mode mode);
// _ZN10QClipboard7setTextERK7QStringNS_4ModeE setText(const class QString &, enum QClipboard::Mode)
extern "C"
void
C_ZN10QClipboard7setTextERK7QStringNS_4ModeE(void *qthis,
const QString* arg1,
QClipboard::Mode arg2) {
  ((QClipboard*)qthis)->setText(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 61, column 10>
//   // proto:  bool QClipboard::supportsFindBuffer();
// _ZNK10QClipboard18supportsFindBufferEv supportsFindBuffer()
extern "C"
bool
C_ZNK10QClipboard18supportsFindBufferEv(void *qthis) {
  auto ret =
  ((QClipboard*)qthis)->supportsFindBuffer();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 77, column 10>
//   // proto:  void QClipboard::setPixmap(const QPixmap & , QClipboard::Mode mode);
// _ZN10QClipboard9setPixmapERK7QPixmapNS_4ModeE setPixmap(const class QPixmap &, enum QClipboard::Mode)
extern "C"
void
C_ZN10QClipboard9setPixmapERK7QPixmapNS_4ModeE(void *qthis,
const QPixmap* arg1,
QClipboard::Mode arg2) {
  ((QClipboard*)qthis)->setPixmap(*((const QPixmap*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 81, column 10>
//   // proto:  void QClipboard::selectionChanged();
// _ZN10QClipboard16selectionChangedEv selectionChanged()
extern "C"
void
C_ZN10QClipboard16selectionChangedEv(void *qthis) {
  ((QClipboard*)qthis)->selectionChanged();
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 65, column 10>
//   // proto:  bool QClipboard::ownsFindBuffer();
// _ZNK10QClipboard14ownsFindBufferEv ownsFindBuffer()
extern "C"
bool
C_ZNK10QClipboard14ownsFindBufferEv(void *qthis) {
  auto ret =
  ((QClipboard*)qthis)->ownsFindBuffer();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 83, column 10>
//   // proto:  void QClipboard::dataChanged();
// _ZN10QClipboard11dataChangedEv dataChanged()
extern "C"
void
C_ZN10QClipboard11dataChangedEv(void *qthis) {
  ((QClipboard*)qthis)->dataChanged();
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 72, column 10>
//   // proto:  void QClipboard::setMimeData(QMimeData * data, QClipboard::Mode mode);
// _ZN10QClipboard11setMimeDataEP9QMimeDataNS_4ModeE setMimeData(class QMimeData *, enum QClipboard::Mode)
extern "C"
void
C_ZN10QClipboard11setMimeDataEP9QMimeDataNS_4ModeE(void *qthis,
QMimeData * arg1,
QClipboard::Mode arg2) {
  ((QClipboard*)qthis)->setMimeData(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 64, column 10>
//   // proto:  bool QClipboard::ownsClipboard();
// _ZNK10QClipboard13ownsClipboardEv ownsClipboard()
extern "C"
bool
C_ZNK10QClipboard13ownsClipboardEv(void *qthis) {
  auto ret =
  ((QClipboard*)qthis)->ownsClipboard();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 80, column 10>
//   // proto:  void QClipboard::changed(QClipboard::Mode mode);
// _ZN10QClipboard7changedENS_4ModeE changed(class QClipboard::Mode)
extern "C"
void
C_ZN10QClipboard7changedENS_4ModeE(void *qthis,
QClipboard::Mode* arg1) {
  ((QClipboard*)qthis)->changed(*((QClipboard::Mode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 75, column 13>
//   // proto:  QPixmap QClipboard::pixmap(QClipboard::Mode mode);
// _ZNK10QClipboard6pixmapENS_4ModeE pixmap(enum QClipboard::Mode)
extern "C"
QPixmap*
C_ZNK10QClipboard6pixmapENS_4ModeE(void *qthis,
QClipboard::Mode arg1) {
  auto ret =
  ((QClipboard*)qthis)->pixmap(arg1);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 68, column 13>
//   // proto:  QString QClipboard::text(QString & subtype, QClipboard::Mode mode);
// _ZNK10QClipboard4textER7QStringNS_4ModeE text(class QString &, enum QClipboard::Mode)
extern "C"
QString*
C_ZNK10QClipboard4textER7QStringNS_4ModeE(void *qthis,
QString* arg1,
QClipboard::Mode arg2) {
  auto ret =
  ((QClipboard*)qthis)->text(*((QString*)arg1),
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 50, column 5>
//   // proto:  const QMetaObject * QClipboard::metaObject();
// _ZNK10QClipboard10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QClipboard10metaObjectEv(void *qthis) {
  auto ret =
  ((QClipboard*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 76, column 10>
//   // proto:  void QClipboard::setImage(const QImage & , QClipboard::Mode mode);
// _ZN10QClipboard8setImageERK6QImageNS_4ModeE setImage(const class QImage &, enum QClipboard::Mode)
extern "C"
void
C_ZN10QClipboard8setImageERK6QImageNS_4ModeE(void *qthis,
const QImage* arg1,
QClipboard::Mode arg2) {
  ((QClipboard*)qthis)->setImage(*((const QImage*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 67, column 13>
//   // proto:  QString QClipboard::text(QClipboard::Mode mode);
// _ZNK10QClipboard4textENS_4ModeE text(enum QClipboard::Mode)
extern "C"
QString*
C_ZNK10QClipboard4textENS_4ModeE(void *qthis,
QClipboard::Mode arg1) {
  auto ret =
  ((QClipboard*)qthis)->text(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 60, column 10>
//   // proto:  bool QClipboard::supportsSelection();
// _ZNK10QClipboard17supportsSelectionEv supportsSelection()
extern "C"
bool
C_ZNK10QClipboard17supportsSelectionEv(void *qthis) {
  auto ret =
  ((QClipboard*)qthis)->supportsSelection();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 71, column 22>
//   // proto:  const QMimeData * QClipboard::mimeData(QClipboard::Mode mode);
// _ZNK10QClipboard8mimeDataENS_4ModeE mimeData(enum QClipboard::Mode)
extern "C"
void*
C_ZNK10QClipboard8mimeDataENS_4ModeE(void *qthis,
QClipboard::Mode arg1) {
  auto ret =
  ((QClipboard*)qthis)->mimeData(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 63, column 10>
//   // proto:  bool QClipboard::ownsSelection();
// _ZNK10QClipboard13ownsSelectionEv ownsSelection()
extern "C"
bool
C_ZNK10QClipboard13ownsSelectionEv(void *qthis) {
  auto ret =
  ((QClipboard*)qthis)->ownsSelection();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 82, column 10>
//   // proto:  void QClipboard::findBufferChanged();
// _ZN10QClipboard17findBufferChangedEv findBufferChanged()
extern "C"
void
C_ZN10QClipboard17findBufferChangedEv(void *qthis) {
  ((QClipboard*)qthis)->findBufferChanged();
}
// <SourceLocation file '/usr/include/qt/QtGui/qclipboard.h', line 58, column 10>
//   // proto:  void QClipboard::clear(QClipboard::Mode mode);
// _ZN10QClipboard5clearENS_4ModeE clear(enum QClipboard::Mode)
extern "C"
void
C_ZN10QClipboard5clearENS_4ModeE(void *qthis,
QClipboard::Mode arg1) {
  ((QClipboard*)qthis)->clear(arg1);
}
// <= ext block end

// body block begin =>
// QClipboard_SlotProxy here
class QClipboard_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QClipboard_SlotProxy():QObject(){}

public slots:
  // changed(class QClipboard::Mode)
  void slot_proxy_func__ZN10QClipboard7changedENS_4ModeE(QClipboard::Mode arg0);
public:
  void (*slot_func__ZN10QClipboard7changedENS_4ModeE)(void* rsfptr, QClipboard::Mode arg0) = NULL;
public slots:
  // selectionChanged()
  void slot_proxy_func__ZN10QClipboard16selectionChangedEv();
public:
  void (*slot_func__ZN10QClipboard16selectionChangedEv)(void* rsfptr) = NULL;
public slots:
  // dataChanged()
  void slot_proxy_func__ZN10QClipboard11dataChangedEv();
public:
  void (*slot_func__ZN10QClipboard11dataChangedEv)(void* rsfptr) = NULL;
public slots:
  // findBufferChanged()
  void slot_proxy_func__ZN10QClipboard17findBufferChangedEv();
public:
  void (*slot_func__ZN10QClipboard17findBufferChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qclipboard.moc"

extern "C" {
  QClipboard_SlotProxy* QClipboard_SlotProxy_new()
  {
    return new QClipboard_SlotProxy();
  }
};

void QClipboard_SlotProxy::slot_proxy_func__ZN10QClipboard7changedENS_4ModeE(QClipboard::Mode arg0) {
  if (this->slot_func__ZN10QClipboard7changedENS_4ModeE != NULL) {
    // do smth...
    this->slot_func__ZN10QClipboard7changedENS_4ModeE(this->rsfptr, arg0);
  }
}
extern "C"
void* QClipboard_SlotProxy_connect__ZN10QClipboard7changedENS_4ModeE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QClipboard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QClipboard7changedENS_4ModeE = (decltype(that->slot_func__ZN10QClipboard7changedENS_4ModeE))ffifptr;
  QObject::connect((QClipboard*)sender, SIGNAL(changed(class QClipboard::Mode)), that, SLOT(slot_proxy_func__ZN10QClipboard7changedENS_4ModeE(QClipboard::Mode arg0)));
  return that;
}
extern "C"
void QClipboard_SlotProxy_disconnect__ZN10QClipboard7changedENS_4ModeE(QClipboard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QClipboard_SlotProxy::slot_proxy_func__ZN10QClipboard16selectionChangedEv() {
  if (this->slot_func__ZN10QClipboard16selectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QClipboard16selectionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QClipboard_SlotProxy_connect__ZN10QClipboard16selectionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QClipboard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QClipboard16selectionChangedEv = (decltype(that->slot_func__ZN10QClipboard16selectionChangedEv))ffifptr;
  QObject::connect((QClipboard*)sender, SIGNAL(selectionChanged()), that, SLOT(slot_proxy_func__ZN10QClipboard16selectionChangedEv()));
  return that;
}
extern "C"
void QClipboard_SlotProxy_disconnect__ZN10QClipboard16selectionChangedEv(QClipboard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QClipboard_SlotProxy::slot_proxy_func__ZN10QClipboard11dataChangedEv() {
  if (this->slot_func__ZN10QClipboard11dataChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QClipboard11dataChangedEv(this->rsfptr);
  }
}
extern "C"
void* QClipboard_SlotProxy_connect__ZN10QClipboard11dataChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QClipboard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QClipboard11dataChangedEv = (decltype(that->slot_func__ZN10QClipboard11dataChangedEv))ffifptr;
  QObject::connect((QClipboard*)sender, SIGNAL(dataChanged()), that, SLOT(slot_proxy_func__ZN10QClipboard11dataChangedEv()));
  return that;
}
extern "C"
void QClipboard_SlotProxy_disconnect__ZN10QClipboard11dataChangedEv(QClipboard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QClipboard_SlotProxy::slot_proxy_func__ZN10QClipboard17findBufferChangedEv() {
  if (this->slot_func__ZN10QClipboard17findBufferChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QClipboard17findBufferChangedEv(this->rsfptr);
  }
}
extern "C"
void* QClipboard_SlotProxy_connect__ZN10QClipboard17findBufferChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QClipboard_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QClipboard17findBufferChangedEv = (decltype(that->slot_func__ZN10QClipboard17findBufferChangedEv))ffifptr;
  QObject::connect((QClipboard*)sender, SIGNAL(findBufferChanged()), that, SLOT(slot_proxy_func__ZN10QClipboard17findBufferChangedEv()));
  return that;
}
extern "C"
void QClipboard_SlotProxy_disconnect__ZN10QClipboard17findBufferChangedEv(QClipboard_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

