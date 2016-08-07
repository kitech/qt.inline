// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qabstracttextdocumentlayout.h
// dst-file: /src/gui/qabstracttextdocumentlayout.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstracttextdocumentlayout.h>


#include <qsize.h>
#include <qstring.h>
#include <qrect.h>
// <= header block end

// main block begin =>
void __keep_qabstracttextdocumentlayout_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextObjectInterface_Class_Size()
{
  return sizeof(QTextObjectInterface);
}

extern "C"
int QAbstractTextDocumentLayout_Class_Size()
{
  return sizeof(QAbstractTextDocumentLayout);
}

// <= use block end

// ext block begin =>
//   // proto:  void QTextObjectInterface::~QTextObjectInterface();
extern "C"
void C_ZN20QTextObjectInterfaceD2Ev(void *qthis) {
  delete (QTextObjectInterface*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 138, column 20>
//   // proto:  QSizeF QTextObjectInterface::intrinsicSize(QTextDocument * doc, int posInDocument, const QTextFormat & format);
// _ZN20QTextObjectInterface13intrinsicSizeEP13QTextDocumentiRK11QTextFormat intrinsicSize(class QTextDocument *, int, const class QTextFormat &)
extern "C"
QSizeF*
C_ZN20QTextObjectInterface13intrinsicSizeEP13QTextDocumentiRK11QTextFormat(void *qthis,
QTextDocument * arg1,
int arg2,
const QTextFormat* arg3) {
  auto ret =
  ((QTextObjectInterface*)qthis)->intrinsicSize(arg1,
arg2,
*((const QTextFormat*)arg3));
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 139, column 18>
//   // proto:  void QTextObjectInterface::drawObject(QPainter * painter, const QRectF & rect, QTextDocument * doc, int posInDocument, const QTextFormat & format);
// _ZN20QTextObjectInterface10drawObjectEP8QPainterRK6QRectFP13QTextDocumentiRK11QTextFormat drawObject(class QPainter *, const class QRectF &, class QTextDocument *, int, const class QTextFormat &)
extern "C"
void
C_ZN20QTextObjectInterface10drawObjectEP8QPainterRK6QRectFP13QTextDocumentiRK11QTextFormat(void *qthis,
QPainter * arg1,
const QRectF* arg2,
QTextDocument * arg3,
int arg4,
const QTextFormat* arg5) {
  ((QTextObjectInterface*)qthis)->drawObject(arg1,
*((const QRectF*)arg2),
arg3,
arg4,
*((const QTextFormat*)arg5));
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 59, column 5>
//   // proto:  const QMetaObject * QAbstractTextDocumentLayout::metaObject();
// _ZNK27QAbstractTextDocumentLayout10metaObjectEv metaObject()
extern "C"
void*
C_ZNK27QAbstractTextDocumentLayout10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractTextDocumentLayout*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 98, column 10>
//   // proto:  void QAbstractTextDocumentLayout::registerHandler(int objectType, QObject * component);
// _ZN27QAbstractTextDocumentLayout15registerHandlerEiP7QObject registerHandler(int, class QObject *)
extern "C"
void
C_ZN27QAbstractTextDocumentLayout15registerHandlerEiP7QObject(void *qthis,
int arg1,
QObject * arg2) {
  ((QAbstractTextDocumentLayout*)qthis)->registerHandler(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 87, column 17>
//   // proto:  int QAbstractTextDocumentLayout::pageCount();
// _ZNK27QAbstractTextDocumentLayout9pageCountEv pageCount()
extern "C"
int
C_ZNK27QAbstractTextDocumentLayout9pageCountEv(void *qthis) {
  auto ret =
  ((QAbstractTextDocumentLayout*)qthis)->pageCount();
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QAbstractTextDocumentLayout::~QAbstractTextDocumentLayout();
extern "C"
void C_ZN27QAbstractTextDocumentLayoutD2Ev(void *qthis) {
  delete (QAbstractTextDocumentLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 84, column 17>
//   // proto:  int QAbstractTextDocumentLayout::hitTest(const QPointF & point, Qt::HitTestAccuracy accuracy);
// _ZNK27QAbstractTextDocumentLayout7hitTestERK7QPointFN2Qt15HitTestAccuracyE hitTest(const class QPointF &, Qt::HitTestAccuracy)
extern "C"
int
C_ZNK27QAbstractTextDocumentLayout7hitTestERK7QPointFN2Qt15HitTestAccuracyE(void *qthis,
const QPointF* arg1,
Qt::HitTestAccuracy* arg2) {
  auto ret =
  ((QAbstractTextDocumentLayout*)qthis)->hitTest(*((const QPointF*)arg1),
*((Qt::HitTestAccuracy*)arg2));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 93, column 10>
//   // proto:  void QAbstractTextDocumentLayout::setPaintDevice(QPaintDevice * device);
// _ZN27QAbstractTextDocumentLayout14setPaintDeviceEP12QPaintDevice setPaintDevice(class QPaintDevice *)
extern "C"
void
C_ZN27QAbstractTextDocumentLayout14setPaintDeviceEP12QPaintDevice(void *qthis,
QPaintDevice * arg1) {
  ((QAbstractTextDocumentLayout*)qthis)->setPaintDevice(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 106, column 10>
//   // proto:  void QAbstractTextDocumentLayout::pageCountChanged(int newPages);
// _ZN27QAbstractTextDocumentLayout16pageCountChangedEi pageCountChanged(int)
extern "C"
void
C_ZN27QAbstractTextDocumentLayout16pageCountChangedEi(void *qthis,
int arg1) {
  ((QAbstractTextDocumentLayout*)qthis)->pageCountChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 96, column 20>
//   // proto:  QTextDocument * QAbstractTextDocumentLayout::document();
// _ZNK27QAbstractTextDocumentLayout8documentEv document()
extern "C"
void*
C_ZNK27QAbstractTextDocumentLayout8documentEv(void *qthis) {
  auto ret =
  ((QAbstractTextDocumentLayout*)qthis)->document();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 103, column 10>
//   // proto:  void QAbstractTextDocumentLayout::update(const QRectF & );
// _ZN27QAbstractTextDocumentLayout6updateERK6QRectF update(const class QRectF &)
extern "C"
void
C_ZN27QAbstractTextDocumentLayout6updateERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QAbstractTextDocumentLayout*)qthis)->update(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 104, column 10>
//   // proto:  void QAbstractTextDocumentLayout::updateBlock(const QTextBlock & block);
// _ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock updateBlock(const class QTextBlock &)
extern "C"
void
C_ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(void *qthis,
const QTextBlock* arg1) {
  ((QAbstractTextDocumentLayout*)qthis)->updateBlock(*((const QTextBlock*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 99, column 10>
//   // proto:  void QAbstractTextDocumentLayout::unregisterHandler(int objectType, QObject * component);
// _ZN27QAbstractTextDocumentLayout17unregisterHandlerEiP7QObject unregisterHandler(int, class QObject *)
extern "C"
void
C_ZN27QAbstractTextDocumentLayout17unregisterHandlerEiP7QObject(void *qthis,
int arg1,
QObject * arg2) {
  ((QAbstractTextDocumentLayout*)qthis)->unregisterHandler(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 63, column 14>
//   // proto:  void QAbstractTextDocumentLayout::QAbstractTextDocumentLayout(QTextDocument * doc);
extern "C"
QAbstractTextDocumentLayout*
C_ZN27QAbstractTextDocumentLayoutC2EP13QTextDocument(QTextDocument * arg1) {
  // auto ret = new QAbstractTextDocumentLayout(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 88, column 20>
//   // proto:  QSizeF QAbstractTextDocumentLayout::documentSize();
// _ZNK27QAbstractTextDocumentLayout12documentSizeEv documentSize()
extern "C"
QSizeF*
C_ZNK27QAbstractTextDocumentLayout12documentSizeEv(void *qthis) {
  auto ret =
  ((QAbstractTextDocumentLayout*)qthis)->documentSize();
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 94, column 19>
//   // proto:  QPaintDevice * QAbstractTextDocumentLayout::paintDevice();
// _ZNK27QAbstractTextDocumentLayout11paintDeviceEv paintDevice()
extern "C"
void*
C_ZNK27QAbstractTextDocumentLayout11paintDeviceEv(void *qthis) {
  auto ret =
  ((QAbstractTextDocumentLayout*)qthis)->paintDevice();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 85, column 13>
//   // proto:  QString QAbstractTextDocumentLayout::anchorAt(const QPointF & pos);
// _ZNK27QAbstractTextDocumentLayout8anchorAtERK7QPointF anchorAt(const class QPointF &)
extern "C"
QString*
C_ZNK27QAbstractTextDocumentLayout8anchorAtERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QAbstractTextDocumentLayout*)qthis)->anchorAt(*((const QPointF*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 100, column 27>
//   // proto:  QTextObjectInterface * QAbstractTextDocumentLayout::handlerForObject(int objectType);
// _ZNK27QAbstractTextDocumentLayout16handlerForObjectEi handlerForObject(int)
extern "C"
void*
C_ZNK27QAbstractTextDocumentLayout16handlerForObjectEi(void *qthis,
int arg1) {
  auto ret =
  ((QAbstractTextDocumentLayout*)qthis)->handlerForObject(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 90, column 20>
//   // proto:  QRectF QAbstractTextDocumentLayout::frameBoundingRect(QTextFrame * frame);
// _ZNK27QAbstractTextDocumentLayout17frameBoundingRectEP10QTextFrame frameBoundingRect(class QTextFrame *)
extern "C"
QRectF*
C_ZNK27QAbstractTextDocumentLayout17frameBoundingRectEP10QTextFrame(void *qthis,
QTextFrame * arg1) {
  auto ret =
  ((QAbstractTextDocumentLayout*)qthis)->frameBoundingRect(arg1);
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 83, column 18>
//   // proto:  void QAbstractTextDocumentLayout::draw(QPainter * painter, const QAbstractTextDocumentLayout::PaintContext & context);
// _ZN27QAbstractTextDocumentLayout4drawEP8QPainterRKNS_12PaintContextE draw(class QPainter *, const struct QAbstractTextDocumentLayout::PaintContext &)
extern "C"
void
C_ZN27QAbstractTextDocumentLayout4drawEP8QPainterRKNS_12PaintContextE(void *qthis,
QPainter * arg1,
const QAbstractTextDocumentLayout::PaintContext* arg2) {
  ((QAbstractTextDocumentLayout*)qthis)->draw(arg1,
*((const QAbstractTextDocumentLayout::PaintContext*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 105, column 10>
//   // proto:  void QAbstractTextDocumentLayout::documentSizeChanged(const QSizeF & newSize);
// _ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF documentSizeChanged(const class QSizeF &)
extern "C"
void
C_ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(void *qthis,
const QSizeF* arg1) {
  ((QAbstractTextDocumentLayout*)qthis)->documentSizeChanged(*((const QSizeF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qabstracttextdocumentlayout.h', line 91, column 20>
//   // proto:  QRectF QAbstractTextDocumentLayout::blockBoundingRect(const QTextBlock & block);
// _ZNK27QAbstractTextDocumentLayout17blockBoundingRectERK10QTextBlock blockBoundingRect(const class QTextBlock &)
extern "C"
QRectF*
C_ZNK27QAbstractTextDocumentLayout17blockBoundingRectERK10QTextBlock(void *qthis,
const QTextBlock* arg1) {
  auto ret =
  ((QAbstractTextDocumentLayout*)qthis)->blockBoundingRect(*((const QTextBlock*)arg1));
  return new QRectF(ret); // 5
}
// <= ext block end

// body block begin =>
// QAbstractTextDocumentLayout_SlotProxy here
class QAbstractTextDocumentLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractTextDocumentLayout_SlotProxy():QObject(){}

public slots:
  // pageCountChanged(int)
  void slot_proxy_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi(int arg0);
public:
  void (*slot_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // update(const class QRectF &)
  void slot_proxy_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF(const QRectF & arg0);
public:
  void (*slot_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF)(void* rsfptr, const QRectF & arg0) = NULL;
public slots:
  // documentSizeChanged(const class QSizeF &)
  void slot_proxy_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(const QSizeF & arg0);
public:
  void (*slot_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF)(void* rsfptr, const QSizeF & arg0) = NULL;
public slots:
  // updateBlock(const class QTextBlock &)
  void slot_proxy_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(const QTextBlock & arg0);
public:
  void (*slot_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock)(void* rsfptr, const QTextBlock & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qabstracttextdocumentlayout.moc"

extern "C" {
  QAbstractTextDocumentLayout_SlotProxy* QAbstractTextDocumentLayout_SlotProxy_new()
  {
    return new QAbstractTextDocumentLayout_SlotProxy();
  }
};

void QAbstractTextDocumentLayout_SlotProxy::slot_proxy_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi(int arg0) {
  if (this->slot_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractTextDocumentLayout_SlotProxy_connect__ZN27QAbstractTextDocumentLayout16pageCountChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractTextDocumentLayout_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi = (decltype(that->slot_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi))ffifptr;
  QObject::connect((QAbstractTextDocumentLayout*)sender, SIGNAL(pageCountChanged(int)), that, SLOT(slot_proxy_func__ZN27QAbstractTextDocumentLayout16pageCountChangedEi(int arg0)));
  return that;
}
extern "C"
void QAbstractTextDocumentLayout_SlotProxy_disconnect__ZN27QAbstractTextDocumentLayout16pageCountChangedEi(QAbstractTextDocumentLayout_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractTextDocumentLayout_SlotProxy::slot_proxy_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF(const QRectF & arg0) {
  if (this->slot_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF != NULL) {
    // do smth...
    this->slot_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractTextDocumentLayout_SlotProxy_connect__ZN27QAbstractTextDocumentLayout6updateERK6QRectF(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractTextDocumentLayout_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF = (decltype(that->slot_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF))ffifptr;
  QObject::connect((QAbstractTextDocumentLayout*)sender, SIGNAL(update(const class QRectF &)), that, SLOT(slot_proxy_func__ZN27QAbstractTextDocumentLayout6updateERK6QRectF(const QRectF & arg0)));
  return that;
}
extern "C"
void QAbstractTextDocumentLayout_SlotProxy_disconnect__ZN27QAbstractTextDocumentLayout6updateERK6QRectF(QAbstractTextDocumentLayout_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractTextDocumentLayout_SlotProxy::slot_proxy_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(const QSizeF & arg0) {
  if (this->slot_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF != NULL) {
    // do smth...
    this->slot_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractTextDocumentLayout_SlotProxy_connect__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractTextDocumentLayout_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF = (decltype(that->slot_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF))ffifptr;
  QObject::connect((QAbstractTextDocumentLayout*)sender, SIGNAL(documentSizeChanged(const class QSizeF &)), that, SLOT(slot_proxy_func__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(const QSizeF & arg0)));
  return that;
}
extern "C"
void QAbstractTextDocumentLayout_SlotProxy_disconnect__ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(QAbstractTextDocumentLayout_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractTextDocumentLayout_SlotProxy::slot_proxy_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(const QTextBlock & arg0) {
  if (this->slot_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock != NULL) {
    // do smth...
    this->slot_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractTextDocumentLayout_SlotProxy_connect__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractTextDocumentLayout_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock = (decltype(that->slot_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock))ffifptr;
  QObject::connect((QAbstractTextDocumentLayout*)sender, SIGNAL(updateBlock(const class QTextBlock &)), that, SLOT(slot_proxy_func__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(const QTextBlock & arg0)));
  return that;
}
extern "C"
void QAbstractTextDocumentLayout_SlotProxy_disconnect__ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(QAbstractTextDocumentLayout_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

