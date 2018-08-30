//  header block begin
// since 0x040100
// /usr/include/qt/QtSvg/qsvgrenderer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsvgrenderer.h>
#include <QtSvg>
#include "callback_inherit.h"

// QSvgRenderer is pure virtual: false
// QSvgRenderer has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSvgRenderer_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSvgRenderer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSvgRenderer_t qt_meta_stringdata_MyQSvgRenderer = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQSvgRenderer"
  },
  "MyQSvgRenderer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSvgRenderer[] = {
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
class Q_DECL_EXPORT MyQSvgRenderer : public QSvgRenderer {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSvgRenderer::staticMetaObject,
  qt_meta_stringdata_MyQSvgRenderer.data,
  qt_meta_data_MyQSvgRenderer,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSvgRenderer.stringdata0))
      return static_cast<void*>(this);
  return QSvgRenderer::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSvgRenderer::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSvgRenderer() {}
// void QSvgRenderer(QObject *)
MyQSvgRenderer(QObject * parent) : QSvgRenderer(parent) {}
// void QSvgRenderer(const QString &, QObject *)
MyQSvgRenderer(const QString & filename, QObject * parent) : QSvgRenderer(filename, parent) {}
// void QSvgRenderer(const QByteArray &, QObject *)
MyQSvgRenderer(const QByteArray & contents, QObject * parent) : QSvgRenderer(contents, parent) {}
// void QSvgRenderer(QXmlStreamReader *, QObject *)
MyQSvgRenderer(QXmlStreamReader * contents, QObject * parent) : QSvgRenderer(contents, parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QSvgRenderer_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSvgRenderer* qo = (MyQSvgRenderer*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSvgRenderer10metaObjectEv(void *this_) {
  return (void*)((QSvgRenderer*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QSvgRenderer11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSvgRenderer*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN12QSvgRenderer11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSvgRenderer*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QSvgRenderer2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSvgRenderer::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QSvgRenderer6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSvgRenderer::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:68
// [-2] void QSvgRenderer(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QSvgRendererC2EP7QObject(QObject * parent) {
  return  new MyQSvgRenderer(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:69
// [-2] void QSvgRenderer(const QString &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QSvgRendererC2ERK7QStringP7QObject(QString* filename, QObject * parent) {
  return  new MyQSvgRenderer(*filename, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:70
// [-2] void QSvgRenderer(const QByteArray &, QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QSvgRendererC2ERK10QByteArrayP7QObject(QByteArray* contents, QObject * parent) {
  return  new MyQSvgRenderer(*contents, parent);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtSvg/qsvgrenderer.h:71
// [-2] void QSvgRenderer(QXmlStreamReader *, QObject *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void* C_ZN12QSvgRendererC2EP16QXmlStreamReaderP7QObject(QXmlStreamReader * contents, QObject * parent) {
  return  new MyQSvgRenderer(contents, parent);
}
#endif // QT_VERSION >= 0x040500

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:72
// [-2] void ~QSvgRenderer()
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRendererD2Ev(void *this_) {
  delete (QSvgRenderer*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:74
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QSvgRenderer7isValidEv(void *this_) {
  return (bool)((QSvgRenderer*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:76
// [8] QSize defaultSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSvgRenderer11defaultSizeEv(void *this_) {
  auto rv = ((QSvgRenderer*)this_)->defaultSize();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:78
// [16] QRect viewBox()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSvgRenderer7viewBoxEv(void *this_) {
  auto rv = ((QSvgRenderer*)this_)->viewBox();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:79
// [32] QRectF viewBoxF()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSvgRenderer8viewBoxFEv(void *this_) {
  auto rv = ((QSvgRenderer*)this_)->viewBoxF();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:80
// [-2] void setViewBox(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer10setViewBoxERK5QRect(void *this_, QRect* viewbox) {
  ((QSvgRenderer*)this_)->setViewBox(*viewbox);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:81
// [-2] void setViewBox(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer10setViewBoxERK6QRectF(void *this_, QRectF* viewbox) {
  ((QSvgRenderer*)this_)->setViewBox(*viewbox);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:83
// [1] bool animated()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QSvgRenderer8animatedEv(void *this_) {
  return (bool)((QSvgRenderer*)this_)->animated();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:84
// [4] int framesPerSecond()
extern "C" Q_DECL_EXPORT
int C_ZNK12QSvgRenderer15framesPerSecondEv(void *this_) {
  return (int)((QSvgRenderer*)this_)->framesPerSecond();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:85
// [-2] void setFramesPerSecond(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer18setFramesPerSecondEi(void *this_, int num) {
  ((QSvgRenderer*)this_)->setFramesPerSecond(num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:86
// [4] int currentFrame()
extern "C" Q_DECL_EXPORT
int C_ZNK12QSvgRenderer12currentFrameEv(void *this_) {
  return (int)((QSvgRenderer*)this_)->currentFrame();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:87
// [-2] void setCurrentFrame(int)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer15setCurrentFrameEi(void *this_, int arg0) {
  ((QSvgRenderer*)this_)->setCurrentFrame(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:88
// [4] int animationDuration()
extern "C" Q_DECL_EXPORT
int C_ZNK12QSvgRenderer17animationDurationEv(void *this_) {
  return (int)((QSvgRenderer*)this_)->animationDuration();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtSvg/qsvgrenderer.h:90
// [32] QRectF boundsOnElement(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSvgRenderer15boundsOnElementERK7QString(void *this_, QString* id) {
  auto rv = ((QSvgRenderer*)this_)->boundsOnElement(*id);
return new QRectF(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtSvg/qsvgrenderer.h:91
// [1] bool elementExists(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK12QSvgRenderer13elementExistsERK7QString(void *this_, QString* id) {
  return (bool)((QSvgRenderer*)this_)->elementExists(*id);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtSvg/qsvgrenderer.h:92
// [48] QMatrix matrixForElement(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSvgRenderer16matrixForElementERK7QString(void *this_, QString* id) {
  auto rv = ((QSvgRenderer*)this_)->matrixForElement(*id);
return new QMatrix(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:95
// [1] bool load(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QSvgRenderer4loadERK7QString(void *this_, QString* filename) {
  return (bool)((QSvgRenderer*)this_)->load(*filename);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:96
// [1] bool load(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZN12QSvgRenderer4loadERK10QByteArray(void *this_, QByteArray* contents) {
  return (bool)((QSvgRenderer*)this_)->load(*contents);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtSvg/qsvgrenderer.h:97
// [1] bool load(QXmlStreamReader *)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
bool C_ZN12QSvgRenderer4loadEP16QXmlStreamReader(void *this_, QXmlStreamReader * contents) {
  return (bool)((QSvgRenderer*)this_)->load(contents);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:98
// [-2] void render(QPainter *)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer6renderEP8QPainter(void *this_, QPainter * p) {
  ((QSvgRenderer*)this_)->render(p);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:99
// [-2] void render(QPainter *, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer6renderEP8QPainterRK6QRectF(void *this_, QPainter * p, QRectF* bounds) {
  ((QSvgRenderer*)this_)->render(p, *bounds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:101
// [-2] void render(QPainter *, const QString &, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer6renderEP8QPainterRK7QStringRK6QRectF(void *this_, QPainter * p, QString* elementId, QRectF* bounds) {
  ((QSvgRenderer*)this_)->render(p, *elementId, *bounds);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgrenderer.h:105
// [-2] void repaintNeeded()
extern "C" Q_DECL_EXPORT
void C_ZN12QSvgRenderer13repaintNeededEv(void *this_) {
  ((QSvgRenderer*)this_)->repaintNeeded();
}

//  main block end
