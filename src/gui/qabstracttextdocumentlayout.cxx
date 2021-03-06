//  header block begin

// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstracttextdocumentlayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QAbstractTextDocumentLayout is pure virtual: true
// QAbstractTextDocumentLayout has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAbstractTextDocumentLayout_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractTextDocumentLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractTextDocumentLayout_t qt_meta_stringdata_MyQAbstractTextDocumentLayout = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQAbstractTextDocumentLayout"
  },
  "MyQAbstractTextDocumentLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractTextDocumentLayout[] = {
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
class Q_DECL_EXPORT MyQAbstractTextDocumentLayout : public QAbstractTextDocumentLayout {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QAbstractTextDocumentLayout::staticMetaObject,
  qt_meta_stringdata_MyQAbstractTextDocumentLayout.data,
  qt_meta_data_MyQAbstractTextDocumentLayout,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQAbstractTextDocumentLayout.stringdata0))
      return static_cast<void*>(this);
  return QAbstractTextDocumentLayout::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QAbstractTextDocumentLayout::qt_metacall(_c, _id, _a);
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
  virtual ~MyQAbstractTextDocumentLayout() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void draw(QPainter *, const QAbstractTextDocumentLayout::PaintContext &)
  virtual void draw(QPainter * painter, const QAbstractTextDocumentLayout::PaintContext & context)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"draw", &handled, 2, (uint64_t)painter, (uint64_t)&context, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractTextDocumentLayout::draw(painter, context);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int hitTest(const QPointF &, Qt::HitTestAccuracy)
  virtual int hitTest(const QPointF & point, Qt::HitTestAccuracy accuracy) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hitTest", &handled, 2, (uint64_t)&point, (uint64_t)accuracy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int pageCount()
  virtual int pageCount() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"pageCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QSizeF documentSize()
  virtual QSizeF documentSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"documentSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSizeF){};}
    auto prv = (QSizeF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSizeF
    } else {
    return (QSizeF){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [32] QRectF frameBoundingRect(QTextFrame *)
  virtual QRectF frameBoundingRect(QTextFrame * frame) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"frameBoundingRect", &handled, 1, (uint64_t)frame, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRectF){};}
    auto prv = (QRectF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRectF
    } else {
    return (QRectF){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [32] QRectF blockBoundingRect(const QTextBlock &)
  virtual QRectF blockBoundingRect(const QTextBlock & block) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"blockBoundingRect", &handled, 1, (uint64_t)&block, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRectF){};}
    auto prv = (QRectF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRectF
    } else {
    return (QRectF){};
  }
  }

// void QAbstractTextDocumentLayout(QTextDocument *)
MyQAbstractTextDocumentLayout(QTextDocument * doc) : QAbstractTextDocumentLayout(doc) {}
// Protected purevirtual virtual Visibility=Default Availability=Available
// [-2] void documentChanged(int, int, int)
  virtual void documentChanged(int from, int charsRemoved, int charsAdded)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"documentChanged", &handled, 3, (uint64_t)from, (uint64_t)charsRemoved, (uint64_t)charsAdded, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractTextDocumentLayout::documentChanged(from, charsRemoved, charsAdded);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeInlineObject(QTextInlineObject, int, const QTextFormat &)
  virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat & format)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeInlineObject", &handled, 3, (uint64_t)&item, (uint64_t)posInDocument, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void positionInlineObject(QTextInlineObject, int, const QTextFormat &)
  virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat & format)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"positionInlineObject", &handled, 3, (uint64_t)&item, (uint64_t)posInDocument, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void drawInlineObject(QPainter *, const QRectF &, QTextInlineObject, int, const QTextFormat &)
  virtual void drawInlineObject(QPainter * painter, const QRectF & rect, QTextInlineObject object, int posInDocument, const QTextFormat & format)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawInlineObject", &handled, 5, (uint64_t)painter, (uint64_t)&rect, (uint64_t)&object, (uint64_t)posInDocument, (uint64_t)&format, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QAbstractTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QAbstractTextDocumentLayout_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQAbstractTextDocumentLayout* qo = (MyQAbstractTextDocumentLayout*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:84
// [-2] void draw(QPainter *, const QAbstractTextDocumentLayout::PaintContext &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:85
// [4] int hitTest(const QPointF &, Qt::HitTestAccuracy)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:91
// [4] int pageCount()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:92
// [16] QSizeF documentSize()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:94
// [32] QRectF frameBoundingRect(QTextFrame *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:95
// [32] QRectF blockBoundingRect(const QTextBlock &)
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:115
// [-2] void documentChanged(int, int, int)
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:117
// [-2] void resizeInlineObject(QTextInlineObject, int, const QTextFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout18resizeInlineObjectE17QTextInlineObjectiRK11QTextFormat(void *this_, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
  ((QAbstractTextDocumentLayout*)this_)->QAbstractTextDocumentLayout::resizeInlineObject(*item, posInDocument, *format);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:118
// [-2] void positionInlineObject(QTextInlineObject, int, const QTextFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout20positionInlineObjectE17QTextInlineObjectiRK11QTextFormat(void *this_, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
  ((QAbstractTextDocumentLayout*)this_)->QAbstractTextDocumentLayout::positionInlineObject(*item, posInDocument, *format);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:119
