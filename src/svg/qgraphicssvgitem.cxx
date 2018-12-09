//  header block begin

// since 0x040200
// /usr/include/qt/QtSvg/qgraphicssvgitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicssvgitem.h>
#include <QtSvg>
#include "callback_inherit.h"

// QGraphicsSvgItem is pure virtual: false
// QGraphicsSvgItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsSvgItem_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSvgItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSvgItem_t qt_meta_stringdata_MyQGraphicsSvgItem = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQGraphicsSvgItem"
  },
  "MyQGraphicsSvgItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSvgItem[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQGraphicsSvgItem : public QGraphicsSvgItem {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QGraphicsSvgItem::staticMetaObject,
  qt_meta_stringdata_MyQGraphicsSvgItem.data,
  qt_meta_data_MyQGraphicsSvgItem,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQGraphicsSvgItem.stringdata0))
      return static_cast<void*>(this);
  return QGraphicsSvgItem::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QGraphicsSvgItem::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQGraphicsSvgItem() {}
// void QGraphicsSvgItem(QGraphicsItem *)
MyQGraphicsSvgItem(QGraphicsItem * parentItem) : QGraphicsSvgItem(parentItem) {}
// void QGraphicsSvgItem(const QString &, QGraphicsItem *)
MyQGraphicsSvgItem(const QString & fileName, QGraphicsItem * parentItem) : QGraphicsSvgItem(fileName, parentItem) {}
};

extern "C" Q_DECL_EXPORT
void* C_QGraphicsSvgItem_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQGraphicsSvgItem* qo = (MyQGraphicsSvgItem*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGraphicsSvgItem10metaObjectEv(void *this_) {
  return (void*)((QGraphicsSvgItem*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGraphicsSvgItem11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsSvgItem*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN16QGraphicsSvgItem11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsSvgItem*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGraphicsSvgItem2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsSvgItem::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGraphicsSvgItem6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsSvgItem::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:64
// [-2] void QGraphicsSvgItem(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGraphicsSvgItemC2EP13QGraphicsItem(QGraphicsItem * parentItem) {
  return  new MyQGraphicsSvgItem(parentItem);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:65
// [-2] void QGraphicsSvgItem(const QString &, QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QGraphicsSvgItemC2ERK7QStringP13QGraphicsItem(QString* fileName, QGraphicsItem * parentItem) {
  return  new MyQGraphicsSvgItem(*fileName, parentItem);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:67
// [-2] void setSharedRenderer(QSvgRenderer *)
extern "C" Q_DECL_EXPORT
void C_ZN16QGraphicsSvgItem17setSharedRendererEP12QSvgRenderer(void *this_, QSvgRenderer * renderer) {
  ((QGraphicsSvgItem*)this_)->setSharedRenderer(renderer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:68
// [8] QSvgRenderer * renderer()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGraphicsSvgItem8rendererEv(void *this_) {
  return (void*)((QGraphicsSvgItem*)this_)->renderer();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:70
// [-2] void setElementId(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QGraphicsSvgItem12setElementIdERK7QString(void *this_, QString* id) {
  ((QGraphicsSvgItem*)this_)->setElementId(*id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:71
// [8] QString elementId()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGraphicsSvgItem9elementIdEv(void *this_) {
  auto rv = ((QGraphicsSvgItem*)this_)->elementId();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:73
// [-2] void setCachingEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN16QGraphicsSvgItem17setCachingEnabledEb(void *this_, bool arg0) {
  ((QGraphicsSvgItem*)this_)->setCachingEnabled(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:74
// [1] bool isCachingEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QGraphicsSvgItem16isCachingEnabledEv(void *this_) {
  return (bool)((QGraphicsSvgItem*)this_)->isCachingEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:76
// [-2] void setMaximumCacheSize(const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN16QGraphicsSvgItem19setMaximumCacheSizeERK5QSize(void *this_, QSize* size) {
  ((QGraphicsSvgItem*)this_)->setMaximumCacheSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:77
// [8] QSize maximumCacheSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGraphicsSvgItem16maximumCacheSizeEv(void *this_) {
  auto rv = ((QGraphicsSvgItem*)this_)->maximumCacheSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:79
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QGraphicsSvgItem12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsSvgItem*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:81
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN16QGraphicsSvgItem5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsSvgItem*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qgraphicssvgitem.h:86
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK16QGraphicsSvgItem4typeEv(void *this_) {
  return (int)((QGraphicsSvgItem*)this_)->type();
}


extern "C" Q_DECL_EXPORT
void C_ZN16QGraphicsSvgItemD2Ev(void *this_) {
  delete (QGraphicsSvgItem*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
