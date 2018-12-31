//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(textedit)
// since 0x040400
// /usr/include/qt/QtWidgets/qplaintextedit.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qplaintextedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QPlainTextDocumentLayout is pure virtual: false
// QPlainTextDocumentLayout has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPlainTextDocumentLayout_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPlainTextDocumentLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPlainTextDocumentLayout_t qt_meta_stringdata_MyQPlainTextDocumentLayout = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQPlainTextDocumentLayout"
  },
  "MyQPlainTextDocumentLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPlainTextDocumentLayout[] = {
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
class Q_DECL_EXPORT MyQPlainTextDocumentLayout : public QPlainTextDocumentLayout {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QPlainTextDocumentLayout::staticMetaObject,
  qt_meta_stringdata_MyQPlainTextDocumentLayout.data,
  qt_meta_data_MyQPlainTextDocumentLayout,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQPlainTextDocumentLayout.stringdata0))
      return static_cast<void*>(this);
  return QPlainTextDocumentLayout::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QPlainTextDocumentLayout::qt_metacall(_c, _id, _a);
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
  virtual ~MyQPlainTextDocumentLayout() {}
// void QPlainTextDocumentLayout(QTextDocument *)
MyQPlainTextDocumentLayout(QTextDocument * document) : QPlainTextDocumentLayout(document) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void documentChanged(int, int, int)
  virtual void documentChanged(int from, int arg1, int charsAdded)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"documentChanged", &handled, 3, (uint64_t)from, (uint64_t)arg1, (uint64_t)charsAdded, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QPlainTextDocumentLayout::documentChanged(from, arg1, charsAdded);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QPlainTextDocumentLayout_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQPlainTextDocumentLayout* qo = (MyQPlainTextDocumentLayout*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:323
// [-2] void documentChanged(int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN24QPlainTextDocumentLayout15documentChangedEiii(void *this_, int from, int arg1, int charsAdded) {
  ((QPlainTextDocumentLayout*)this_)->QPlainTextDocumentLayout::documentChanged(from, arg1, charsAdded);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:298
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QPlainTextDocumentLayout10metaObjectEv(void *this_) {
  return (void*)((QPlainTextDocumentLayout*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:298
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QPlainTextDocumentLayout11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QPlainTextDocumentLayout*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:298
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN24QPlainTextDocumentLayout11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QPlainTextDocumentLayout*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:298
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN24QPlainTextDocumentLayout2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPlainTextDocumentLayout::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:298
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN24QPlainTextDocumentLayout6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QPlainTextDocumentLayout::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:303
// [-2] void QPlainTextDocumentLayout(QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN24QPlainTextDocumentLayoutC2EP13QTextDocument(QTextDocument * document) {
  auto _nilp = (MyQPlainTextDocumentLayout*)(0);
  return  new MyQPlainTextDocumentLayout(document);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:304
// [-2] void ~QPlainTextDocumentLayout()
extern "C" Q_DECL_EXPORT
void C_ZN24QPlainTextDocumentLayoutD2Ev(void *this_) {
  delete (QPlainTextDocumentLayout*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:306
// [-2] void draw(QPainter *, const QAbstractTextDocumentLayout::PaintContext &)
extern "C" Q_DECL_EXPORT
void C_ZN24QPlainTextDocumentLayout4drawEP8QPainterRKN27QAbstractTextDocumentLayout12PaintContextE(void *this_, QPainter * arg0, QAbstractTextDocumentLayout::PaintContext* arg1) {
  ((QPlainTextDocumentLayout*)this_)->draw(arg0, *arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:307
// [4] int hitTest(const QPointF &, Qt::HitTestAccuracy)
extern "C" Q_DECL_EXPORT
int C_ZNK24QPlainTextDocumentLayout7hitTestERK7QPointFN2Qt15HitTestAccuracyE(void *this_, QPointF* arg0, Qt::HitTestAccuracy arg1) {
  return (int)((QPlainTextDocumentLayout*)this_)->hitTest(*arg0, arg1);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:309
// [4] int pageCount()
extern "C" Q_DECL_EXPORT
int C_ZNK24QPlainTextDocumentLayout9pageCountEv(void *this_) {
  return (int)((QPlainTextDocumentLayout*)this_)->pageCount();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:310
// [16] QSizeF documentSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QPlainTextDocumentLayout12documentSizeEv(void *this_) {
  auto rv = ((QPlainTextDocumentLayout*)this_)->documentSize();
return new QSizeF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:312
// [32] QRectF frameBoundingRect(QTextFrame *)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QPlainTextDocumentLayout17frameBoundingRectEP10QTextFrame(void *this_, QTextFrame * arg0) {
  auto rv = ((QPlainTextDocumentLayout*)this_)->frameBoundingRect(arg0);
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:313
// [32] QRectF blockBoundingRect(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void* C_ZNK24QPlainTextDocumentLayout17blockBoundingRectERK10QTextBlock(void *this_, QTextBlock* block) {
  auto rv = ((QPlainTextDocumentLayout*)this_)->blockBoundingRect(*block);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:315
// [-2] void ensureBlockLayout(const QTextBlock &)
extern "C" Q_DECL_EXPORT
void C_ZNK24QPlainTextDocumentLayout17ensureBlockLayoutERK10QTextBlock(void *this_, QTextBlock* block) {
  ((QPlainTextDocumentLayout*)this_)->ensureBlockLayout(*block);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:317
// [-2] void setCursorWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN24QPlainTextDocumentLayout14setCursorWidthEi(void *this_, int width) {
  ((QPlainTextDocumentLayout*)this_)->setCursorWidth(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:318
// [4] int cursorWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK24QPlainTextDocumentLayout11cursorWidthEv(void *this_) {
  return (int)((QPlainTextDocumentLayout*)this_)->cursorWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qplaintextedit.h:320
// [-2] void requestUpdate()
extern "C" Q_DECL_EXPORT
void C_ZN24QPlainTextDocumentLayout13requestUpdateEv(void *this_) {
  ((QPlainTextDocumentLayout*)this_)->requestUpdate();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(textedit)
#endif // #ifndef QT_MINIMAL
//  footer block end
