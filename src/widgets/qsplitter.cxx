// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qsplitter.h
// dst-file: /src/widgets/qsplitter.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsplitter.h>


#include <qbytearray.h>
#include <qsize.h>
#include <qlist.h>
#include <qmetatype.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qsplitter_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSplitter_Class_Size()
{
  return sizeof(QSplitter);
}

extern "C"
int QSplitterHandle_Class_Size()
{
  return sizeof(QSplitterHandle);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 66, column 10>
//   // proto:  void QSplitter::insertWidget(int index, QWidget * widget);
// _ZN9QSplitter12insertWidgetEiP7QWidget insertWidget(int, class QWidget *)
extern "C"
void
C_ZN9QSplitter12insertWidgetEiP7QWidget(void *qthis,
int arg1,
QWidget * arg2) {
  ((QSplitter*)qthis)->insertWidget(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 72, column 10>
//   // proto:  bool QSplitter::childrenCollapsible();
// _ZNK9QSplitter19childrenCollapsibleEv childrenCollapsible()
extern "C"
bool
C_ZNK9QSplitter19childrenCollapsibleEv(void *qthis) {
  auto ret =
  ((QSplitter*)qthis)->childrenCollapsible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 94, column 9>
//   // proto:  int QSplitter::count();
// _ZNK9QSplitter5countEv count()
extern "C"
int
C_ZNK9QSplitter5countEv(void *qthis) {
  auto ret =
  ((QSplitter*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 102, column 10>
//   // proto:  void QSplitter::splitterMoved(int pos, int index);
// _ZN9QSplitter13splitterMovedEii splitterMoved(int, int)
extern "C"
void
C_ZN9QSplitter13splitterMovedEii(void *qthis,
int arg1,
int arg2) {
  ((QSplitter*)qthis)->splitterMoved(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 68, column 10>
//   // proto:  void QSplitter::setOrientation(Qt::Orientation );
// _ZN9QSplitter14setOrientationEN2Qt11OrientationE setOrientation(Qt::Orientation)
extern "C"
void
C_ZN9QSplitter14setOrientationEN2Qt11OrientationE(void *qthis,
Qt::Orientation* arg1) {
  ((QSplitter*)qthis)->setOrientation(*((Qt::Orientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 86, column 16>
//   // proto:  QByteArray QSplitter::saveState();
// _ZNK9QSplitter9saveStateEv saveState()
extern "C"
QByteArray*
C_ZNK9QSplitter9saveStateEv(void *qthis) {
  auto ret =
  ((QSplitter*)qthis)->saveState();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 53, column 5>
//   // proto:  const QMetaObject * QSplitter::metaObject();
// _ZNK9QSplitter10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QSplitter10metaObjectEv(void *qthis) {
  auto ret =
  ((QSplitter*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 77, column 10>
//   // proto:  bool QSplitter::opaqueResize();
// _ZNK9QSplitter12opaqueResizeEv opaqueResize()
extern "C"
bool
C_ZNK9QSplitter12opaqueResizeEv(void *qthis) {
  auto ret =
  ((QSplitter*)qthis)->opaqueResize();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 65, column 10>
//   // proto:  void QSplitter::addWidget(QWidget * widget);
// _ZN9QSplitter9addWidgetEP7QWidget addWidget(class QWidget *)
extern "C"
void
C_ZN9QSplitter9addWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QSplitter*)qthis)->addWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 61, column 14>
//   // proto:  void QSplitter::QSplitter(QWidget * parent);
extern "C"
QSplitter*
C_ZN9QSplitterC2EP7QWidget(QWidget * arg1) {
  auto ret = new QSplitter(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 90, column 10>
//   // proto:  void QSplitter::setHandleWidth(int );
// _ZN9QSplitter14setHandleWidthEi setHandleWidth(int)
extern "C"
void
C_ZN9QSplitter14setHandleWidthEi(void *qthis,
int arg1) {
  ((QSplitter*)qthis)->setHandleWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 99, column 10>
//   // proto:  void QSplitter::setStretchFactor(int index, int stretch);
// _ZN9QSplitter16setStretchFactorEii setStretchFactor(int, int)
extern "C"
void
C_ZN9QSplitter16setStretchFactorEii(void *qthis,
int arg1,
int arg2) {
  ((QSplitter*)qthis)->setStretchFactor(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 81, column 11>
//   // proto:  QSize QSplitter::minimumSizeHint();
// _ZNK9QSplitter15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK9QSplitter15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QSplitter*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 76, column 10>
//   // proto:  void QSplitter::setOpaqueResize(bool opaque);
// _ZN9QSplitter15setOpaqueResizeEb setOpaqueResize(_Bool)
extern "C"
void
C_ZN9QSplitter15setOpaqueResizeEb(void *qthis,
bool arg1) {
  ((QSplitter*)qthis)->setOpaqueResize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 93, column 14>
//   // proto:  QWidget * QSplitter::widget(int index);
// _ZNK9QSplitter6widgetEi widget(int)
extern "C"
void*
C_ZNK9QSplitter6widgetEi(void *qthis,
int arg1) {
  auto ret =
  ((QSplitter*)qthis)->widget(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 83, column 16>
//   // proto:  QList<int> QSplitter::sizes();
// _ZNK9QSplitter5sizesEv sizes()
extern "C"
QList<int>*
C_ZNK9QSplitter5sizesEv(void *qthis) {
  auto ret =
  ((QSplitter*)qthis)->sizes();
  return new QList<int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 75, column 10>
//   // proto:  bool QSplitter::isCollapsible(int index);
// _ZNK9QSplitter13isCollapsibleEi isCollapsible(int)
extern "C"
bool
C_ZNK9QSplitter13isCollapsibleEi(void *qthis,
int arg1) {
  auto ret =
  ((QSplitter*)qthis)->isCollapsible(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 74, column 10>
//   // proto:  void QSplitter::setCollapsible(int index, bool );
// _ZN9QSplitter14setCollapsibleEib setCollapsible(int, _Bool)
extern "C"
void
C_ZN9QSplitter14setCollapsibleEib(void *qthis,
int arg1,
bool arg2) {
  ((QSplitter*)qthis)->setCollapsible(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 62, column 14>
//   // proto:  void QSplitter::QSplitter(Qt::Orientation , QWidget * parent);
extern "C"
QSplitter*
C_ZN9QSplitterC2EN2Qt11OrientationEP7QWidget(Qt::Orientation* arg1,
QWidget * arg2) {
  auto ret = new QSplitter(*((Qt::Orientation*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 87, column 10>
//   // proto:  bool QSplitter::restoreState(const QByteArray & state);
// _ZN9QSplitter12restoreStateERK10QByteArray restoreState(const class QByteArray &)
extern "C"
bool
C_ZN9QSplitter12restoreStateERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QSplitter*)qthis)->restoreState(*((const QByteArray*)arg1));
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QSplitter::~QSplitter();
extern "C"
void C_ZN9QSplitterD2Ev(void *qthis) {
  delete (QSplitter*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 71, column 10>
//   // proto:  void QSplitter::setChildrenCollapsible(bool );
// _ZN9QSplitter22setChildrenCollapsibleEb setChildrenCollapsible(_Bool)
extern "C"
void
C_ZN9QSplitter22setChildrenCollapsibleEb(void *qthis,
bool arg1) {
  ((QSplitter*)qthis)->setChildrenCollapsible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 69, column 21>
//   // proto:  Qt::Orientation QSplitter::orientation();
// _ZNK9QSplitter11orientationEv orientation()
extern "C"
Qt::Orientation
C_ZNK9QSplitter11orientationEv(void *qthis) {
  auto ret =
  ((QSplitter*)qthis)->orientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 89, column 9>
//   // proto:  int QSplitter::handleWidth();
// _ZNK9QSplitter11handleWidthEv handleWidth()
extern "C"
int
C_ZNK9QSplitter11handleWidthEv(void *qthis) {
  auto ret =
  ((QSplitter*)qthis)->handleWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 78, column 10>
//   // proto:  void QSplitter::refresh();
// _ZN9QSplitter7refreshEv refresh()
extern "C"
void
C_ZN9QSplitter7refreshEv(void *qthis) {
  ((QSplitter*)qthis)->refresh();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 80, column 11>
//   // proto:  QSize QSplitter::sizeHint();
// _ZNK9QSplitter8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK9QSplitter8sizeHintEv(void *qthis) {
  auto ret =
  ((QSplitter*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 92, column 9>
//   // proto:  int QSplitter::indexOf(QWidget * w);
// _ZNK9QSplitter7indexOfEP7QWidget indexOf(class QWidget *)
extern "C"
int
C_ZNK9QSplitter7indexOfEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QSplitter*)qthis)->indexOf(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 96, column 10>
//   // proto:  void QSplitter::getRange(int index, int * , int * );
// _ZNK9QSplitter8getRangeEiPiS0_ getRange(int, int *, int *)
extern "C"
void
C_ZNK9QSplitter8getRangeEiPiS0_(void *qthis,
int arg1,
int * arg2,
int * arg3) {
  ((QSplitter*)qthis)->getRange(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 84, column 10>
//   // proto:  void QSplitter::setSizes(const QList<int> & list);
// _ZN9QSplitter8setSizesERK5QListIiE setSizes(const QList<int> &)
extern "C"
void
C_ZN9QSplitter8setSizesERK5QListIiE(void *qthis,
const QList<int>* arg1) {
  ((QSplitter*)qthis)->setSizes(*((const QList<int>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 97, column 22>
//   // proto:  QSplitterHandle * QSplitter::handle(int index);
// _ZNK9QSplitter6handleEi handle(int)
extern "C"
void*
C_ZNK9QSplitter6handleEi(void *qthis,
int arg1) {
  auto ret =
  ((QSplitter*)qthis)->handle(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 133, column 14>
//   // proto:  void QSplitterHandle::QSplitterHandle(Qt::Orientation o, QSplitter * parent);
extern "C"
QSplitterHandle*
C_ZN15QSplitterHandleC2EN2Qt11OrientationEP9QSplitter(Qt::Orientation* arg1,
QSplitter * arg2) {
  auto ret = new QSplitterHandle(*((Qt::Orientation*)arg1),
arg2);
  return ret;
}
//   // proto:  void QSplitterHandle::~QSplitterHandle();
extern "C"
void C_ZN15QSplitterHandleD2Ev(void *qthis) {
  delete (QSplitterHandle*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 141, column 11>
//   // proto:  QSize QSplitterHandle::sizeHint();
// _ZNK15QSplitterHandle8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK15QSplitterHandle8sizeHintEv(void *qthis) {
  auto ret =
  ((QSplitterHandle*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 138, column 10>
//   // proto:  bool QSplitterHandle::opaqueResize();
// _ZNK15QSplitterHandle12opaqueResizeEv opaqueResize()
extern "C"
bool
C_ZNK15QSplitterHandle12opaqueResizeEv(void *qthis) {
  auto ret =
  ((QSplitterHandle*)qthis)->opaqueResize();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 139, column 16>
//   // proto:  QSplitter * QSplitterHandle::splitter();
// _ZNK15QSplitterHandle8splitterEv splitter()
extern "C"
void*
C_ZNK15QSplitterHandle8splitterEv(void *qthis) {
  auto ret =
  ((QSplitterHandle*)qthis)->splitter();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 136, column 10>
//   // proto:  void QSplitterHandle::setOrientation(Qt::Orientation o);
// _ZN15QSplitterHandle14setOrientationEN2Qt11OrientationE setOrientation(Qt::Orientation)
extern "C"
void
C_ZN15QSplitterHandle14setOrientationEN2Qt11OrientationE(void *qthis,
Qt::Orientation* arg1) {
  ((QSplitterHandle*)qthis)->setOrientation(*((Qt::Orientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 137, column 21>
//   // proto:  Qt::Orientation QSplitterHandle::orientation();
// _ZNK15QSplitterHandle11orientationEv orientation()
extern "C"
Qt::Orientation
C_ZNK15QSplitterHandle11orientationEv(void *qthis) {
  auto ret =
  ((QSplitterHandle*)qthis)->orientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplitter.h', line 131, column 5>
//   // proto:  const QMetaObject * QSplitterHandle::metaObject();
// _ZNK15QSplitterHandle10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QSplitterHandle10metaObjectEv(void *qthis) {
  auto ret =
  ((QSplitterHandle*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QSplitter_SlotProxy here
class QSplitter_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSplitter_SlotProxy():QObject(){}

public slots:
  // splitterMoved(int, int)
  void slot_proxy_func__ZN9QSplitter13splitterMovedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN9QSplitter13splitterMovedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QSplitter_SlotProxy* QSplitter_SlotProxy_new()
  {
    return new QSplitter_SlotProxy();
  }
};

void QSplitter_SlotProxy::slot_proxy_func__ZN9QSplitter13splitterMovedEii(int arg0, int arg1) {
  if (this->slot_func__ZN9QSplitter13splitterMovedEii != NULL) {
    // do smth...
    this->slot_func__ZN9QSplitter13splitterMovedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QSplitter_SlotProxy_connect__ZN9QSplitter13splitterMovedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSplitter_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QSplitter13splitterMovedEii = (decltype(that->slot_func__ZN9QSplitter13splitterMovedEii))ffifptr;
  QObject::connect((QSplitter*)sender, SIGNAL(splitterMoved(int, int)), that, SLOT(slot_proxy_func__ZN9QSplitter13splitterMovedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QSplitter_SlotProxy_disconnect__ZN9QSplitter13splitterMovedEii(QSplitter_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QSplitterHandle_SlotProxy here
class QSplitterHandle_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSplitterHandle_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qsplitter.moc"

extern "C" {
  QSplitterHandle_SlotProxy* QSplitterHandle_SlotProxy_new()
  {
    return new QSplitterHandle_SlotProxy();
  }
};

// <= body block end

