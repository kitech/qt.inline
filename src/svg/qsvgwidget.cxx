//  header block begin
// since 0x040100
// /usr/include/qt/QtSvg/qsvgwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsvgwidget.h>
#include <QtSvg>
#include "callback_inherit.h"

// QSvgWidget is pure virtual: false
// QSvgWidget has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSvgWidget_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSvgWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSvgWidget_t qt_meta_stringdata_MyQSvgWidget = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQSvgWidget"
  },
  "MyQSvgWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSvgWidget[] = {
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
class Q_DECL_EXPORT MyQSvgWidget : public QSvgWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSvgWidget::staticMetaObject,
  qt_meta_stringdata_MyQSvgWidget.data,
  qt_meta_data_MyQSvgWidget,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSvgWidget.stringdata0))
      return static_cast<void*>(this);
  return QSvgWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSvgWidget::qt_metacall(_c, _id, _a);
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
  virtual ~MyQSvgWidget() {}
// void QSvgWidget(QWidget *)
MyQSvgWidget(QWidget * parent) : QSvgWidget(parent) {}
// void QSvgWidget(const QString &, QWidget *)
MyQSvgWidget(const QString & file, QWidget * parent) : QSvgWidget(file, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSvgWidget::paintEvent(event);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:73
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QSvgWidget10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QSvgWidget*)this_)->QSvgWidget::paintEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:60
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSvgWidget10metaObjectEv(void *this_) {
  return (void*)((QSvgWidget*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:60
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSvgWidget11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSvgWidget*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:60
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QSvgWidget11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSvgWidget*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:60
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSvgWidget2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSvgWidget::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:60
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSvgWidget6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSvgWidget::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:62
// [-2] void QSvgWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSvgWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQSvgWidget*)(0);
  return  new MyQSvgWidget(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:63
// [-2] void QSvgWidget(const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSvgWidgetC2ERK7QStringP7QWidget(QString* file, QWidget * parent) {
  auto _nilp = (MyQSvgWidget*)(0);
  return  new MyQSvgWidget(*file, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:64
// [-2] void ~QSvgWidget()
extern "C" Q_DECL_EXPORT
void C_ZN10QSvgWidgetD2Ev(void *this_) {
  delete (QSvgWidget*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:66
// [8] QSvgRenderer * renderer()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSvgWidget8rendererEv(void *this_) {
  return (void*)((QSvgWidget*)this_)->renderer();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:68
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSvgWidget8sizeHintEv(void *this_) {
  auto rv = ((QSvgWidget*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:70
// [-2] void load(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSvgWidget4loadERK7QString(void *this_, QString* file) {
  ((QSvgWidget*)this_)->load(*file);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtSvg/qsvgwidget.h:71
// [-2] void load(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN10QSvgWidget4loadERK10QByteArray(void *this_, QByteArray* contents) {
  ((QSvgWidget*)this_)->load(*contents);
}

//  main block end