// [-2] void drawInlineObject(QPainter *, const QRectF &, QTextInlineObject, int, const QTextFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout16drawInlineObjectEP8QPainterRK6QRectF17QTextInlineObjectiRK11QTextFormat(void *this_, QPainter * painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {
  ((QAbstractTextDocumentLayout*)this_)->QAbstractTextDocumentLayout::drawInlineObject(painter, *rect, *object, posInDocument, *format);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:60
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout10metaObjectEv(void *this_) {
  return (void*)((QAbstractTextDocumentLayout*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:60
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAbstractTextDocumentLayout11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QAbstractTextDocumentLayout*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:60
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN27QAbstractTextDocumentLayout11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QAbstractTextDocumentLayout*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:60
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAbstractTextDocumentLayout2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractTextDocumentLayout::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:60
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAbstractTextDocumentLayout6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QAbstractTextDocumentLayout::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:64
// [-2] void QAbstractTextDocumentLayout(QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAbstractTextDocumentLayoutC2EP13QTextDocument(QTextDocument * doc) {
  auto _nilp = (MyQAbstractTextDocumentLayout*)(0);
  return  new MyQAbstractTextDocumentLayout(doc);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:65
// [-2] void ~QAbstractTextDocumentLayout()
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayoutD2Ev(void *this_) {
  delete (QAbstractTextDocumentLayout*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:84
// [-2] void draw(QPainter *, const QAbstractTextDocumentLayout::PaintContext &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout4drawEP8QPainterRKNS_12PaintContextE(void *this_, QPainter * painter, QAbstractTextDocumentLayout::PaintContext* context) {
  ((QAbstractTextDocumentLayout*)this_)->draw(painter, *context);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:85
// [4] int hitTest(const QPointF &, Qt::HitTestAccuracy)
extern "C" Q_DECL_EXPORT
int C_ZNK27QAbstractTextDocumentLayout7hitTestERK7QPointFN2Qt15HitTestAccuracyE(void *this_, QPointF* point, Qt::HitTestAccuracy accuracy) {
  return (int)((QAbstractTextDocumentLayout*)this_)->hitTest(*point, accuracy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:87
// [8] QString anchorAt(const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout8anchorAtERK7QPointF(void *this_, QPointF* pos) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->anchorAt(*pos);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:88
// [8] QString imageAt(const QPointF &)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout7imageAtERK7QPointF(void *this_, QPointF* pos) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->imageAt(*pos);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:89
// [16] QTextFormat formatAt(const QPointF &)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout8formatAtERK7QPointF(void *this_, QPointF* pos) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->formatAt(*pos);
return new QTextFormat(rv);
}
#endif // QT_VERSION >= 0x050800

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:91
// [4] int pageCount()
extern "C" Q_DECL_EXPORT
int C_ZNK27QAbstractTextDocumentLayout9pageCountEv(void *this_) {
  return (int)((QAbstractTextDocumentLayout*)this_)->pageCount();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:92
// [16] QSizeF documentSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout12documentSizeEv(void *this_) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->documentSize();
return new QSizeF(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:94
// [32] QRectF frameBoundingRect(QTextFrame *)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout17frameBoundingRectEP10QTextFrame(void *this_, QTextFrame * frame) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->frameBoundingRect(frame);
return new QRectF(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:95
// [32] QRectF blockBoundingRect(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout17blockBoundingRectERK10QTextBlock(void *this_, QTextBlock* block) {
  auto rv = ((QAbstractTextDocumentLayout*)this_)->blockBoundingRect(*block);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:97
// [-2] void setPaintDevice(QPaintDevice *)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout14setPaintDeviceEP12QPaintDevice(void *this_, QPaintDevice * device) {
  ((QAbstractTextDocumentLayout*)this_)->setPaintDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:98
// [8] QPaintDevice * paintDevice()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout11paintDeviceEv(void *this_) {
  return (void*)((QAbstractTextDocumentLayout*)this_)->paintDevice();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:100
// [8] QTextDocument * document()
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout8documentEv(void *this_) {
  return (void*)((QAbstractTextDocumentLayout*)this_)->document();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:102
// [-2] void registerHandler(int, QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout15registerHandlerEiP7QObject(void *this_, int objectType, QObject * component) {
  ((QAbstractTextDocumentLayout*)this_)->registerHandler(objectType, component);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:103
// [-2] void unregisterHandler(int, QObject *)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout17unregisterHandlerEiP7QObject(void *this_, int objectType, QObject * component) {
  ((QAbstractTextDocumentLayout*)this_)->unregisterHandler(objectType, component);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:104
// [8] QTextObjectInterface * handlerForObject(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK27QAbstractTextDocumentLayout16handlerForObjectEi(void *this_, int objectType) {
  return (void*)((QAbstractTextDocumentLayout*)this_)->handlerForObject(objectType);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:107
// [-2] void update(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout6updateERK6QRectF(void *this_, QRectF* arg0) {
  ((QAbstractTextDocumentLayout*)this_)->update(*arg0);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:108
// [-2] void updateBlock(const QTextBlock &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout11updateBlockERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QAbstractTextDocumentLayout*)this_)->updateBlock(*block);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:109
// [-2] void documentSizeChanged(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout19documentSizeChangedERK6QSizeF(void *this_, QSizeF* newSize) {
  ((QAbstractTextDocumentLayout*)this_)->documentSizeChanged(*newSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:110
// [-2] void pageCountChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QAbstractTextDocumentLayout16pageCountChangedEi(void *this_, int newPages) {
  ((QAbstractTextDocumentLayout*)this_)->pageCountChanged(newPages);
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
