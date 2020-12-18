//  header block begin

// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstracttextdocumentlayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QAbstractTextDocumentLayout is pure virtual: true true
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
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
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

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
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

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
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
// Protected purevirtual virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

// Protected virtual Ignore Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstracttextdocumentlayout(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:60
// [8] QString tr(const char *, const char *, int) 
// (12)qm3933609376 (43)_ZN27QAbstractTextDocumentLayout2trEPKcS1_i
//static
/*void qm3933609376(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QAbstractTextDocumentLayout::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QAbstractTextDocumentLayout::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QAbstractTextDocumentLayoutD2Ev(void *this_)*/ {
  delete (QAbstractTextDocumentLayout*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstracttextdocumentlayout
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
